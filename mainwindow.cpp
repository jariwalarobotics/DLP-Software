#include <stdio.h>
#include <stdlib.h>
#include <QFileDialog>
#include <QFileInfo>
#include <QProgressDialog>
#include <QMessageBox>
#include <QTimer>
#include <QTime>
#include <QDateTime>
#include <QTextStream>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QInputDialog>
#include <QDesktopServices>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "BMPParser.h"
#include "API.h"
#include "string.h"
#include "usb.h"
#include "version.h"
#include "firmware.h"
#include "splash.h"
#include "flashloader.h"
#include "PtnImage.h"
#include "batchfile.h"

#define MAX_PATTERNS        24
#define PTN_WIDTH_WQXGA     2560
#define PTN_HEIGHT_WQXGA    1600
#define PTN_WIDTH_1080p     1920
#define PTN_HEIGHT_1080p    1080
#define BYTES_PER_PIXEL     3


QString ErrCodeList[] =
{
    "No Error",
    "Batch file checksum error",
    "Device failure",
    "Invalid command number",
    "In compatible controller / DMD",
    "Command not allowed in current mode",
    "Invalid command parameter",
    "Item referred by the parameter is not present",
    "Out of resource (RAM / Flash)",
    "Invalid BMP compression type",
    "Pattern bit number out of range",
    "Pattern BMP not present in flash",
    "Pattern dark time is out of range",
    "Signal delay parameter is out of range",
    "Pattern exposure time is out of range",
    "Pattern number is out of range",
    "Invalid pattern definition",
};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),

    settings("Texas Instruments", "LightCrafter 6500 GUI")
{

    ui->setupUi(this);

    this->setCentralWidget(ui->scrollArea);

    waveWindow = new WaveFormWindow();
    ui->waveFormArea->setWidget(waveWindow);

    QObject::connect(waveWindow, SIGNAL(selectionChange(int, QList<PatternElement>)),
                     this, SLOT(on_patternSelect(int, QList<PatternElement>)));
    //USB_Init();
    //getSerialPort();
    arduino = new QSerialPort();
    m_ptnImagePath = settings.value("PtnImagePath", "").toString();
    m_ptnSettingPath = settings.value("PtnSettingPath", "").toString();
    m_ptnProfilePath = settings.value("PtnProfilePath", "").toString();
    m_Buadrate = settings.value("Buadrate", "").toString();
    ui->Baudrate->setCurrentText(m_Buadrate);

    m_patternImageChange = false;
    m_ptnWidth = PTN_WIDTH_1080p;
    m_ptnHeight = PTN_HEIGHT_1080p;
    waveWindow->setPatternSize(m_ptnWidth, m_ptnHeight);

    m_dualAsic = false;

    m_dmdDetected = false;

    m_videoPatternMode = false;

    m_firstConnect = false;

    //m_batchFile = BAT_Alloc();

    m_displayCommand = true;

    usbPollTimer = new QTimer(this);
    usbPollTimer->setInterval(1000);
    connect(usbPollTimer, SIGNAL(timeout()), this, SLOT(timer_read_led_driver_Status(void)));

    AutoSendPatSeq = new QTimer(this);
    connect(AutoSendPatSeq, SIGNAL(timeout()), this, SLOT(SendPatSequence(void)));

    char versionStr[255];
    // Display GUI Version #
    sprintf(versionStr, "DLP JGroup - %d.%d.%d", GUI_VERSION_MAJOR, GUI_VERSION_MINOR, GUI_VERSION_BUILD);
    setWindowTitle(versionStr);

    updateMinExposure();
    startTimer(0);

    if (!m_ptnProfilePath.isEmpty()) {
        on_LoadMacProfile_clicked();
    }
}

MainWindow::~MainWindow()
{
    if (USB_Connected)
    {
        USB_Close();
        USB_Exit();
        arduino->close();
    }
    //Close USB connection

    //Store the settings to reuse next time
    settings.value("PtnImagePath", m_ptnImagePath);
    settings.value("PtnSettingPath", m_ptnSettingPath);
    settings.value("PtnProfilePath", m_ptnProfilePath);
    settings.value("Buadrate", m_Buadrate);
    delete ui;

}

bool MainWindow::loadDll()
{
    ahid.setFileName("AHid.dll");

    return ahid.load();
}

/**
 * helper function to show the appropriate status messages
 * @param str - I - the status message string to be displayed
 */
void MainWindow::showStatus(const char *str)
{
    QString title(" Status Message");
    QString text(str);
    QMessageBox msgBox(QMessageBox::Warning, title, text, QMessageBox::NoButton, this);
    msgBox.exec();
}

