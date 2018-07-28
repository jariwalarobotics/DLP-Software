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
    USB_Init();

    m_firmwarePath = settings.value("FirmwarePath", "").toString();
    m_ptnImagePath = settings.value("PtnImagePath", "").toString();
    m_ptnSettingPath = settings.value("PtnSettingPath", "").toString();
    m_batchFilePath = settings.value("BatchFilePath", "").toString();

    m_patternImageChange = false;
    m_ptnWidth = PTN_WIDTH_1080p;
    m_ptnHeight = PTN_HEIGHT_1080p;
    waveWindow->setPatternSize(m_ptnWidth, m_ptnHeight);

    m_dualAsic = false;

    m_dmdDetected = false;

    updateBlocks(true);

    m_videoPatternMode = false;

    ui->startPos_label->hide();
    ui->startPos_ComboBox->hide();

   // API_SetDataCallback(updateBatchCallback, this);// Cmd, PayLoad, PayLoadSize));//Cmd, PayLoad,PayLoadSize));

    m_firstConnect = false;

    //m_batchFile = BAT_Alloc();

    m_displayCommand = true;

    emit on_pushButton_info_clicked();
    usbPollTimer = new QTimer(this);
    usbPollTimer->setInterval(1000);
    connect(usbPollTimer, SIGNAL(timeout()), this, SLOT(timer_read_led_driver_Status(void)));

    usbPollTimer2 = new QTimer(this);
    usbPollTimer2->setInterval(2000);
    connect(usbPollTimer2, SIGNAL(timeout()), this, SLOT(timerTimeout()(void)));
    usbPollTimer2->start();

    AutoSendPatSeq = new QTimer(this);
    connect(AutoSendPatSeq, SIGNAL(timeout()), this, SLOT(SendPatSequence(void)));

    ui->EVM_Picture_stackedWidget->setCurrentIndex(0);
    ui->onlineResources_stackedWidget->setCurrentIndex(0);

    char versionStr[255];
    // Display GUI Version #
    sprintf(versionStr, "DLP JGroup - %d.%d.%d", GUI_VERSION_MAJOR, GUI_VERSION_MINOR, GUI_VERSION_BUILD);
    setWindowTitle(versionStr);

    updatePtnCheckbox();
    updateMinExposure();
    emit on_connectButton_clicked();
}

MainWindow::~MainWindow()
{
    //Close USB connection
    USB_Close();
    USB_Exit();

    //Store the settings to reuse next time
    settings.value("FirmwarePath", m_firmwarePath);
    settings.value("PtnImagePath", m_ptnImagePath);
    settings.value("PtnSettingPath", m_ptnSettingPath);
    settings.value("BatchFilePath", m_batchFilePath);

    delete ui;

}

bool MainWindow::loadDll()
{
    ahid.setFileName("AHid.dll");

    return ahid.load();
}

void MainWindow::updateControls()
{
    QString str = ui->pushButton_ConnectLED->text();
    if (str == "Connect")
    {
        ui->pushButton_ConnectLED->setText("Disconnect");
    }
    else
    {
        ui->pushButton_ConnectLED->setText("Connect");
    }
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
 * @brief MainWindow::timerTimeout
 */

void MainWindow::timerTimeout(void)
{
    emit on_connectButton_clicked();
}

/**
 * @brief MainWindow::calculateSplashImageDetails
 * for each of the pattern image on the pattern settings page, calculates the
 * total number of splash images of bit depth 24 based on the bit depth of each image
 * Also calculates the bitposition of each pattern element in the splash Image
 * and the index of the Splash image for each Pattern element
 * @param totalSplashImages - O - Total number of splash images to be created from
 *                                the available Pattern images
 * @return - 0 - success
 *          -1 - failure
 */
int MainWindow::calculateSplashImageDetails(int *totalSplashImages)
{
    int imgCount = 0;
    int bits = 0;
    int totalBits = 0;
    for(int elemCount = 0; elemCount < m_elements.size(); elemCount++)
    {
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
            continue;
        }

        /* If it is the last image or cant fit in the current image */
        if(elemCount == m_elements.size() ||
                (bits + m_elements[elemCount].bits) > 24)
        {
            /* Goto next image */
            imgCount++;
            bits = 0;
        }

        m_elements[elemCount].splashImageIndex = imgCount;
        m_elements[elemCount].splashImageBitPos = bits;
        bits += m_elements[elemCount].bits;
    }

    *totalSplashImages = imgCount + 1;

    return 0;
}


