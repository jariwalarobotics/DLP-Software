#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include <QFile>
#include <QLibrary>
#include <QTextEdit>
#include <QTableWidget>
#include "waveformwindow.h"
#include "common.h"
#include "definitions.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    BOOL DeviceConnected = false;
    BOOL _connected1 = false;
    BOOL _connected2 = false;
    BOOL _attached1 = false;
    BOOL _attached2 = false;
    int _pipe1;
    int _pipe2;
    unsigned int _repSize1;
    int _outputCount1;
    int _inputCount2;
    unsigned int _vid1;
    unsigned int _pid1;
    unsigned char _repID1;
    int _register1;
    int _register2;
    int _write1;
    int PatCount = 0;
    int delay;


    bool loadDll();

    int AHid_Init()
    {
        unsigned char LicenseKey[] = "IN_VISION_TESTSTAENDE_GUNTRAMS1FD5C1C29EE04879D755C3B46439BA2C27B43F684A4D74E3724D5D6CF575414176F97545576CEE645B5577E47556536FF9";
        AHID_INIT function = (AHID_INIT)ahid.resolve("AHid_Init");
        if (function != NULL)
            return (function)(0, LicenseKey);
        return -1;
    }
    int AHid_Register(int * pipe, unsigned int vid, unsigned int pid, int mi,
                      unsigned char reportId, unsigned char reportSize, unsigned char reportType)
    {
        AHID_REGISTER function = (AHID_REGISTER)ahid.resolve("AHid_Register");
        if (function != NULL)
            return (function)(pipe, vid, pid , mi, reportId, reportSize, reportType);
        return -1;
    }
    int AHid_Deregister(int pipe)
    {
        AHID_DEREGISTER function = (AHID_DEREGISTER)ahid.resolve("AHid_Deregister");
        if (function != NULL)
            return (function)(pipe);
        return -1;
    }
    int AHid_Find(int pipe)
    {
        AHID_FIND function = (AHID_FIND)ahid.resolve("AHid_Find");
        if (function != NULL)
            return (function)(pipe);
        return -1;
    }
    int AHid_Identify(int pipe, unsigned char * buffer, unsigned int size)
    {
        AHID_IDENTIFY function = (AHID_IDENTIFY)ahid.resolve("AHid_Identify");
        if (function != NULL)
            return (function)(pipe, buffer, size);
        return -1;
    }
    int AHid_Request(int pipe)
    {
        AHID_REQUEST function = (AHID_REQUEST)ahid.resolve("AHid_Request");
        if (function != NULL)
            return (function)(pipe);
        return -1;
    }
    int AHid_Read(int pipe, unsigned char * buffer, unsigned int bytesToRead, unsigned int * read)
    {
        AHID_READ function = (AHID_READ)ahid.resolve("AHid_Read");
        if (function != NULL)
            return (function)(pipe, buffer, bytesToRead, read);
        return -1;
    }
    int AHid_Write(int pipe, unsigned char * buffer, unsigned int bytesToWrite, unsigned int * written)
    {
        AHID_WRITE function = (AHID_WRITE)ahid.resolve("AHid_Write");
        if (function != NULL)
            return (function)(pipe, buffer, bytesToWrite, written);
        return -1;
    }
    int AHid_Info()
    {
        AHID_INFO function = (AHID_INFO)ahid.resolve("AHid_Info");
        if (function != NULL)
            return (function)();
        return -1;
    }

    QTextEdit * path;


private slots:
    void showStatus(const char *str);

    void on_addPatternsButton_clicked();
    void on_patternSelect(int index, QList<PatternElement> patElem);
    void on_connectButton_clicked();
    void timerTimeout(void);

    void on_removePatternsButton_clicked();
    void on_patternMode_radioButton_clicked();
    void on_patternMemory_radioButton_clicked();
    void on_pushButton_patternMode_clicked();
    void on_pushButton_info_clicked();
    void on_triggerIn_checkBox_clicked();

    void on_triggerOut2_checkBox_clicked();

    void on_pushButton_LEDDriver_clicked();
    void on_pushButton_patternControls_clicked();
    void on_pushButton_globalSettings_clicked();
    void on_dummyConnection_clicked(bool checked);

    void on_pDMD_radioButton_clicked();
    void on_resetDMD_Button_clicked();
    void on_powerOn_radioButton_clicked();

    void on_saveButton_patternSettings_clicked();
    void on_loadButton_patternSettings_clicked();
    void on_exposure_lineEdit_editingFinished();
    void on_darkPeriod_lineEdit_editingFinished();

    void on_startPatSequence_Button_clicked();
    void on_stopPatSequence_Button_clicked();
    void on_pausePatSequence_Button_clicked();
    void on_selectAllButton_clicked();

    void resizeEvent(QResizeEvent *);

    void on_standBy_radioButton_clicked();
    int calculateSingleSplashImageDetails(int *SingleSplashImage);
    void uploadSingleImageSeq();
    void StartSigleImageSeq();


    void getStatus();
    void getSerialPort();

    void getVersion();
    void getFrmwVersion();
    void showError(QString errMsg);
    void showCriticalError(QString errMsg);

    void updateControls();
    void timer_read_led_driver_Status(void);
    void SendPatSequence(void);
    void on_pushButton_ConnectLED_clicked();
    void On_DataReceived();

    void on_pushButton_RestartLEDDriver_clicked();

    void on_pushButton_EnableIntensityReg_clicked();

    void on_pushButton_SetLEDCurrent_clicked();

    void on_pushButton_LEDPWMON_OFF_clicked();

    void on_pushButton_SetIntensity_clicked();

    void on_pushButton_SwTrigger_clicked();

    void on_pushButton_ExTrigger_clicked();

    void on_pushButton_ZMachineControl_clicked();

    void on_BoardConnect_clicked();

private:

    Ui::MainWindow *ui;
    QLibrary ahid;
    WaveFormWindow *waveWindow;
    QTimer *usbPollTimer;
    QTimer *usbPollTimer2;
    QTimer *AutoSendPatSeq;
    QSettings settings;


    QList<PatternElement> m_elements;
    QList<PatternElement> Auto_m_elements;
    QString m_firmwarePath;
    QString m_ptnImagePath;
    QString m_ptnSettingPath;
    QString m_batchFilePath;

    bool m_dualAsic;
    uint32 m_ptnWidth, m_ptnHeight;
    bool m_dmdDetected;


    bool m_patternImageChange;
    bool m_firstConnect;
    bool m_videoPatternMode;

    int m_displayCommand;

    int minPatExposure[8];

    int addBatchFile(bool *);
    int addPatterns();
    void processChosenFirmwareImage();
    void hideFrames();
    int updateSinglePatternMemory(int totalSplashImages, BOOL firmware);
    void changePtnBitDepth(int ptnNum, int bitDepth);
    void updateBlocks(bool full);
    int GetMinExposure(int bitDetph);
    int GetMinDarktime(int);

    //void updateFWConfigData(Firmware *fw);
    int uploadPatternToEVM(bool master, int splashImageCount, int splash_size, uint08* splash_block);
    void updateMinExposure(void);
    //int displayBatchFile(BAT_BatchFile_t* batchFile, QTableWidget *table);

};

#endif // MAINWINDOW_H