/**
 * helper function to show the appropriate critical Error messages
 * @param str - I - the error message string to be displayed
 */

void MainWindow::showCriticalError(QString str)
{
    QString title("Critical Error!!!");
    QMessageBox msgBox(QMessageBox::Critical, title, str, QMessageBox::NoButton, this);
    msgBox.exec();
}
/**
 * @brief MainWindow::showError
 * helper function to show the appropriate API Error message
 * @param errMsg - I - error messgae to be shown
 */
void MainWindow::showError(QString errMsg)
{
    QMessageBox errMsgBox;
    char errStr[128];

    if(LCR_ReadErrorString(errStr)<0)
        errMsgBox.setText("Error: " + errMsg);
    else
        errMsgBox.setText(errMsg + "\nError: " + QString::fromLocal8Bit(errStr));

    errMsgBox.exec();
}

/**
 * @brief MainWindow::calculateSingleSplashImageDetails
 * for each of the pattern image on the pattern settings page, calculates the
 * total number of splash images of bit depth 24 based on the bit depth of each image
 * Also calculates the bitposition of each pattern element in the splash Image
 * and the index of the Splash image for each Pattern element
 * @param totalSplashImages - O - Total number of splash images to be created from
 *                                the available Pattern images
 * @return - 0 - success
 *          -1 - failure
 */
int MainWindow::calculateSingleSplashImageDetails(int *SingleSplashImage)
{
    int imgCount = 0;
    int bits = 0;
    int totalBits = 0;
    int elemCount = PatCount;

    if (m_elements[elemCount].bits > 8)
    {
       char dispStr[255];
       sprintf(dispStr, "Error:Bit depth not selected for pattern=%d\n", elemCount);
       showStatus(dispStr);
       return -1;
    }

    totalBits = totalBits + m_elements[elemCount].bits;

    if(totalBits > 12000)
    {
       char dispStr[255];
       sprintf(dispStr, "Error:Total Bit Depth cannot exceed 400");
       showError(dispStr);
       return -1;
    }

    /* Check if the same pattern is used already */
    int i;
    for(i = 0; i < elemCount; i++)
       {
         /* Only if file name and bit depth matches */
         if(m_elements[i].bits == m_elements[elemCount].bits &&
              m_elements[i].name == m_elements[elemCount].name)
         {
              break;
          }
       }
    /* Match found. use the same splash image */
    if(i < elemCount)
      {
         m_elements[elemCount].splashImageIndex = m_elements[i].splashImageIndex;
         m_elements[elemCount].splashImageBitPos = m_elements[i].splashImageBitPos;
      }

    m_elements[elemCount].splashImageIndex = imgCount;
    m_elements[elemCount].splashImageBitPos = bits;
    bits += m_elements[elemCount].bits;


    *SingleSplashImage = imgCount + 1;

    return 0;
}

/**
 * @brief MainWindow::Hide_Frames
 * function to hide all the Frames
 * individual Frames are shown in the Handlers of respective Pushbuttons in the functions below
 */
void MainWindow::hideFrames()
{
    ui->connectButton->setChecked(false);
    ui->pushButton_LEDDriver->setChecked(false);
    ui->pushButton_patternMode->setChecked(false);
    ui->pushButton_ZMachineControl->setChecked(false);
    ui->pushButton_slc->setChecked(false);
}

/**
 * handler function for connectButton on Information page and clicked() event
 * Checks for the USB connection and
 * appropriately sets the "Connected" with green and "Disconnected" with Red
 * This button is not user clickable, but this function is called from MainWindow constructor
 * and is also called on timerTimeout
 */
