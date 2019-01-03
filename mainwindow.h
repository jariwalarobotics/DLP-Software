#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include <QFile>
#include <QLibrary>
#include <QTextEdit>
#include <QDateTime>
#include <QTableWidget>
#include <QSerialPort>
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
  /*  struct BOUNDARIES
    {
        int numVertices = 0;
        int numGaps = 0;
        QVector<QVector<float>> VertexList;
    };

    struct LAYERS
    {
        float minZ = 0;
        int numBoundaries = 0;
        BOUNDARIES boundaries;
    };

    struct ENTRY
    {
        float minZLevel = 0;
        float layerThick = 0;
        float lineWidthComp = 0;
        float reserved = 0;
    };

    struct SAMPLINGTBL
    {
        int size;
        ENTRY entry;
        SAMPLINGTBL()
        {
            size = 0;
        }
    };

    struct SLC
    {
        char header;
        uint8 reserved;
        SAMPLINGTBL samplingTbl;
        LAYERS layers;
        SLC()
        {
            header = '0';
            reserved = 0;
        }
    };
*/

    BOOL BoardConnected = false;
    BOOL USB_Connected = false;
    BOOL LEDConnected1 = false;
    BOOL LEDConnected2 = false;
    BOOL LEDAttached1 = false;
    BOOL LEDAttached2 = false;
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
    int ZLiftDelay = 0;
    int ExposureTime = 0;
    int BeforeZTime = 0;
    int PrintingDelay = 0;
    int Intensity = 0;
    int counter = 0;
    BOOL WaitforEndstopHit = false;
    BOOL ZLiftComplete = false;
    BOOL DefaultProfileloaded = false;

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

    void on_removePatternsButton_clicked();
    void on_patternMode_radioButton_clicked();
    void on_patternMemory_radioButton_clicked();
    void on_pushButton_patternMode_clicked();
    void on_triggerIn_checkBox_clicked();

    void on_triggerOut2_checkBox_clicked();

    void on_pushButton_LEDDriver_clicked();

    void on_saveButton_patternSettings_clicked();
    void on_loadButton_patternSettings_clicked();
    void on_exposure_lineEdit_editingFinished();
    void on_BeforeZTime_lineEdit_editingFinished();

    void on_startPatSequence_Button_clicked();
    void on_stopPatSequence_Button_clicked();
    void on_pausePatSequence_Button_clicked();
    void on_selectAllButton_clicked();

    void resizeEvent(QResizeEvent *);

    int calculateSingleSplashImageDetails(int *SingleSplashImage);
    void uploadSingleImageSeq();
    void StartSigleImageSeq();

    void getSerialPort();
    void showError(QString errMsg);
    void showCriticalError(QString errMsg);

    void timer_read_led_driver_Status(void);
    void SendPatSequence(void);
    void ZAxisMovement(QString cmd);
    void on_ConnectLED_clicked();
    void On_DataReceived();

    void on_pushButton_RestartLEDDriver_clicked();

    void on_pushButton_EnableIntensityReg_clicked();

    void on_pushButton_SetLEDCurrent_clicked();

    void on_pushButton_LEDPWMON_OFF_clicked();

    void on_pushButton_SetIntensity_clicked();

    void SetLayerIntensity(int Intensity);

    void on_pushButton_SwTrigger_clicked();

    void on_pushButton_ExTrigger_clicked();

    void on_pushButton_ZMachineControl_clicked();

    void on_ConnectBoard_clicked();

    void on_Moveup100_clicked();

    void on_Movedown100_clicked();

    void on_AutoHome_clicked();

    void on_Moveup01_clicked();

    void on_Movedown50_clicked();

    void on_Moveup50_clicked();

    void on_Moveup10_clicked();

    void on_Movedown10_clicked();

    void on_Moveup1_clicked();

    void on_Movedown1_clicked();

    void on_Movedown01_clicked();

    void writeToBoard(QString cmd);

    void serialdataRead();

    void on_SendManualGcode_clicked();

    void on_ClearManualGcode_clicked();

    void on_MotorConDisable_clicked();

    void on_AutoBedLevel_clicked();

    void on_SaveMacProfile_clicked();

    void on_LoadMacProfile_clicked();

    void on_ManualHoming_clicked();

    void on_AutoHoming_clicked();

    void on_UpdateTotalTime_clicked();

    void on_CalGrayValue_clicked();

    void on_pushButton_slc_clicked();

    void on_PixelShifting_clicked();

    void on_LoadSlcFile_clicked();

    bool folderExists(QString path);

private:

    void timerEvent(QTimerEvent *);
    QDateTime mStartTime;
    qint64 mSessionTime;
    qint64 mResumeSessionTime = 0;
    Ui::MainWindow *ui;
    QLibrary ahid;
    WaveFormWindow *waveWindow;
    QTimer *usbPollTimer;
    QTimer *AutoSendPatSeq;
    QSettings settings;
    QSerialPort *arduino;


    QList<PatternElement> m_elements;
    QList<PatternElement> Auto_m_elements;
   // QList<SLC> m_slc;
    QString m_ptnImagePath;
    QString m_ptnSettingPath;
    QString m_ptnProfilePath;
    QString m_Buadrate;

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