int MainWindow::calculateSingleSplashImageDetails(int *SingleSplashImage)
{
    int imgCount = 0;
    int bits = 0;
    int totalBits = 0;
    int elemCount = 0;

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
    ui->pushButton_info->setChecked(false);
    ui->pushButton_systemControls->setChecked(false);
    ui->pushButton_LEDDriver->setChecked(false);
    ui->pushButton_patternMode->setChecked(false);
}

/**
 * @brief MainWindow::getVersion
 * gets the Application Software, API Software, Software Config and the Sequence Config versions of DLPC350 firmware
 * displays them in the Version label on the Information page
 */
void MainWindow::getVersion()
{
    char versionStr[255];
    unsigned int API_ver, App_ver, SWConfig_ver, SeqConfig_ver;

    if (LCR_GetVersion(&App_ver, &API_ver, &SWConfig_ver, &SeqConfig_ver) == 0)
    {
        sprintf(versionStr, "%d.%d.%d", (App_ver >> 24), ((App_ver << 8) >> 24), ((App_ver << 16) >> 16));
        ui->apiVersionLabel->setText(versionStr);

    }
}

/**
 * @brief MainWindow::getFrmwVersion
 * gets the firmware version and tag information from API
 * sets the Firmware tag label on information Page
 * populates either the "DLP6500" or "DLP9000" radio buttons based on the
 * firmwaretType received from the API
 */
void MainWindow::getFrmwVersion()
{
    char firmwareTag[32];
    unsigned int firmwareType;

    if(LCR_GetFrmwVersion(&firmwareType,firmwareTag)==0)
    {
        ui->firmwareTag_label->setText(QString::fromUtf8(firmwareTag));

        if(!m_dmdDetected)
        {
            if(firmwareType == 2) //WQXGA firmware
            {
                ui->pDMD_radioButton->setChecked(false);
            }
            else if(firmwareType == 1) //1080p firmware
            {
                ui->pDMD_radioButton->setChecked(true);
                on_pDMD_radioButton_clicked();
            }
            else if(firmwareType == 0) //Unknown
                showStatus("Unknown Firmware type detected!");

            m_dmdDetected = true;
        }
    }
}

/**
 * @brief MainWindow::getStatus
 * reads various status indicators from the controller and updates the Status checkboxes accordingly
 */