void MainWindow::on_connectButton_clicked()
{
    static int SLModePrev = -1;
    int SLmode = 3;

    if(!USB_Connected)
    {
        if (USB_IsConnected())
        {
            USB_Close();
            USB_Exit();
        }

       USB_Init();
       getSerialPort();

        if (USB_Open() != 0 || ui->SerialPort->count() == 0)
        {
            showStatus("Error: USB not Connected!!");
            return;
        }
        emit on_ConnectLED_clicked();
        emit on_ConnectBoard_clicked();
        if (LEDConnected1 == false || BoardConnected == false)
        {
            showStatus("Error: Access Driver is Denied!!");
            return;
        }

        USB_Connected = true;
        LCR_SetMode(SLmode);

        if(LCR_GetMode(&SLmode) == 0)
        {
            if (SLmode == 0)
            {
                //ui->patternMode_radioButton->setChecked(false);
                //ui->patternMemory_radioButton->setChecked(false);
            }
            else if (SLmode == 1)
            {
                //ui->patternMode_radioButton->setChecked(true);
                //ui->patternMemory_radioButton->setChecked(false);
                if(SLModePrev != SLmode)
                    on_patternMode_radioButton_clicked();
            }
            else if (SLmode == 2)
            {
               // ui->patternMode_radioButton->setChecked(false);
               // ui->patternMemory_radioButton->setChecked(false);
            }
            else if (SLmode == 3)
            {
                //ui->patternMode_radioButton->setChecked(false);
                //ui->patternMemory_radioButton->setChecked(true);
                if(SLModePrev != SLmode)
                    on_patternMemory_radioButton_clicked();
            }
            SLModePrev = SLmode;
        }
        if (!m_firstConnect)
        {
            int i = 0;
            while (true)
            {
                char batchFileName[16];
                int ret;

                ret = LCR_getBatchFileName(i++, batchFileName);
                if (ret < 0)
                    break;
            }
            m_firstConnect = true;
            m_patternImageChange = true;
        }
        updateMinExposure();
        QIcon icon(":/Images/images/disconnected.png");
        ui->connectButton->setIcon(icon);
    }
    else
    {
        USB_Connected = false;
        USB_Close();
        USB_Exit();
        emit on_ConnectBoard_clicked();
        emit on_ConnectLED_clicked();
        m_firstConnect = false;

        m_dmdDetected = false;
        QIcon icon(":/Images/images/connected.png");
        ui->connectButton->setIcon(icon);
    }
}

/**
 * @brief MainWindow::on_patternMode_radioButton_clicked
 *  Send the API command to go into Pattern mode
 *  Displays the Pattern Mode page of the MainWindow
 */
void MainWindow::on_patternMode_radioButton_clicked()
{
    if (LCR_SetMode(0x1) < 0)
    {
        showError("Unable to switch to pattern mode");
        return;
    }

    emit on_pushButton_patternMode_clicked();

    if (!m_videoPatternMode)
        return;

    m_videoPatternMode = false;
    m_elements.clear();
    waveWindow->updatePatternList(m_elements);
    waveWindow->draw();
    waveWindow->updateVideoPatternMode(false);
    ui->triggerIn_checkBox->setText("Trigger Input");
}

/**
 * @brief MainWindow::on_patternMemory_radioButton_clicked
 *  Send the API command to go into Memory mode
 *  Displays the Pattern Mode page of the MainWindow
 */
void MainWindow::on_patternMemory_radioButton_clicked()
{
    if (LCR_SetMode(0x3) < 0)
    {
        showError("Unable to switch to pattern from Memory mode");
        return;
    }

    m_patternImageChange = true;

    emit on_pushButton_patternMode_clicked();

    if (!m_videoPatternMode)
        return;

    m_videoPatternMode = false;
    m_elements.clear();
    waveWindow->updatePatternList(m_elements);
    waveWindow->draw();
    waveWindow->updateVideoPatternMode(false);
    ui->triggerIn_checkBox->setText("Trigger Input");
}

/**
  * @brief MainWindow::on_pushButton_LEDDriver_clicked
  */
void MainWindow::on_pushButton_LEDDriver_clicked()
{
    hideFrames();

    ui->stackedWidget->setCurrentIndex(1);
    ui->pushButton_LEDDriver->setChecked(true);
}


/**
 * @brief MainWindow::on_pushButton_patternMode_clicked
 */
void MainWindow::on_pushButton_patternMode_clicked()
{
    hideFrames();

    ui->stackedWidget->setCurrentIndex(0);
    ui->pushButton_patternMode->setChecked(true);
}


void MainWindow::on_pushButton_ZMachineControl_clicked()
{
    hideFrames();

    ui->stackedWidget->setCurrentIndex(2);
    ui->pushButton_ZMachineControl->setChecked(true);
}

void MainWindow::timerEvent(QTimerEvent *)
{
    if (AutoSendPatSeq->isActive())
    {
            mSessionTime = mStartTime.msecsTo(QDateTime::currentDateTime());
            qint64 time =  mSessionTime + mResumeSessionTime;;
            unsigned int h = time / 1000 / 60 / 60;
            unsigned int m = (time / 1000 / 60) - (h * 60);
            unsigned int s = (time / 1000) - ((m + (h * 60))* 60); //<<<<<<<<<<<<<<<<<<<<<<
            const QString diff = QString("%1:%2:%3")
                                    .arg(h, 2, 10, QChar('0'))
                                    .arg(m, 2, 10, QChar('0'))
                                    .arg(s, 2, 10, QChar('0'));
            ui->StartTime->setText(diff);
    }
}

void MainWindow::on_pushButton_slc_clicked()
{
    hideFrames();

    ui->stackedWidget->setCurrentIndex(3);
    ui->pushButton_slc->setChecked(true);
}