void MainWindow::getStatus()
{
    unsigned char HWStatus,SysStatus,MainStatus;
    BootLoaderStaus BLStatus;

    if(LCR_GetStatus(&HWStatus,&SysStatus,&MainStatus)==0)
    {
        if(SysStatus & BIT0)
            ui->internalMemTest_checkBox->setChecked(true);
        else
            ui->internalMemTest_checkBox->setChecked(false);

        if(HWStatus & BIT0)
            ui->internalInit_checkBox->setChecked(true);
        else
            ui->internalInit_checkBox->setChecked(false);

        if(HWStatus & BIT1)
            ui->incompatibleASICorDMD_checkBox->setChecked(true);
        else
            ui->incompatibleASICorDMD_checkBox->setChecked(false);

        if(HWStatus & BIT4)
            ui->slaveReady_checkBox->setChecked(true);
        else
            ui->slaveReady_checkBox->setChecked(false);

        if(HWStatus & BIT2)
            ui->DMDResetWaveformControllerErr_checkBox->setChecked(true);
        else
            ui->DMDResetWaveformControllerErr_checkBox->setChecked(false);

        if(HWStatus & BIT3)
            ui->forcedSwapErr_checkBox->setChecked(true);
        else
            ui->forcedSwapErr_checkBox->setChecked(false);

        if(HWStatus & BIT6)
            ui->seqAbortStatus_checkBox->setChecked(true);
        else
            ui->seqAbortStatus_checkBox->setChecked(false);

        if(HWStatus & BIT7)
            ui->seqErr_checkBox->setChecked(true);
        else
            ui->seqErr_checkBox->setChecked(false);

        if(MainStatus & BIT0)
            ui->DMDParkStatus_checkBox->setChecked(true);
        else
            ui->DMDParkStatus_checkBox->setChecked(false);

        if(MainStatus & BIT1)
            ui->sequencerRunState_checkBox->setChecked(true);
        else
            ui->sequencerRunState_checkBox->setChecked(false);

        if(MainStatus & BIT2)
            ui->videoState_checkBox->setChecked(false);
        else
            ui->videoState_checkBox->setChecked(true);

        if(MainStatus & BIT3)
            ui->extSourceLocked_checkBox->setChecked(true);
        else
            ui->extSourceLocked_checkBox->setChecked(false);
    }
    else if(LCR_GetBLStatus(&BLStatus) == 0)
    {
        //This means the device is in boot mode
    }
    else
    {
        USB_Close();
    }
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
    int standBy = 0;

    if(USB_IsConnected() == false)
    {
        USB_Open();
    }

    if(USB_IsConnected())
    {

        getStatus();
        LCR_SetMode(SLmode);

        QIcon icon(":/new/prefix1/Icons/Led_G.png");
        ui->connectButton->setIcon(icon);
        ui->connectButton->setText("Connected");
        ui->operatingModes_groupBox->setEnabled(true);
        ui->status_groupBox->setEnabled(true);

        if(LCR_GetPowerMode(&standBy)==0)
        {
            if(standBy)
            {
                ui->standBy_radioButton->setChecked(true);
                ui->powerOn_radioButton->setChecked(false);
            }
            else
            {
                ui->standBy_radioButton->setChecked(false);
                ui->powerOn_radioButton->setChecked(true);
            }
        }
        if(LCR_GetMode(&SLmode) == 0)
        {
            if (SLmode == 0)
            {
                ui->patternMode_radioButton->setChecked(false);
                ui->patternMemory_radioButton->setChecked(false);
            }
            else if (SLmode == 1)
            {
                ui->patternMode_radioButton->setChecked(true);
                ui->patternMemory_radioButton->setChecked(false);
                if(SLModePrev != SLmode)
                    on_patternMode_radioButton_clicked();
            }
            else if (SLmode == 2)
            {
                ui->patternMode_radioButton->setChecked(false);
                ui->patternMemory_radioButton->setChecked(false);
            }
            else if (SLmode == 3)
            {
                ui->patternMode_radioButton->setChecked(false);
                ui->patternMemory_radioButton->setChecked(true);
                if(SLModePrev != SLmode)
                    on_patternMemory_radioButton_clicked();
            }
            SLModePrev = SLmode;
        }
        if (!m_firstConnect)
        {
            int i = 0;
            getVersion();
            getFrmwVersion();
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
    }
    else
    {
        USB_Close();
        QIcon icon(":/new/prefix1/Icons/Led_R.png");
        ui->connectButton->setIcon(icon);
        ui->connectButton->setText("Disconnected");
        ui->operatingModes_groupBox->setEnabled(false);
        ui->status_groupBox->setEnabled(false);
        m_firstConnect = false;

        ui->internalMemTest_checkBox->setChecked(false);
        ui->internalInit_checkBox->setChecked(false);
        ui->DMDResetWaveformControllerErr_checkBox->setChecked(false);
        ui->forcedSwapErr_checkBox->setChecked(false);
        ui->seqAbortStatus_checkBox->setChecked(false);
        ui->seqErr_checkBox->setChecked(false);
        ui->incompatibleASICorDMD_checkBox->setChecked(false);
        ui->slaveReady_checkBox->setChecked(false);
        ui->DMDParkStatus_checkBox->setChecked(false);
        ui->sequencerRunState_checkBox->setChecked(false);
        ui->videoState_checkBox->setChecked(false);
        ui->extSourceLocked_checkBox->setChecked(false);
        ui->firmwareTag_label->setText("xxxx");
        ui->apiVersionLabel->setText("xx.xx.xx");

        m_dmdDetected = false;
    }
}

/**
 * @brief MainWindow::on_resetDMD_Button_clicked
 *  handler function for resetDMD_Button on Information Page and clicked() event
 *  Send API command to reset the board
 */

void MainWindow::on_resetDMD_Button_clicked()
{
    if (LCR_SetPowerMode(0x2) < 0)
        showError("Unable to reset the board");
}

/**
 * @brief MainWindow::on_powerOn_radioButton_clicked
 */

void MainWindow::on_powerOn_radioButton_clicked()
{
    if (LCR_SetPowerMode(0) < 0)
        showError("Unable to power on the board");
}

/**
 * @brief MainWindow::on_standBy_radioButton_clicked()
 */
void MainWindow::on_standBy_radioButton_clicked()
{
    if(LCR_SetPowerMode(0) < 0)
        showError("Unable to go to stand by");
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
    ui->bitDepth_ComboBox->setCurrentText("8");
    ui->startPos_label->hide();
    ui->startPos_ComboBox->hide();
    ui->triggerIn_checkBox->setText("Trigger Input");
    updatePtnCheckbox();
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
    ui->bitDepth_ComboBox->setCurrentText("8");
    ui->startPos_label->hide();
    ui->startPos_ComboBox->hide();
    ui->triggerIn_checkBox->setText("Trigger Input");
}

/**
 * @brief MainWindow::on_pDMD_radioButton_clicked
 */

void MainWindow::on_pDMD_radioButton_clicked()
{
    m_ptnWidth = PTN_WIDTH_1080p;
    m_ptnHeight = PTN_HEIGHT_1080p;
    ui->EVM_Picture_stackedWidget->setCurrentIndex(0);
    ui->onlineResources_stackedWidget->setCurrentIndex(0);
    waveWindow->setPatternSize(m_ptnWidth, m_ptnHeight);
    m_dualAsic = false;
    updateBlocks(true);
}

/**
  * @brief MainWindow::on_pushButton_info_clicked
  */
void MainWindow::on_pushButton_info_clicked()
{
    hideFrames();

    ui->stackedWidget->setCurrentIndex(0);
    ui->pushButton_info->setChecked(true);
}

/**
  * @brief MainWindow::on_pushButton_LEDDriver_clicked
  */
void MainWindow::on_pushButton_LEDDriver_clicked()
{
    hideFrames();

    ui->stackedWidget->setCurrentIndex(2);
    ui->pushButton_LEDDriver->setChecked(true);
}

/**
  * @brief MainWindow::on_pushButton_systemControls_clicked
  */
void MainWindow::on_pushButton_systemControls_clicked()
{
    hideFrames();

    ui->stackedWidget->setCurrentIndex(1);
    ui->pushButton_systemControls->setChecked(true);
}

/**
  * @brie MainWindow::on_pushButton_globalSettings_clicked
  */
void MainWindow::on_pushButton_globalSettings_clicked()
{

    ui->patternMode_stackedWidget->setCurrentIndex(1);
    ui->pushButton_patternControls->setChecked(false);
    ui->pushButton_globalSettings->setChecked(true);
}


/**
 * @brief MainWindow::on_pushButton_patternMode_clicked
 */
void MainWindow::on_pushButton_patternMode_clicked()
{
    static bool first = false;
    hideFrames();

    if (!first)
    {
        emit on_pushButton_patternControls_clicked();
        first = true;
    }

    ;
    ui->stackedWidget->setCurrentIndex(3);
    ui->pushButton_patternMode->setChecked(true);
}

/**
 * @brief MainWindow::on_pushButton_patternControls_clicked
 */
void MainWindow::on_pushButton_patternControls_clicked()
{

    ui->patternMode_stackedWidget->setCurrentIndex(0);
    ui->pushButton_patternControls->setChecked(true);
    ui->pushButton_globalSettings->setChecked(false);
}

/**
  * @brief MainWindow::on_dummyConection_clicked
  */
void MainWindow::on_dummyConnection_clicked(bool checked)
{
    USB_SetFakeConnection(checked);
}

/**
  * @brief MainWindow::updateBlocks
  * @brief full
  */
void MainWindow::updateBlocks(bool full)
{
    int count = m_dualAsic ? 16 : 15;
    int prevStart = ui->startDmdBlock->currentText().toInt();

    if(full)
    {
        prevStart = 0;
        ui->endDmdBlock->clear();
    }

    ui->startDmdBlock->clear();
    for (int i = 0; i < count; i++)
    {
        ui->startDmdBlock->addItem(QString::number(i));
    }

    if(prevStart < count && prevStart >= 0)
        ui->startDmdBlock->setCurrentIndex(prevStart);
}

/**
  * @brief MainWindow::on_startDmdBlock_currentIndexChanged
  * @param index
  */
void MainWindow::on_startDmdBlock_currentIndexChanged(int index)
{
    int count = m_dualAsic ? 16 : 15;

    int prevEnd = -1;

    if(ui->endDmdBlock->count() > 0)
    {
        prevEnd = ui->endDmdBlock->currentText().toInt();
    }

    ui->endDmdBlock->clear();
    for(int i = index; i <count; i++)
    {
        ui->endDmdBlock->addItem(QString::number(i));
    }

    if(prevEnd >= index)
    {
        ui->endDmdBlock->setCurrentIndex(prevEnd - index);
    }
    else
    {
        ui->endDmdBlock->setCurrentIndex(count - index - 1);
    }
}

void MainWindow::on_ledPulseWidthGet_clicked()
{
    int pulseWidth;
    if(LCR_GetMinLEDPulseWidth(&pulseWidth) < 0)
    {
        showError("Unable to get LED Pulse Width");
        return;
    }

    ui->ledPulseWidth->setValue(pulseWidth);
    updateMinExposure();
}

void MainWindow::on_ledPulseWidthSet_clicked()
{
   int pulseWidth = ui->ledPulseWidth->value();
   if(LCR_SetMinLEDPulseWidth(pulseWidth) < 0)
   {
       showError("Unable to set LED Pulse Width");
       return;
   }
   updateMinExposure();
}
