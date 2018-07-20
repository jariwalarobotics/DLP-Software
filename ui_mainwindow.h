/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *pushButton_info;
    QPushButton *pushButton_systemControls;
    QPushButton *pushButton_patternMode;
    QPushButton *pushButton_LEDDriver;
    QLabel *label_TILogo;
    QHBoxLayout *horizontalLayout_25;
    QFrame *frame_common;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *connectButton;
    QCheckBox *dummyConnection;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *powerOn_radioButton;
    QRadioButton *standBy_radioButton;
    QPushButton *resetDMD_Button;
    QGroupBox *groupBox_firmware;
    QHBoxLayout *horizontalLayout_22;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_version;
    QLabel *label_Tag;
    QVBoxLayout *verticalLayout_19;
    QLabel *apiVersionLabel;
    QLabel *firmwareTag_label;
    QGroupBox *groupBox_ChipSetType;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *pDMD_radioButton;
    QGroupBox *operatingModes_groupBox;
    QVBoxLayout *verticalLayout_40;
    QRadioButton *patternMode_radioButton;
    QRadioButton *patternMemory_radioButton;
    QGroupBox *status_groupBox;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *internalMemTest_checkBox;
    QCheckBox *incompatibleASICorDMD_checkBox;
    QCheckBox *slaveReady_checkBox;
    QCheckBox *internalInit_checkBox;
    QCheckBox *DMDResetWaveformControllerErr_checkBox;
    QCheckBox *forcedSwapErr_checkBox;
    QCheckBox *seqAbortStatus_checkBox;
    QCheckBox *seqErr_checkBox;
    QCheckBox *DMDParkStatus_checkBox;
    QCheckBox *sequencerRunState_checkBox;
    QCheckBox *videoState_checkBox;
    QCheckBox *extSourceLocked_checkBox;
    QStackedWidget *stackedWidget;
    QWidget *mainPage;
    QGridLayout *gridLayout_7;
    QFrame *frame_mainPage;
    QGridLayout *gridLayout_15;
    QGroupBox *groupBox_EVMImage;
    QHBoxLayout *horizontalLayout_34;
    QStackedWidget *EVM_Picture_stackedWidget;
    QWidget *page_12;
    QGridLayout *gridLayout_23;
    QLabel *label_evm6500;
    QSpacerItem *horizontalSpacer_9;
    QWidget *page_13;
    QGridLayout *gridLayout_22;
    QLabel *label_evm9000;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_33;
    QSpacerItem *horizontalSpacer_7;
    QStackedWidget *onlineResources_stackedWidget;
    QWidget *page_8;
    QGridLayout *gridLayout_27;
    QFrame *frame_3;
    QGroupBox *onlineResources_groupBox;
    QGridLayout *gridLayout_25;
    QVBoxLayout *verticalLayout;
    QLabel *label_6500ToolFolder;
    QLabel *label_6500UserGuide;
    QLabel *label_6500ControllerDataSheet;
    QLabel *label_6500DMDDataSheet;
    QLabel *label_DLP;
    QPushButton *ti_e2e_pushButton;
    QWidget *page_9;
    QGridLayout *gridLayout_26;
    QFrame *frame_4;
    QGroupBox *onlineResources_groupBox_2;
    QGridLayout *gridLayout_24;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_900ToolFolder;
    QLabel *label_9000UserGuide;
    QLabel *label_ControllerDataSheet;
    QLabel *label_9000DMDDataSheet;
    QLabel *label_9000DLP;
    QPushButton *ti_e2e_pushButton_2;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *verticalLayout_20;
    QGridLayout *gridLayout_20;
    QLabel *label_QuickStart;
    QLabel *label_A;
    QLabel *label_ConnectEVMToPower;
    QLabel *label_B;
    QLabel *label_ConnectEVMToPC;
    QPushButton *dlp_pushButton;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_DLPText2;
    QLabel *label_DLPText1;
    QWidget *systemSettingsPage;
    QGridLayout *gridLayout_8;
    QFrame *frame_systemControls;
    QGridLayout *gridLayout_16;
    QGroupBox *groupBox_SystemSettings;
    QGroupBox *groupBox_ImageOrientation;
    QPushButton *setFlipPushButton;
    QCheckBox *ShortAxisFlipCheckBox;
    QCheckBox *LongAxisFlipCheckBox;
    QPushButton *getFlipPushButton;
    QGroupBox *groupBox_LEDControl;
    QPushButton *GetLEDpushButton;
    QPushButton *SetLEDpushButton;
    QGroupBox *groupBox_LEDSelection;
    QRadioButton *radioButton_ColorDisplayAuto;
    QRadioButton *radioButton_ColorDisplayManual;
    QCheckBox *RedCheckBox;
    QCheckBox *GreenCheckBox;
    QCheckBox *BlueCheckBox;
    QGroupBox *groupBox_LEDCurrent;
    QLineEdit *RedLEDCurrent;
    QLineEdit *BlueLEDCurrent;
    QLineEdit *GreenLEDCurrent;
    QCheckBox *LedPwmInvert_checkBox;
    QLabel *label_Red;
    QLabel *label_Blue;
    QLabel *label_Green;
    QGroupBox *groupBox_OpticalInvert;
    QCheckBox *patternDisplayInvertData_checkBox;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *getPatternDisplayInvertData_button;
    QPushButton *setPatternDisplayInvertData_button;
    QWidget *LEDDriverPage;
    QGridLayout *gridLayout_9;
    QFrame *frame_LedDriver;
    QGroupBox *groupBox_LEDDriver;
    QGroupBox *groupBox_LEDDriverStatus;
    QLabel *label_LEDDriverStatus;
    QTextEdit *USBDevicePath_TextEdit;
    QLabel *USBDevicePath;
    QLabel *label_ReadBuffer;
    QPushButton *pushButton_RestartLEDDriver;
    QCheckBox *checkBox_InternalInitialization;
    QCheckBox *checkBox_LEDTempOK;
    QCheckBox *checkBox_DMDTempOK;
    QCheckBox *checkBox_BoardTempOK;
    QCheckBox *checkBox_HardwareOK;
    QCheckBox *checkBox_IntensityCalOK;
    QCheckBox *checkBox_WriteProtection;
    QCheckBox *checkBox_IntensityModInstall;
    QLabel *label_DMDTempMax;
    QTextBrowser *DMDTempMax_text;
    QLabel *label_LEDTempMax;
    QTextBrowser *LEDTempMax_text;
    QLabel *label_BoardTempMax;
    QTextBrowser *BoardTempMax_text;
    QLabel *label_LEDCurrentMax;
    QTextBrowser *LEDCurrentMax_text;
    QLabel *label_IntensityOffset;
    QTextBrowser *Intensity_offset_text;
    QLabel *label_IntensityGain;
    QTextBrowser *IntensityGain_text;
    QLabel *Label_DMDTemp;
    QTextBrowser *DMDTemp_text;
    QLabel *label_LEDTemp;
    QTextBrowser *LEDTemp_text;
    QLabel *label_BoardTemp;
    QTextBrowser *BoardTemp_text;
    QLabel *label_LEDVoltage;
    QTextBrowser *LEDVoltage_text;
    QLabel *label_LEDCurrent;
    QTextBrowser *LEDCurrent_text;
    QLabel *label_CycleTime;
    QTextBrowser *CycleTime_Text;
    QLabel *label_IntensityVoltage;
    QTextBrowser *IntensityVoltage_text;
    QLabel *label_Intensity;
    QTextBrowser *Intensity_text;
    QLabel *label_LEDSerial;
    QTextBrowser *LEDSerial_text;
    QLabel *label_LESerial;
    QTextBrowser *LESerial_text;
    QLabel *label_PCBFanSpeed;
    QTextBrowser *PCBFanSpeed_text;
    QLabel *label_DMDFanSpeed;
    QTextBrowser *DMDFanSpeed_text;
    QLabel *label_LEDFanSpeed;
    QTextBrowser *LEDFanSpeed_text;
    QLabel *label_LEDCurrent2;
    QPushButton *pushButton_SetLEDCurrent;
    QPushButton *pushButton_LEDPWMON_OFF;
    QLabel *label_Intensity2;
    QPushButton *pushButton_SetIntensity;
    QCheckBox *checkBox_IntensityRegEnable;
    QPushButton *pushButton_EnableIntensityReg;
    QPushButton *pushButton_ExTrigger;
    QPushButton *pushButton_SwTrigger;
    QPushButton *pushButton_ConnectLED;
    QTextEdit *Text_Readbuffer;
    QLineEdit *LEDCurrent_lineEdit;
    QLineEdit *Intensity_lineEdit;
    QWidget *patternModePage;
    QGridLayout *gridLayout_3;
    QFrame *frame_patternMode;
    QGridLayout *gridLayout_11;
    QGroupBox *groupBox_PatternMode;
    QHBoxLayout *horizontalLayout_26;
    QVBoxLayout *verticalLayout_39;
    QPushButton *pushButton_patternControls;
    QPushButton *pushButton_globalSettings;
    QStackedWidget *patternMode_stackedWidget;
    QWidget *patternDesignPage;
    QGridLayout *gridLayout_31;
    QGroupBox *groupBox_patternMode_patternControls;
    QHBoxLayout *horizontalLayout_27;
    QVBoxLayout *verticalLayout_37;
    QGroupBox *groupBox_Menu;
    QHBoxLayout *horizontalLayout_44;
    QSpacerItem *horizontalSpacer_30;
    QPushButton *saveButton_patternSettings;
    QPushButton *loadButton_patternSettings;
    QSpacerItem *horizontalSpacer_33;
    QPushButton *addPatternsButton;
    QPushButton *removePatternsButton;
    QPushButton *selectAllButton;
    QSpacerItem *horizontalSpacer_32;
    QLabel *label_Zoom;
    QSlider *zoomSlider;
    QGroupBox *groupBox_PatternImage;
    QHBoxLayout *horizontalLayout_46;
    QGroupBox *ptnSetting_groupBox;
    QVBoxLayout *verticalLayout_38;
    QGroupBox *groupBox_BitInfo;
    QComboBox *bitDepth_ComboBox;
    QLabel *label_Depth;
    QLabel *startPos_label;
    QComboBox *startPos_ComboBox;
    QGroupBox *groupBox_Timing;
    QLineEdit *exposure_lineEdit;
    QLabel *label_Exposure;
    QLabel *label_DarkTime;
    QLineEdit *darkPeriod_lineEdit;
    QSpacerItem *verticalSpacer_32;
    QGroupBox *groupBox_Color;
    QVBoxLayout *verticalLayout_4;
    QComboBox *color_ComboBox;
    QSpacerItem *verticalSpacer_33;
    QCheckBox *triggerIn_checkBox;
    QSpacerItem *verticalSpacer_34;
    QLabel *label_TrigOut1;
    QSpacerItem *verticalSpacer_35;
    QCheckBox *triggerOut2_checkBox;
    QSpacerItem *verticalSpacer_36;
    QScrollArea *waveFormArea;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_36;
    QSpacerItem *verticalSpacer_29;
    QGroupBox *groupBox_UpdateLUT;
    QGridLayout *gridLayout_37;
    QPushButton *updateLUT_Button;
    QSpacerItem *verticalSpacer_28;
    QGroupBox *groupBox_PlayRepeat;
    QVBoxLayout *verticalLayout_35;
    QRadioButton *playOnce_radioButton;
    QRadioButton *repeat_radioButton;
    QGroupBox *groupBox_StartPauseStop;
    QVBoxLayout *verticalLayout_6;
    QPushButton *startPatSequence_Button;
    QPushButton *pausePatSequence_Button;
    QPushButton *stopPatSequence_Button;
    QSpacerItem *verticalSpacer_31;
    QWidget *patternSettingsPage;
    QGridLayout *gridLayout_32;
    QGroupBox *groupBox_patternMode_globalSettings;
    QGroupBox *groupBox_TriggerControl;
    QGridLayout *gridLayout_33;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_TriggerOut1;
    QHBoxLayout *horizontalLayout_41;
    QSpacerItem *horizontalSpacer_20;
    QVBoxLayout *verticalLayout_33;
    QGridLayout *gridLayout_35;
    QSpinBox *trigOut1_fallingDelay_spinBox;
    QSpinBox *trigOut1_risingDelay_spinBox;
    QLabel *label_TrigOut1_FallingEdge;
    QLabel *label_TrigOut1_RisingEdge;
    QSpacerItem *verticalSpacer_24;
    QSpacerItem *verticalSpacer_23;
    QCheckBox *invertTrigOut1_checkBox;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *trigOut1GetButton;
    QPushButton *trigOut1SetButton;
    QSpacerItem *horizontalSpacer_21;
    QGroupBox *groupBox_TriggerOut;
    QHBoxLayout *horizontalLayout_40;
    QSpacerItem *horizontalSpacer_18;
    QVBoxLayout *verticalLayout_32;
    QGridLayout *gridLayout_34;
    QLabel *label_TrigOut2_RisingEdge;
    QSpinBox *trigOut2_risingDelay_spinBox;
    QSpinBox *trigOut2_fallingDelay_spinBox;
    QLabel *label_TrigOut2_FallingEdge;
    QSpacerItem *verticalSpacer_22;
    QSpacerItem *verticalSpacer_21;
    QCheckBox *invertTrigOut2_checkBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *trigOut2GetButton;
    QPushButton *trigOut2SetButton;
    QSpacerItem *horizontalSpacer_19;
    QGroupBox *groupBox_TriggerInput1;
    QHBoxLayout *horizontalLayout_39;
    QSpacerItem *horizontalSpacer_16;
    QVBoxLayout *verticalLayout_31;
    QSpacerItem *verticalSpacer_20;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_TrigIn1_Delay;
    QSpinBox *trigIn1_Delay_spinBox;
    QSpacerItem *verticalSpacer_19;
    QCheckBox *invertTrigIn1_checkBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *trigIn1GetButton;
    QPushButton *trigIn1SetButton;
    QSpacerItem *horizontalSpacer_17;
    QGroupBox *groupBox_TriggerInput2;
    QHBoxLayout *horizontalLayout_37;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_30;
    QSpacerItem *verticalSpacer_18;
    QCheckBox *invertTrigIn2_checkBox;
    QSpacerItem *verticalSpacer_17;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *trigIn2GetButton;
    QPushButton *trigIn2SetButton;
    QSpacerItem *horizontalSpacer_15;
    QGroupBox *groupBox_LEDDelayControls;
    QHBoxLayout *horizontalLayout_43;
    QSpacerItem *horizontalSpacer_26;
    QVBoxLayout *verticalLayout_34;
    QGridLayout *gridLayout_36;
    QSpacerItem *horizontalSpacer_25;
    QLabel *label_GreenRisingEdge;
    QSpacerItem *horizontalSpacer_24;
    QSpacerItem *horizontalSpacer_28;
    QSpacerItem *horizontalSpacer_29;
    QLabel *label_BlueFallingEdge;
    QLabel *label_RedFallingEdge;
    QSpinBox *ledBlueRising_spinBox;
    QLabel *label_BlueRisingEdge;
    QSpinBox *ledGreenRising_spinBox;
    QSpinBox *ledRedRising_spinBox;
    QLabel *label_Red_RisingEdge;
    QSpinBox *ledGreenFalling_spinBox;
    QLabel *label_GreenFallingEdge;
    QSpinBox *ledBlueFalling_spinBox;
    QSpinBox *ledRedFalling_spinBox;
    QSpacerItem *verticalSpacer_26;
    QSpacerItem *verticalSpacer_27;
    QSpacerItem *verticalSpacer_25;
    QHBoxLayout *horizontalLayout_42;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *ledGetDelayButton;
    QPushButton *ledSetDelayButton;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *horizontalSpacer_27;
    QGroupBox *operatingModes_groupBox_2;
    QVBoxLayout *verticalLayout_51;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_35;
    QVBoxLayout *verticalLayout_28;
    QLabel *apiVersionLabel_2;
    QLabel *apiVersionLabel_3;
    QVBoxLayout *verticalLayout_29;
    QComboBox *startDmdBlock;
    QComboBox *endDmdBlock;
    QHBoxLayout *horizontalLayout_28;
    QPushButton *dmdBlockGet;
    QPushButton *dmdBlockSet;
    QGroupBox *groupBox_DMDIdle;
    QPushButton *pushButton_DMDSaverModeOn;
    QPushButton *pushButton_DMDSaverModeOff;
    QGroupBox *groupBox_LEDPulseWidth;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QSpinBox *ledPulseWidth;
    QHBoxLayout *horizontalLayout_32;
    QPushButton *ledPulseWidthGet;
    QPushButton *ledPulseWidthSet;
    QWidget *batchFilePage;
    QGridLayout *gridLayout_4;
    QWidget *peripheralsPage;
    QGridLayout *gridLayout_5;
    QWidget *firmwarePage;
    QGridLayout *gridLayout_6;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1364, 745);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 1355, 715));
        scrollArea->setAutoFillBackground(true);
        scrollArea->setStyleSheet(QStringLiteral("QScrollArea{background-image : url(:/images/img.jpg);}"));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1353, 713));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        pushButton_info = new QPushButton(scrollAreaWidgetContents);
        pushButton_info->setObjectName(QStringLiteral("pushButton_info"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_info->sizePolicy().hasHeightForWidth());
        pushButton_info->setSizePolicy(sizePolicy);
        pushButton_info->setMinimumSize(QSize(10, 48));
        pushButton_info->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        pushButton_info->setFont(font);
        pushButton_info->setStyleSheet(QLatin1String("QPushButton{	color:rgb(0,150,150);\n"
"   }"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/images/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_info->setIcon(icon);
        pushButton_info->setIconSize(QSize(30, 30));
        pushButton_info->setCheckable(true);
        pushButton_info->setChecked(true);

        horizontalLayout_24->addWidget(pushButton_info);

        pushButton_systemControls = new QPushButton(scrollAreaWidgetContents);
        pushButton_systemControls->setObjectName(QStringLiteral("pushButton_systemControls"));
        sizePolicy.setHeightForWidth(pushButton_systemControls->sizePolicy().hasHeightForWidth());
        pushButton_systemControls->setSizePolicy(sizePolicy);
        pushButton_systemControls->setMinimumSize(QSize(0, 48));
        pushButton_systemControls->setMaximumSize(QSize(16777215, 16777215));
        pushButton_systemControls->setFont(font);
        pushButton_systemControls->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"   }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_systemControls->setIcon(icon1);
        pushButton_systemControls->setIconSize(QSize(30, 30));
        pushButton_systemControls->setCheckable(true);

        horizontalLayout_24->addWidget(pushButton_systemControls);

        pushButton_patternMode = new QPushButton(scrollAreaWidgetContents);
        pushButton_patternMode->setObjectName(QStringLiteral("pushButton_patternMode"));
        pushButton_patternMode->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_patternMode->sizePolicy().hasHeightForWidth());
        pushButton_patternMode->setSizePolicy(sizePolicy);
        pushButton_patternMode->setMinimumSize(QSize(0, 40));
        pushButton_patternMode->setFont(font);
        pushButton_patternMode->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"   }"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/images/pattern.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_patternMode->setIcon(icon2);
        pushButton_patternMode->setIconSize(QSize(40, 40));
        pushButton_patternMode->setCheckable(true);

        horizontalLayout_24->addWidget(pushButton_patternMode);

        pushButton_LEDDriver = new QPushButton(scrollAreaWidgetContents);
        pushButton_LEDDriver->setObjectName(QStringLiteral("pushButton_LEDDriver"));
        sizePolicy.setHeightForWidth(pushButton_LEDDriver->sizePolicy().hasHeightForWidth());
        pushButton_LEDDriver->setSizePolicy(sizePolicy);
        pushButton_LEDDriver->setMinimumSize(QSize(0, 45));
        pushButton_LEDDriver->setFont(font);
        pushButton_LEDDriver->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"   }"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/images/LEDDriver_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_LEDDriver->setIcon(icon3);
        pushButton_LEDDriver->setIconSize(QSize(40, 40));
        pushButton_LEDDriver->setCheckable(true);

        horizontalLayout_24->addWidget(pushButton_LEDDriver);

        label_TILogo = new QLabel(scrollAreaWidgetContents);
        label_TILogo->setObjectName(QStringLiteral("label_TILogo"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_TILogo->sizePolicy().hasHeightForWidth());
        label_TILogo->setSizePolicy(sizePolicy1);
        label_TILogo->setPixmap(QPixmap(QString::fromUtf8(":/images/txlogo.png")));

        horizontalLayout_24->addWidget(label_TILogo);


        gridLayout->addLayout(horizontalLayout_24, 0, 0, 1, 1);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        frame_common = new QFrame(scrollAreaWidgetContents);
        frame_common->setObjectName(QStringLiteral("frame_common"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_common->sizePolicy().hasHeightForWidth());
        frame_common->setSizePolicy(sizePolicy2);
        frame_common->setMinimumSize(QSize(245, 581));
        frame_common->setStyleSheet(QLatin1String("QFrame{background-image : url(:/images/img.jpg);\n"
"border:1px solid black}"));
        frame_common->setFrameShape(QFrame::StyledPanel);
        frame_common->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame_common);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 11, 221, 81));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        groupBox->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 15, -1, -1);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        connectButton = new QPushButton(groupBox);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy4);
        connectButton->setAutoFillBackground(false);
        connectButton->setStyleSheet(QStringLiteral("QPushButton{border:0px}"));
        connectButton->setText(QStringLiteral("Disconnected"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/Icons/Led_R.png"), QSize(), QIcon::Normal, QIcon::Off);
        connectButton->setIcon(icon4);

        horizontalLayout_7->addWidget(connectButton, 0, Qt::AlignLeft);

        dummyConnection = new QCheckBox(groupBox);
        dummyConnection->setObjectName(QStringLiteral("dummyConnection"));

        horizontalLayout_7->addWidget(dummyConnection);


        verticalLayout_7->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        powerOn_radioButton = new QRadioButton(groupBox);
        powerOn_radioButton->setObjectName(QStringLiteral("powerOn_radioButton"));
        sizePolicy4.setHeightForWidth(powerOn_radioButton->sizePolicy().hasHeightForWidth());
        powerOn_radioButton->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(powerOn_radioButton, 0, Qt::AlignLeft);

        standBy_radioButton = new QRadioButton(groupBox);
        standBy_radioButton->setObjectName(QStringLiteral("standBy_radioButton"));
        sizePolicy4.setHeightForWidth(standBy_radioButton->sizePolicy().hasHeightForWidth());
        standBy_radioButton->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(standBy_radioButton);

        resetDMD_Button = new QPushButton(groupBox);
        resetDMD_Button->setObjectName(QStringLiteral("resetDMD_Button"));
        sizePolicy4.setHeightForWidth(resetDMD_Button->sizePolicy().hasHeightForWidth());
        resetDMD_Button->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(resetDMD_Button);


        verticalLayout_7->addLayout(horizontalLayout_2);

        groupBox_firmware = new QGroupBox(frame_common);
        groupBox_firmware->setObjectName(QStringLiteral("groupBox_firmware"));
        groupBox_firmware->setGeometry(QRect(10, 100, 221, 60));
        sizePolicy3.setHeightForWidth(groupBox_firmware->sizePolicy().hasHeightForWidth());
        groupBox_firmware->setSizePolicy(sizePolicy3);
        groupBox_firmware->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        horizontalLayout_22 = new QHBoxLayout(groupBox_firmware);
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(-1, 15, -1, -1);
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        label_version = new QLabel(groupBox_firmware);
        label_version->setObjectName(QStringLiteral("label_version"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_version->sizePolicy().hasHeightForWidth());
        label_version->setSizePolicy(sizePolicy5);
        QFont font1;
        font1.setPointSize(8);
        label_version->setFont(font1);
        label_version->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        verticalLayout_18->addWidget(label_version);

        label_Tag = new QLabel(groupBox_firmware);
        label_Tag->setObjectName(QStringLiteral("label_Tag"));
        sizePolicy5.setHeightForWidth(label_Tag->sizePolicy().hasHeightForWidth());
        label_Tag->setSizePolicy(sizePolicy5);
        label_Tag->setFont(font1);
        label_Tag->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        verticalLayout_18->addWidget(label_Tag);


        horizontalLayout_22->addLayout(verticalLayout_18);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        apiVersionLabel = new QLabel(groupBox_firmware);
        apiVersionLabel->setObjectName(QStringLiteral("apiVersionLabel"));
        sizePolicy5.setHeightForWidth(apiVersionLabel->sizePolicy().hasHeightForWidth());
        apiVersionLabel->setSizePolicy(sizePolicy5);
        apiVersionLabel->setMinimumSize(QSize(20, 0));
        apiVersionLabel->setFont(font1);
        apiVersionLabel->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        verticalLayout_19->addWidget(apiVersionLabel);

        firmwareTag_label = new QLabel(groupBox_firmware);
        firmwareTag_label->setObjectName(QStringLiteral("firmwareTag_label"));
        sizePolicy5.setHeightForWidth(firmwareTag_label->sizePolicy().hasHeightForWidth());
        firmwareTag_label->setSizePolicy(sizePolicy5);
        firmwareTag_label->setFont(font1);
        firmwareTag_label->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        verticalLayout_19->addWidget(firmwareTag_label);


        horizontalLayout_22->addLayout(verticalLayout_19);

        groupBox_ChipSetType = new QGroupBox(frame_common);
        groupBox_ChipSetType->setObjectName(QStringLiteral("groupBox_ChipSetType"));
        groupBox_ChipSetType->setGeometry(QRect(10, 170, 221, 43));
        sizePolicy3.setHeightForWidth(groupBox_ChipSetType->sizePolicy().hasHeightForWidth());
        groupBox_ChipSetType->setSizePolicy(sizePolicy3);
        groupBox_ChipSetType->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        horizontalLayout_14 = new QHBoxLayout(groupBox_ChipSetType);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, 15, -1, -1);
        pDMD_radioButton = new QRadioButton(groupBox_ChipSetType);
        pDMD_radioButton->setObjectName(QStringLiteral("pDMD_radioButton"));
        pDMD_radioButton->setChecked(true);

        horizontalLayout_14->addWidget(pDMD_radioButton);

        operatingModes_groupBox = new QGroupBox(frame_common);
        operatingModes_groupBox->setObjectName(QStringLiteral("operatingModes_groupBox"));
        operatingModes_groupBox->setEnabled(false);
        operatingModes_groupBox->setGeometry(QRect(10, 221, 221, 111));
        sizePolicy3.setHeightForWidth(operatingModes_groupBox->sizePolicy().hasHeightForWidth());
        operatingModes_groupBox->setSizePolicy(sizePolicy3);
        operatingModes_groupBox->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        verticalLayout_40 = new QVBoxLayout(operatingModes_groupBox);
        verticalLayout_40->setSpacing(6);
        verticalLayout_40->setContentsMargins(11, 11, 11, 11);
        verticalLayout_40->setObjectName(QStringLiteral("verticalLayout_40"));
        verticalLayout_40->setContentsMargins(-1, 20, -1, -1);
        patternMode_radioButton = new QRadioButton(operatingModes_groupBox);
        patternMode_radioButton->setObjectName(QStringLiteral("patternMode_radioButton"));

        verticalLayout_40->addWidget(patternMode_radioButton);

        patternMemory_radioButton = new QRadioButton(operatingModes_groupBox);
        patternMemory_radioButton->setObjectName(QStringLiteral("patternMemory_radioButton"));

        verticalLayout_40->addWidget(patternMemory_radioButton);

        status_groupBox = new QGroupBox(frame_common);
        status_groupBox->setObjectName(QStringLiteral("status_groupBox"));
        status_groupBox->setEnabled(false);
        status_groupBox->setGeometry(QRect(10, 342, 221, 271));
        sizePolicy3.setHeightForWidth(status_groupBox->sizePolicy().hasHeightForWidth());
        status_groupBox->setSizePolicy(sizePolicy3);
        status_groupBox->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        verticalLayout_5 = new QVBoxLayout(status_groupBox);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 20, -1, -1);
        internalMemTest_checkBox = new QCheckBox(status_groupBox);
        internalMemTest_checkBox->setObjectName(QStringLiteral("internalMemTest_checkBox"));

        verticalLayout_5->addWidget(internalMemTest_checkBox);

        incompatibleASICorDMD_checkBox = new QCheckBox(status_groupBox);
        incompatibleASICorDMD_checkBox->setObjectName(QStringLiteral("incompatibleASICorDMD_checkBox"));

        verticalLayout_5->addWidget(incompatibleASICorDMD_checkBox);

        slaveReady_checkBox = new QCheckBox(status_groupBox);
        slaveReady_checkBox->setObjectName(QStringLiteral("slaveReady_checkBox"));

        verticalLayout_5->addWidget(slaveReady_checkBox);

        internalInit_checkBox = new QCheckBox(status_groupBox);
        internalInit_checkBox->setObjectName(QStringLiteral("internalInit_checkBox"));

        verticalLayout_5->addWidget(internalInit_checkBox);

        DMDResetWaveformControllerErr_checkBox = new QCheckBox(status_groupBox);
        DMDResetWaveformControllerErr_checkBox->setObjectName(QStringLiteral("DMDResetWaveformControllerErr_checkBox"));

        verticalLayout_5->addWidget(DMDResetWaveformControllerErr_checkBox);

        forcedSwapErr_checkBox = new QCheckBox(status_groupBox);
        forcedSwapErr_checkBox->setObjectName(QStringLiteral("forcedSwapErr_checkBox"));

        verticalLayout_5->addWidget(forcedSwapErr_checkBox);

        seqAbortStatus_checkBox = new QCheckBox(status_groupBox);
        seqAbortStatus_checkBox->setObjectName(QStringLiteral("seqAbortStatus_checkBox"));

        verticalLayout_5->addWidget(seqAbortStatus_checkBox);

        seqErr_checkBox = new QCheckBox(status_groupBox);
        seqErr_checkBox->setObjectName(QStringLiteral("seqErr_checkBox"));

        verticalLayout_5->addWidget(seqErr_checkBox);

        DMDParkStatus_checkBox = new QCheckBox(status_groupBox);
        DMDParkStatus_checkBox->setObjectName(QStringLiteral("DMDParkStatus_checkBox"));

        verticalLayout_5->addWidget(DMDParkStatus_checkBox);

        sequencerRunState_checkBox = new QCheckBox(status_groupBox);
        sequencerRunState_checkBox->setObjectName(QStringLiteral("sequencerRunState_checkBox"));

        verticalLayout_5->addWidget(sequencerRunState_checkBox);

        videoState_checkBox = new QCheckBox(status_groupBox);
        videoState_checkBox->setObjectName(QStringLiteral("videoState_checkBox"));

        verticalLayout_5->addWidget(videoState_checkBox);

        extSourceLocked_checkBox = new QCheckBox(status_groupBox);
        extSourceLocked_checkBox->setObjectName(QStringLiteral("extSourceLocked_checkBox"));

        verticalLayout_5->addWidget(extSourceLocked_checkBox);


        horizontalLayout_25->addWidget(frame_common);

        stackedWidget = new QStackedWidget(scrollAreaWidgetContents);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy6);
        stackedWidget->setMinimumSize(QSize(931, 581));
        stackedWidget->setStyleSheet(QStringLiteral("QStackedWidget{background-image : url(:/images/img.jpg);}"));
        mainPage = new QWidget();
        mainPage->setObjectName(QStringLiteral("mainPage"));
        gridLayout_7 = new QGridLayout(mainPage);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        frame_mainPage = new QFrame(mainPage);
        frame_mainPage->setObjectName(QStringLiteral("frame_mainPage"));
        sizePolicy6.setHeightForWidth(frame_mainPage->sizePolicy().hasHeightForWidth());
        frame_mainPage->setSizePolicy(sizePolicy6);
        frame_mainPage->setMinimumSize(QSize(931, 581));
        frame_mainPage->setStyleSheet(QLatin1String("QFrame{background-image : url(:/images/img.jpg);\n"
"border:1px solid black}\n"
"QStackedWidget{background-image : url(:/images/img.jpg);\n"
"border:1px solid black}"));
        frame_mainPage->setFrameShape(QFrame::StyledPanel);
        frame_mainPage->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(frame_mainPage);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        groupBox_EVMImage = new QGroupBox(frame_mainPage);
        groupBox_EVMImage->setObjectName(QStringLiteral("groupBox_EVMImage"));
        groupBox_EVMImage->setEnabled(true);
        sizePolicy6.setHeightForWidth(groupBox_EVMImage->sizePolicy().hasHeightForWidth());
        groupBox_EVMImage->setSizePolicy(sizePolicy6);
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        groupBox_EVMImage->setFont(font2);
        groupBox_EVMImage->setAutoFillBackground(false);
        groupBox_EVMImage->setStyleSheet(QLatin1String("QGroupBox{ border: 1.5px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}\n"
"QLabel{border:0px}"));
        horizontalLayout_34 = new QHBoxLayout(groupBox_EVMImage);
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        horizontalLayout_34->setContentsMargins(-1, 20, -1, -1);
        EVM_Picture_stackedWidget = new QStackedWidget(groupBox_EVMImage);
        EVM_Picture_stackedWidget->setObjectName(QStringLiteral("EVM_Picture_stackedWidget"));
        sizePolicy6.setHeightForWidth(EVM_Picture_stackedWidget->sizePolicy().hasHeightForWidth());
        EVM_Picture_stackedWidget->setSizePolicy(sizePolicy6);
        EVM_Picture_stackedWidget->setMinimumSize(QSize(381, 0));
        EVM_Picture_stackedWidget->setMaximumSize(QSize(16777215, 16777215));
        EVM_Picture_stackedWidget->setStyleSheet(QStringLiteral("QStackedWidget{border:0px}"));
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        gridLayout_23 = new QGridLayout(page_12);
        gridLayout_23->setSpacing(6);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        gridLayout_23->setHorizontalSpacing(0);
        gridLayout_23->setContentsMargins(0, 0, 0, 0);
        label_evm6500 = new QLabel(page_12);
        label_evm6500->setObjectName(QStringLiteral("label_evm6500"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_evm6500->sizePolicy().hasHeightForWidth());
        label_evm6500->setSizePolicy(sizePolicy7);
        label_evm6500->setStyleSheet(QStringLiteral("QLabel{border:0px;}"));
        label_evm6500->setTextFormat(Qt::PlainText);
        label_evm6500->setPixmap(QPixmap(QString::fromUtf8(":/Images/images/LCR6500.jpg")));
        label_evm6500->setScaledContents(true);

        gridLayout_23->addWidget(label_evm6500, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_9, 0, 1, 1, 1);

        EVM_Picture_stackedWidget->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName(QStringLiteral("page_13"));
        gridLayout_22 = new QGridLayout(page_13);
        gridLayout_22->setSpacing(6);
        gridLayout_22->setContentsMargins(11, 11, 11, 11);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        gridLayout_22->setHorizontalSpacing(0);
        gridLayout_22->setContentsMargins(0, 0, 0, 0);
        label_evm9000 = new QLabel(page_13);
        label_evm9000->setObjectName(QStringLiteral("label_evm9000"));
        label_evm9000->setStyleSheet(QStringLiteral("QLabel{border:0px;}"));
        label_evm9000->setTextFormat(Qt::PlainText);
        label_evm9000->setPixmap(QPixmap(QString::fromUtf8(":/images/LCR9000.jpg")));
        label_evm9000->setScaledContents(true);

        gridLayout_22->addWidget(label_evm9000, 0, 0, 1, 1);

        EVM_Picture_stackedWidget->addWidget(page_13);

        horizontalLayout_34->addWidget(EVM_Picture_stackedWidget);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_7);

        onlineResources_stackedWidget = new QStackedWidget(groupBox_EVMImage);
        onlineResources_stackedWidget->setObjectName(QStringLiteral("onlineResources_stackedWidget"));
        sizePolicy6.setHeightForWidth(onlineResources_stackedWidget->sizePolicy().hasHeightForWidth());
        onlineResources_stackedWidget->setSizePolicy(sizePolicy6);
        onlineResources_stackedWidget->setMinimumSize(QSize(391, 241));
        onlineResources_stackedWidget->setStyleSheet(QStringLiteral("QStackedWidget{border:0px}"));
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        gridLayout_27 = new QGridLayout(page_8);
        gridLayout_27->setSpacing(6);
        gridLayout_27->setContentsMargins(11, 11, 11, 11);
        gridLayout_27->setObjectName(QStringLiteral("gridLayout_27"));
        gridLayout_27->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(page_8);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setStyleSheet(QStringLiteral("QFrame{border:0px}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        onlineResources_groupBox = new QGroupBox(frame_3);
        onlineResources_groupBox->setObjectName(QStringLiteral("onlineResources_groupBox"));
        onlineResources_groupBox->setEnabled(true);
        onlineResources_groupBox->setGeometry(QRect(20, 10, 361, 221));
        sizePolicy7.setHeightForWidth(onlineResources_groupBox->sizePolicy().hasHeightForWidth());
        onlineResources_groupBox->setSizePolicy(sizePolicy7);
        onlineResources_groupBox->setMinimumSize(QSize(361, 221));
        onlineResources_groupBox->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        onlineResources_groupBox->setFont(font3);
        onlineResources_groupBox->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        gridLayout_25 = new QGridLayout(onlineResources_groupBox);
        gridLayout_25->setSpacing(6);
        gridLayout_25->setContentsMargins(11, 11, 11, 11);
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        gridLayout_25->setContentsMargins(20, 20, 20, 10);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6500ToolFolder = new QLabel(onlineResources_groupBox);
        label_6500ToolFolder->setObjectName(QStringLiteral("label_6500ToolFolder"));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(9);
        label_6500ToolFolder->setFont(font4);
        label_6500ToolFolder->setOpenExternalLinks(true);
        label_6500ToolFolder->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(label_6500ToolFolder);

        label_6500UserGuide = new QLabel(onlineResources_groupBox);
        label_6500UserGuide->setObjectName(QStringLiteral("label_6500UserGuide"));
        QFont font5;
        font5.setPointSize(9);
        label_6500UserGuide->setFont(font5);
        label_6500UserGuide->setOpenExternalLinks(true);
        label_6500UserGuide->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(label_6500UserGuide);

        label_6500ControllerDataSheet = new QLabel(onlineResources_groupBox);
        label_6500ControllerDataSheet->setObjectName(QStringLiteral("label_6500ControllerDataSheet"));
        label_6500ControllerDataSheet->setFont(font5);
        label_6500ControllerDataSheet->setOpenExternalLinks(true);
        label_6500ControllerDataSheet->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(label_6500ControllerDataSheet);

        label_6500DMDDataSheet = new QLabel(onlineResources_groupBox);
        label_6500DMDDataSheet->setObjectName(QStringLiteral("label_6500DMDDataSheet"));
        label_6500DMDDataSheet->setFont(font5);
        label_6500DMDDataSheet->setOpenExternalLinks(true);
        label_6500DMDDataSheet->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(label_6500DMDDataSheet);

        label_DLP = new QLabel(onlineResources_groupBox);
        label_DLP->setObjectName(QStringLiteral("label_DLP"));
        label_DLP->setFont(font5);
        label_DLP->setOpenExternalLinks(true);
        label_DLP->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(label_DLP);

        ti_e2e_pushButton = new QPushButton(onlineResources_groupBox);
        ti_e2e_pushButton->setObjectName(QStringLiteral("ti_e2e_pushButton"));
        sizePolicy3.setHeightForWidth(ti_e2e_pushButton->sizePolicy().hasHeightForWidth());
        ti_e2e_pushButton->setSizePolicy(sizePolicy3);
        ti_e2e_pushButton->setMaximumSize(QSize(289, 50));
        ti_e2e_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        ti_e2e_pushButton->setMouseTracking(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/TI_E2E_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ti_e2e_pushButton->setIcon(icon5);
        ti_e2e_pushButton->setIconSize(QSize(400, 100));
        ti_e2e_pushButton->setFlat(true);

        verticalLayout->addWidget(ti_e2e_pushButton);


        gridLayout_25->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_27->addWidget(frame_3, 0, 0, 1, 1);

        onlineResources_stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        gridLayout_26 = new QGridLayout(page_9);
        gridLayout_26->setSpacing(6);
        gridLayout_26->setContentsMargins(11, 11, 11, 11);
        gridLayout_26->setObjectName(QStringLiteral("gridLayout_26"));
        gridLayout_26->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(page_9);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setStyleSheet(QStringLiteral("QFrame{border:0px}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        onlineResources_groupBox_2 = new QGroupBox(frame_4);
        onlineResources_groupBox_2->setObjectName(QStringLiteral("onlineResources_groupBox_2"));
        onlineResources_groupBox_2->setEnabled(true);
        onlineResources_groupBox_2->setGeometry(QRect(20, 10, 361, 221));
        sizePolicy3.setHeightForWidth(onlineResources_groupBox_2->sizePolicy().hasHeightForWidth());
        onlineResources_groupBox_2->setSizePolicy(sizePolicy3);
        onlineResources_groupBox_2->setMinimumSize(QSize(361, 221));
        onlineResources_groupBox_2->setMaximumSize(QSize(16777215, 16777215));
        onlineResources_groupBox_2->setFont(font3);
        onlineResources_groupBox_2->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        gridLayout_24 = new QGridLayout(onlineResources_groupBox_2);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        gridLayout_24->setContentsMargins(20, 20, 20, 10);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_900ToolFolder = new QLabel(onlineResources_groupBox_2);
        label_900ToolFolder->setObjectName(QStringLiteral("label_900ToolFolder"));
        label_900ToolFolder->setFont(font5);
        label_900ToolFolder->setOpenExternalLinks(true);
        label_900ToolFolder->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_2->addWidget(label_900ToolFolder);

        label_9000UserGuide = new QLabel(onlineResources_groupBox_2);
        label_9000UserGuide->setObjectName(QStringLiteral("label_9000UserGuide"));
        label_9000UserGuide->setFont(font5);
        label_9000UserGuide->setOpenExternalLinks(true);
        label_9000UserGuide->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_2->addWidget(label_9000UserGuide);

        label_ControllerDataSheet = new QLabel(onlineResources_groupBox_2);
        label_ControllerDataSheet->setObjectName(QStringLiteral("label_ControllerDataSheet"));
        label_ControllerDataSheet->setFont(font5);
        label_ControllerDataSheet->setOpenExternalLinks(true);
        label_ControllerDataSheet->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_2->addWidget(label_ControllerDataSheet);

        label_9000DMDDataSheet = new QLabel(onlineResources_groupBox_2);
        label_9000DMDDataSheet->setObjectName(QStringLiteral("label_9000DMDDataSheet"));
        label_9000DMDDataSheet->setFont(font5);
        label_9000DMDDataSheet->setOpenExternalLinks(true);
        label_9000DMDDataSheet->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_2->addWidget(label_9000DMDDataSheet);

        label_9000DLP = new QLabel(onlineResources_groupBox_2);
        label_9000DLP->setObjectName(QStringLiteral("label_9000DLP"));
        label_9000DLP->setFont(font5);
        label_9000DLP->setOpenExternalLinks(true);
        label_9000DLP->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_2->addWidget(label_9000DLP);

        ti_e2e_pushButton_2 = new QPushButton(onlineResources_groupBox_2);
        ti_e2e_pushButton_2->setObjectName(QStringLiteral("ti_e2e_pushButton_2"));
        sizePolicy3.setHeightForWidth(ti_e2e_pushButton_2->sizePolicy().hasHeightForWidth());
        ti_e2e_pushButton_2->setSizePolicy(sizePolicy3);
        ti_e2e_pushButton_2->setMaximumSize(QSize(289, 50));
        ti_e2e_pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        ti_e2e_pushButton_2->setMouseTracking(true);
        ti_e2e_pushButton_2->setFocusPolicy(Qt::NoFocus);
        ti_e2e_pushButton_2->setIcon(icon5);
        ti_e2e_pushButton_2->setIconSize(QSize(400, 100));
        ti_e2e_pushButton_2->setFlat(true);

        verticalLayout_2->addWidget(ti_e2e_pushButton_2);


        gridLayout_24->addLayout(verticalLayout_2, 0, 0, 1, 1);


        gridLayout_26->addWidget(frame_4, 0, 0, 1, 1);

        onlineResources_stackedWidget->addWidget(page_9);

        horizontalLayout_33->addWidget(onlineResources_stackedWidget);


        verticalLayout_21->addLayout(horizontalLayout_33);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_21->addItem(verticalSpacer_10);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        gridLayout_20 = new QGridLayout();
        gridLayout_20->setSpacing(6);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        label_QuickStart = new QLabel(groupBox_EVMImage);
        label_QuickStart->setObjectName(QStringLiteral("label_QuickStart"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(label_QuickStart->sizePolicy().hasHeightForWidth());
        label_QuickStart->setSizePolicy(sizePolicy8);
        label_QuickStart->setMinimumSize(QSize(493, 0));
        label_QuickStart->setFont(font3);
        label_QuickStart->setStyleSheet(QStringLiteral("QLabel{color:rgb(0,120,120);}"));

        gridLayout_20->addWidget(label_QuickStart, 0, 0, 1, 2);

        label_A = new QLabel(groupBox_EVMImage);
        label_A->setObjectName(QStringLiteral("label_A"));
        sizePolicy7.setHeightForWidth(label_A->sizePolicy().hasHeightForWidth());
        label_A->setSizePolicy(sizePolicy7);
        label_A->setPixmap(QPixmap(QString::fromUtf8(":/images/step-a.png")));

        gridLayout_20->addWidget(label_A, 1, 0, 1, 1);

        label_ConnectEVMToPower = new QLabel(groupBox_EVMImage);
        label_ConnectEVMToPower->setObjectName(QStringLiteral("label_ConnectEVMToPower"));
        sizePolicy8.setHeightForWidth(label_ConnectEVMToPower->sizePolicy().hasHeightForWidth());
        label_ConnectEVMToPower->setSizePolicy(sizePolicy8);
        label_ConnectEVMToPower->setMinimumSize(QSize(469, 0));
        QFont font6;
        font6.setFamily(QStringLiteral("Arial"));
        font6.setPointSize(11);
        label_ConnectEVMToPower->setFont(font6);
        label_ConnectEVMToPower->setMouseTracking(true);

        gridLayout_20->addWidget(label_ConnectEVMToPower, 1, 1, 1, 1);

        label_B = new QLabel(groupBox_EVMImage);
        label_B->setObjectName(QStringLiteral("label_B"));
        label_B->setPixmap(QPixmap(QString::fromUtf8(":/images/step-b.png")));

        gridLayout_20->addWidget(label_B, 2, 0, 1, 1);

        label_ConnectEVMToPC = new QLabel(groupBox_EVMImage);
        label_ConnectEVMToPC->setObjectName(QStringLiteral("label_ConnectEVMToPC"));
        sizePolicy8.setHeightForWidth(label_ConnectEVMToPC->sizePolicy().hasHeightForWidth());
        label_ConnectEVMToPC->setSizePolicy(sizePolicy8);
        label_ConnectEVMToPC->setMinimumSize(QSize(469, 0));
        label_ConnectEVMToPC->setFont(font6);

        gridLayout_20->addWidget(label_ConnectEVMToPC, 2, 1, 1, 1);


        verticalLayout_20->addLayout(gridLayout_20);

        dlp_pushButton = new QPushButton(groupBox_EVMImage);
        dlp_pushButton->setObjectName(QStringLiteral("dlp_pushButton"));
        sizePolicy3.setHeightForWidth(dlp_pushButton->sizePolicy().hasHeightForWidth());
        dlp_pushButton->setSizePolicy(sizePolicy3);
        dlp_pushButton->setMinimumSize(QSize(0, 0));
        dlp_pushButton->setMaximumSize(QSize(120, 80));
        dlp_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        dlp_pushButton->setMouseTracking(true);
        dlp_pushButton->setFocusPolicy(Qt::NoFocus);
        dlp_pushButton->setLayoutDirection(Qt::RightToLeft);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/Icons/dlp_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        dlp_pushButton->setIcon(icon6);
        dlp_pushButton->setIconSize(QSize(200, 75));
        dlp_pushButton->setFlat(true);

        verticalLayout_20->addWidget(dlp_pushButton);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        label_DLPText2 = new QLabel(groupBox_EVMImage);
        label_DLPText2->setObjectName(QStringLiteral("label_DLPText2"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(label_DLPText2->sizePolicy().hasHeightForWidth());
        label_DLPText2->setSizePolicy(sizePolicy9);
        label_DLPText2->setMinimumSize(QSize(493, 0));
        label_DLPText2->setMaximumSize(QSize(16777215, 16777215));
        QFont font7;
        font7.setFamily(QStringLiteral("Arial"));
        font7.setPointSize(12);
        font7.setBold(true);
        font7.setItalic(true);
        font7.setWeight(75);
        label_DLPText2->setFont(font7);

        verticalLayout_17->addWidget(label_DLPText2);

        label_DLPText1 = new QLabel(groupBox_EVMImage);
        label_DLPText1->setObjectName(QStringLiteral("label_DLPText1"));
        sizePolicy9.setHeightForWidth(label_DLPText1->sizePolicy().hasHeightForWidth());
        label_DLPText1->setSizePolicy(sizePolicy9);
        label_DLPText1->setMinimumSize(QSize(493, 0));
        label_DLPText1->setFont(font2);

        verticalLayout_17->addWidget(label_DLPText1);


        verticalLayout_20->addLayout(verticalLayout_17);


        verticalLayout_21->addLayout(verticalLayout_20);


        horizontalLayout_34->addLayout(verticalLayout_21);


        gridLayout_15->addWidget(groupBox_EVMImage, 0, 0, 1, 1);


        gridLayout_7->addWidget(frame_mainPage, 0, 0, 1, 1);

        stackedWidget->addWidget(mainPage);
        systemSettingsPage = new QWidget();
        systemSettingsPage->setObjectName(QStringLiteral("systemSettingsPage"));
        gridLayout_8 = new QGridLayout(systemSettingsPage);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        frame_systemControls = new QFrame(systemSettingsPage);
        frame_systemControls->setObjectName(QStringLiteral("frame_systemControls"));
        sizePolicy6.setHeightForWidth(frame_systemControls->sizePolicy().hasHeightForWidth());
        frame_systemControls->setSizePolicy(sizePolicy6);
        frame_systemControls->setStyleSheet(QLatin1String("QFrame{background-image : url(:/images/img.jpg);\n"
"border:1px solid black}\n"
"QLabel{border:0px}"));
        frame_systemControls->setFrameShape(QFrame::StyledPanel);
        frame_systemControls->setFrameShadow(QFrame::Raised);
        gridLayout_16 = new QGridLayout(frame_systemControls);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        groupBox_SystemSettings = new QGroupBox(frame_systemControls);
        groupBox_SystemSettings->setObjectName(QStringLiteral("groupBox_SystemSettings"));
        sizePolicy6.setHeightForWidth(groupBox_SystemSettings->sizePolicy().hasHeightForWidth());
        groupBox_SystemSettings->setSizePolicy(sizePolicy6);
        groupBox_SystemSettings->setFont(font2);
        groupBox_SystemSettings->setAutoFillBackground(false);
        groupBox_SystemSettings->setStyleSheet(QLatin1String("QGroupBox{ border: 1.5px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        groupBox_ImageOrientation = new QGroupBox(groupBox_SystemSettings);
        groupBox_ImageOrientation->setObjectName(QStringLiteral("groupBox_ImageOrientation"));
        groupBox_ImageOrientation->setGeometry(QRect(60, 50, 471, 131));
        groupBox_ImageOrientation->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        setFlipPushButton = new QPushButton(groupBox_ImageOrientation);
        setFlipPushButton->setObjectName(QStringLiteral("setFlipPushButton"));
        setFlipPushButton->setGeometry(QRect(250, 80, 121, 23));
        ShortAxisFlipCheckBox = new QCheckBox(groupBox_ImageOrientation);
        ShortAxisFlipCheckBox->setObjectName(QStringLiteral("ShortAxisFlipCheckBox"));
        ShortAxisFlipCheckBox->setGeometry(QRect(300, 40, 101, 17));
        LongAxisFlipCheckBox = new QCheckBox(groupBox_ImageOrientation);
        LongAxisFlipCheckBox->setObjectName(QStringLiteral("LongAxisFlipCheckBox"));
        LongAxisFlipCheckBox->setGeometry(QRect(90, 40, 111, 17));
        getFlipPushButton = new QPushButton(groupBox_ImageOrientation);
        getFlipPushButton->setObjectName(QStringLiteral("getFlipPushButton"));
        getFlipPushButton->setGeometry(QRect(106, 80, 121, 23));
        groupBox_LEDControl = new QGroupBox(groupBox_SystemSettings);
        groupBox_LEDControl->setObjectName(QStringLiteral("groupBox_LEDControl"));
        groupBox_LEDControl->setGeometry(QRect(60, 210, 471, 271));
        groupBox_LEDControl->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        GetLEDpushButton = new QPushButton(groupBox_LEDControl);
        GetLEDpushButton->setObjectName(QStringLiteral("GetLEDpushButton"));
        GetLEDpushButton->setGeometry(QRect(111, 219, 121, 23));
        SetLEDpushButton = new QPushButton(groupBox_LEDControl);
        SetLEDpushButton->setObjectName(QStringLiteral("SetLEDpushButton"));
        SetLEDpushButton->setGeometry(QRect(255, 219, 121, 23));
        groupBox_LEDSelection = new QGroupBox(groupBox_LEDControl);
        groupBox_LEDSelection->setObjectName(QStringLiteral("groupBox_LEDSelection"));
        groupBox_LEDSelection->setGeometry(QRect(30, 41, 231, 151));
        radioButton_ColorDisplayAuto = new QRadioButton(groupBox_LEDSelection);
        radioButton_ColorDisplayAuto->setObjectName(QStringLiteral("radioButton_ColorDisplayAuto"));
        radioButton_ColorDisplayAuto->setGeometry(QRect(30, 50, 82, 17));
        radioButton_ColorDisplayManual = new QRadioButton(groupBox_LEDSelection);
        radioButton_ColorDisplayManual->setObjectName(QStringLiteral("radioButton_ColorDisplayManual"));
        radioButton_ColorDisplayManual->setGeometry(QRect(145, 50, 82, 17));
        RedCheckBox = new QCheckBox(groupBox_LEDSelection);
        RedCheckBox->setObjectName(QStringLiteral("RedCheckBox"));
        RedCheckBox->setGeometry(QRect(30, 95, 41, 17));
        GreenCheckBox = new QCheckBox(groupBox_LEDSelection);
        GreenCheckBox->setObjectName(QStringLiteral("GreenCheckBox"));
        GreenCheckBox->setGeometry(QRect(90, 95, 51, 17));
        BlueCheckBox = new QCheckBox(groupBox_LEDSelection);
        BlueCheckBox->setObjectName(QStringLiteral("BlueCheckBox"));
        BlueCheckBox->setGeometry(QRect(160, 95, 51, 17));
        groupBox_LEDCurrent = new QGroupBox(groupBox_LEDControl);
        groupBox_LEDCurrent->setObjectName(QStringLiteral("groupBox_LEDCurrent"));
        groupBox_LEDCurrent->setGeometry(QRect(290, 40, 150, 151));
        groupBox_LEDCurrent->setMaximumSize(QSize(150, 16777215));
        RedLEDCurrent = new QLineEdit(groupBox_LEDCurrent);
        RedLEDCurrent->setObjectName(QStringLiteral("RedLEDCurrent"));
        RedLEDCurrent->setGeometry(QRect(70, 20, 61, 20));
        BlueLEDCurrent = new QLineEdit(groupBox_LEDCurrent);
        BlueLEDCurrent->setObjectName(QStringLiteral("BlueLEDCurrent"));
        BlueLEDCurrent->setGeometry(QRect(70, 50, 61, 20));
        GreenLEDCurrent = new QLineEdit(groupBox_LEDCurrent);
        GreenLEDCurrent->setObjectName(QStringLiteral("GreenLEDCurrent"));
        GreenLEDCurrent->setGeometry(QRect(70, 80, 61, 20));
        LedPwmInvert_checkBox = new QCheckBox(groupBox_LEDCurrent);
        LedPwmInvert_checkBox->setObjectName(QStringLiteral("LedPwmInvert_checkBox"));
        LedPwmInvert_checkBox->setGeometry(QRect(30, 120, 81, 17));
        label_Red = new QLabel(groupBox_LEDCurrent);
        label_Red->setObjectName(QStringLiteral("label_Red"));
        label_Red->setGeometry(QRect(19, 23, 31, 16));
        label_Red->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        label_Blue = new QLabel(groupBox_LEDCurrent);
        label_Blue->setObjectName(QStringLiteral("label_Blue"));
        label_Blue->setGeometry(QRect(19, 53, 31, 16));
        label_Blue->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        label_Green = new QLabel(groupBox_LEDCurrent);
        label_Green->setObjectName(QStringLiteral("label_Green"));
        label_Green->setGeometry(QRect(19, 83, 41, 16));
        label_Green->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        groupBox_LEDSelection->raise();
        groupBox_LEDCurrent->raise();
        GetLEDpushButton->raise();
        SetLEDpushButton->raise();
        groupBox_OpticalInvert = new QGroupBox(groupBox_SystemSettings);
        groupBox_OpticalInvert->setObjectName(QStringLiteral("groupBox_OpticalInvert"));
        groupBox_OpticalInvert->setGeometry(QRect(560, 50, 291, 131));
        groupBox_OpticalInvert->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        patternDisplayInvertData_checkBox = new QCheckBox(groupBox_OpticalInvert);
        patternDisplayInvertData_checkBox->setObjectName(QStringLiteral("patternDisplayInvertData_checkBox"));
        patternDisplayInvertData_checkBox->setGeometry(QRect(51, 28, 161, 41));
        layoutWidget_3 = new QWidget(groupBox_OpticalInvert);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(50, 79, 201, 30));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        getPatternDisplayInvertData_button = new QPushButton(layoutWidget_3);
        getPatternDisplayInvertData_button->setObjectName(QStringLiteral("getPatternDisplayInvertData_button"));

        horizontalLayout_8->addWidget(getPatternDisplayInvertData_button);

        setPatternDisplayInvertData_button = new QPushButton(layoutWidget_3);
        setPatternDisplayInvertData_button->setObjectName(QStringLiteral("setPatternDisplayInvertData_button"));

        horizontalLayout_8->addWidget(setPatternDisplayInvertData_button);


        gridLayout_16->addWidget(groupBox_SystemSettings, 0, 0, 1, 1);


        gridLayout_8->addWidget(frame_systemControls, 0, 0, 1, 1);

        stackedWidget->addWidget(systemSettingsPage);
        LEDDriverPage = new QWidget();
        LEDDriverPage->setObjectName(QStringLiteral("LEDDriverPage"));
        gridLayout_9 = new QGridLayout(LEDDriverPage);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        frame_LedDriver = new QFrame(LEDDriverPage);
        frame_LedDriver->setObjectName(QStringLiteral("frame_LedDriver"));
        sizePolicy6.setHeightForWidth(frame_LedDriver->sizePolicy().hasHeightForWidth());
        frame_LedDriver->setSizePolicy(sizePolicy6);
        frame_LedDriver->setStyleSheet(QLatin1String("QFrame{background-image : url(:/images/img.jpg);\n"
"border:1px solid black}"));
        frame_LedDriver->setFrameShape(QFrame::StyledPanel);
        frame_LedDriver->setFrameShadow(QFrame::Raised);
        groupBox_LEDDriver = new QGroupBox(frame_LedDriver);
        groupBox_LEDDriver->setObjectName(QStringLiteral("groupBox_LEDDriver"));
        groupBox_LEDDriver->setGeometry(QRect(9, 9, 1071, 611));
        sizePolicy6.setHeightForWidth(groupBox_LEDDriver->sizePolicy().hasHeightForWidth());
        groupBox_LEDDriver->setSizePolicy(sizePolicy6);
        groupBox_LEDDriver->setFont(font2);
        groupBox_LEDDriver->setStyleSheet(QLatin1String("QGroupBox{ border: 1.5px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        groupBox_LEDDriverStatus = new QGroupBox(groupBox_LEDDriver);
        groupBox_LEDDriverStatus->setObjectName(QStringLiteral("groupBox_LEDDriverStatus"));
        groupBox_LEDDriverStatus->setGeometry(QRect(9, 29, 1051, 571));
        groupBox_LEDDriverStatus->setFont(font5);
        groupBox_LEDDriverStatus->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        label_LEDDriverStatus = new QLabel(groupBox_LEDDriverStatus);
        label_LEDDriverStatus->setObjectName(QStringLiteral("label_LEDDriverStatus"));
        label_LEDDriverStatus->setEnabled(true);
        label_LEDDriverStatus->setGeometry(QRect(125, 23, 175, 31));
        label_LEDDriverStatus->setFont(font6);
        label_LEDDriverStatus->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        label_LEDDriverStatus->setTextFormat(Qt::PlainText);
        USBDevicePath_TextEdit = new QTextEdit(groupBox_LEDDriverStatus);
        USBDevicePath_TextEdit->setObjectName(QStringLiteral("USBDevicePath_TextEdit"));
        USBDevicePath_TextEdit->setEnabled(true);
        USBDevicePath_TextEdit->setGeometry(QRect(485, 23, 540, 31));
        QSizePolicy sizePolicy10(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy10.setHorizontalStretch(50);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(USBDevicePath_TextEdit->sizePolicy().hasHeightForWidth());
        USBDevicePath_TextEdit->setSizePolicy(sizePolicy10);
        QFont font8;
        font8.setFamily(QStringLiteral("Arial"));
        font8.setPointSize(10);
        USBDevicePath_TextEdit->setFont(font8);
        USBDevicePath = new QLabel(groupBox_LEDDriverStatus);
        USBDevicePath->setObjectName(QStringLiteral("USBDevicePath"));
        USBDevicePath->setGeometry(QRect(360, 23, 121, 31));
        USBDevicePath->setFont(font6);
        USBDevicePath->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        label_ReadBuffer = new QLabel(groupBox_LEDDriverStatus);
        label_ReadBuffer->setObjectName(QStringLiteral("label_ReadBuffer"));
        label_ReadBuffer->setGeometry(QRect(10, 65, 85, 31));
        label_ReadBuffer->setFont(font6);
        label_ReadBuffer->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        pushButton_RestartLEDDriver = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_RestartLEDDriver->setObjectName(QStringLiteral("pushButton_RestartLEDDriver"));
        pushButton_RestartLEDDriver->setGeometry(QRect(915, 65, 130, 31));
        QFont font9;
        font9.setFamily(QStringLiteral("Arial"));
        font9.setPointSize(10);
        font9.setBold(true);
        font9.setWeight(75);
        pushButton_RestartLEDDriver->setFont(font9);
        checkBox_InternalInitialization = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_InternalInitialization->setObjectName(QStringLiteral("checkBox_InternalInitialization"));
        checkBox_InternalInitialization->setEnabled(false);
        checkBox_InternalInitialization->setGeometry(QRect(10, 110, 130, 20));
        checkBox_InternalInitialization->setFont(font4);
        checkBox_LEDTempOK = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_LEDTempOK->setObjectName(QStringLiteral("checkBox_LEDTempOK"));
        checkBox_LEDTempOK->setEnabled(false);
        checkBox_LEDTempOK->setGeometry(QRect(10, 135, 130, 20));
        checkBox_LEDTempOK->setFont(font4);
        checkBox_DMDTempOK = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_DMDTempOK->setObjectName(QStringLiteral("checkBox_DMDTempOK"));
        checkBox_DMDTempOK->setEnabled(false);
        checkBox_DMDTempOK->setGeometry(QRect(10, 160, 130, 20));
        checkBox_DMDTempOK->setFont(font4);
        checkBox_BoardTempOK = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_BoardTempOK->setObjectName(QStringLiteral("checkBox_BoardTempOK"));
        checkBox_BoardTempOK->setEnabled(false);
        checkBox_BoardTempOK->setGeometry(QRect(10, 185, 130, 20));
        checkBox_BoardTempOK->setFont(font4);
        checkBox_HardwareOK = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_HardwareOK->setObjectName(QStringLiteral("checkBox_HardwareOK"));
        checkBox_HardwareOK->setEnabled(false);
        checkBox_HardwareOK->setGeometry(QRect(10, 208, 130, 20));
        checkBox_HardwareOK->setFont(font4);
        checkBox_IntensityCalOK = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_IntensityCalOK->setObjectName(QStringLiteral("checkBox_IntensityCalOK"));
        checkBox_IntensityCalOK->setEnabled(false);
        checkBox_IntensityCalOK->setGeometry(QRect(10, 233, 150, 20));
        checkBox_IntensityCalOK->setFont(font4);
        checkBox_WriteProtection = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_WriteProtection->setObjectName(QStringLiteral("checkBox_WriteProtection"));
        checkBox_WriteProtection->setEnabled(false);
        checkBox_WriteProtection->setGeometry(QRect(10, 258, 130, 20));
        checkBox_WriteProtection->setFont(font4);
        checkBox_IntensityModInstall = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_IntensityModInstall->setObjectName(QStringLiteral("checkBox_IntensityModInstall"));
        checkBox_IntensityModInstall->setEnabled(false);
        checkBox_IntensityModInstall->setGeometry(QRect(10, 282, 150, 20));
        checkBox_IntensityModInstall->setFont(font4);
        label_DMDTempMax = new QLabel(groupBox_LEDDriverStatus);
        label_DMDTempMax->setObjectName(QStringLiteral("label_DMDTempMax"));
        label_DMDTempMax->setGeometry(QRect(200, 110, 95, 25));
        label_DMDTempMax->setFont(font4);
        label_DMDTempMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        DMDTempMax_text = new QTextBrowser(groupBox_LEDDriverStatus);
        DMDTempMax_text->setObjectName(QStringLiteral("DMDTempMax_text"));
        DMDTempMax_text->setEnabled(false);
        DMDTempMax_text->setGeometry(QRect(300, 110, 75, 25));
        DMDTempMax_text->setFont(font4);
        label_LEDTempMax = new QLabel(groupBox_LEDDriverStatus);
        label_LEDTempMax->setObjectName(QStringLiteral("label_LEDTempMax"));
        label_LEDTempMax->setGeometry(QRect(200, 146, 90, 25));
        label_LEDTempMax->setFont(font4);
        label_LEDTempMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        LEDTempMax_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDTempMax_text->setObjectName(QStringLiteral("LEDTempMax_text"));
        LEDTempMax_text->setEnabled(false);
        LEDTempMax_text->setGeometry(QRect(300, 146, 75, 25));
        LEDTempMax_text->setFont(font4);
        label_BoardTempMax = new QLabel(groupBox_LEDDriverStatus);
        label_BoardTempMax->setObjectName(QStringLiteral("label_BoardTempMax"));
        label_BoardTempMax->setGeometry(QRect(200, 185, 95, 25));
        label_BoardTempMax->setFont(font4);
        label_BoardTempMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        BoardTempMax_text = new QTextBrowser(groupBox_LEDDriverStatus);
        BoardTempMax_text->setObjectName(QStringLiteral("BoardTempMax_text"));
        BoardTempMax_text->setEnabled(false);
        BoardTempMax_text->setGeometry(QRect(300, 185, 75, 25));
        BoardTempMax_text->setFont(font4);
        label_LEDCurrentMax = new QLabel(groupBox_LEDDriverStatus);
        label_LEDCurrentMax->setObjectName(QStringLiteral("label_LEDCurrentMax"));
        label_LEDCurrentMax->setGeometry(QRect(200, 220, 100, 25));
        label_LEDCurrentMax->setFont(font4);
        label_LEDCurrentMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        LEDCurrentMax_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDCurrentMax_text->setObjectName(QStringLiteral("LEDCurrentMax_text"));
        LEDCurrentMax_text->setEnabled(false);
        LEDCurrentMax_text->setGeometry(QRect(300, 220, 75, 25));
        LEDCurrentMax_text->setFont(font4);
        label_IntensityOffset = new QLabel(groupBox_LEDDriverStatus);
        label_IntensityOffset->setObjectName(QStringLiteral("label_IntensityOffset"));
        label_IntensityOffset->setGeometry(QRect(200, 260, 90, 25));
        label_IntensityOffset->setFont(font8);
        label_IntensityOffset->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        Intensity_offset_text = new QTextBrowser(groupBox_LEDDriverStatus);
        Intensity_offset_text->setObjectName(QStringLiteral("Intensity_offset_text"));
        Intensity_offset_text->setEnabled(false);
        Intensity_offset_text->setGeometry(QRect(300, 260, 75, 25));
        label_IntensityGain = new QLabel(groupBox_LEDDriverStatus);
        label_IntensityGain->setObjectName(QStringLiteral("label_IntensityGain"));
        label_IntensityGain->setGeometry(QRect(200, 300, 95, 25));
        label_IntensityGain->setFont(font8);
        label_IntensityGain->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        IntensityGain_text = new QTextBrowser(groupBox_LEDDriverStatus);
        IntensityGain_text->setObjectName(QStringLiteral("IntensityGain_text"));
        IntensityGain_text->setEnabled(false);
        IntensityGain_text->setGeometry(QRect(300, 300, 75, 25));
        IntensityGain_text->setFont(font4);
        Label_DMDTemp = new QLabel(groupBox_LEDDriverStatus);
        Label_DMDTemp->setObjectName(QStringLiteral("Label_DMDTemp"));
        Label_DMDTemp->setGeometry(QRect(400, 110, 90, 25));
        Label_DMDTemp->setFont(font4);
        Label_DMDTemp->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        DMDTemp_text = new QTextBrowser(groupBox_LEDDriverStatus);
        DMDTemp_text->setObjectName(QStringLiteral("DMDTemp_text"));
        DMDTemp_text->setEnabled(false);
        DMDTemp_text->setGeometry(QRect(520, 110, 75, 25));
        DMDTemp_text->setFont(font4);
        label_LEDTemp = new QLabel(groupBox_LEDDriverStatus);
        label_LEDTemp->setObjectName(QStringLiteral("label_LEDTemp"));
        label_LEDTemp->setGeometry(QRect(400, 146, 95, 25));
        label_LEDTemp->setFont(font4);
        label_LEDTemp->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LEDTemp_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDTemp_text->setObjectName(QStringLiteral("LEDTemp_text"));
        LEDTemp_text->setEnabled(false);
        LEDTemp_text->setGeometry(QRect(520, 146, 75, 25));
        LEDTemp_text->setFont(font4);
        label_BoardTemp = new QLabel(groupBox_LEDDriverStatus);
        label_BoardTemp->setObjectName(QStringLiteral("label_BoardTemp"));
        label_BoardTemp->setGeometry(QRect(400, 185, 95, 25));
        label_BoardTemp->setFont(font8);
        label_BoardTemp->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        BoardTemp_text = new QTextBrowser(groupBox_LEDDriverStatus);
        BoardTemp_text->setObjectName(QStringLiteral("BoardTemp_text"));
        BoardTemp_text->setEnabled(false);
        BoardTemp_text->setGeometry(QRect(520, 185, 75, 25));
        BoardTemp_text->setFont(font4);
        label_LEDVoltage = new QLabel(groupBox_LEDDriverStatus);
        label_LEDVoltage->setObjectName(QStringLiteral("label_LEDVoltage"));
        label_LEDVoltage->setGeometry(QRect(400, 220, 95, 25));
        label_LEDVoltage->setFont(font8);
        label_LEDVoltage->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LEDVoltage_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDVoltage_text->setObjectName(QStringLiteral("LEDVoltage_text"));
        LEDVoltage_text->setEnabled(false);
        LEDVoltage_text->setGeometry(QRect(520, 220, 75, 25));
        LEDVoltage_text->setFont(font4);
        label_LEDCurrent = new QLabel(groupBox_LEDDriverStatus);
        label_LEDCurrent->setObjectName(QStringLiteral("label_LEDCurrent"));
        label_LEDCurrent->setGeometry(QRect(400, 260, 105, 25));
        label_LEDCurrent->setFont(font8);
        label_LEDCurrent->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LEDCurrent_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDCurrent_text->setObjectName(QStringLiteral("LEDCurrent_text"));
        LEDCurrent_text->setEnabled(false);
        LEDCurrent_text->setGeometry(QRect(520, 260, 75, 25));
        label_CycleTime = new QLabel(groupBox_LEDDriverStatus);
        label_CycleTime->setObjectName(QStringLiteral("label_CycleTime"));
        label_CycleTime->setGeometry(QRect(400, 300, 95, 25));
        label_CycleTime->setFont(font8);
        label_CycleTime->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        CycleTime_Text = new QTextBrowser(groupBox_LEDDriverStatus);
        CycleTime_Text->setObjectName(QStringLiteral("CycleTime_Text"));
        CycleTime_Text->setEnabled(false);
        CycleTime_Text->setGeometry(QRect(520, 300, 75, 25));
        CycleTime_Text->setFont(font4);
        label_IntensityVoltage = new QLabel(groupBox_LEDDriverStatus);
        label_IntensityVoltage->setObjectName(QStringLiteral("label_IntensityVoltage"));
        label_IntensityVoltage->setGeometry(QRect(620, 110, 150, 25));
        label_IntensityVoltage->setFont(font6);
        label_IntensityVoltage->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        IntensityVoltage_text = new QTextBrowser(groupBox_LEDDriverStatus);
        IntensityVoltage_text->setObjectName(QStringLiteral("IntensityVoltage_text"));
        IntensityVoltage_text->setEnabled(false);
        IntensityVoltage_text->setGeometry(QRect(770, 110, 150, 25));
        IntensityVoltage_text->setFont(font4);
        label_Intensity = new QLabel(groupBox_LEDDriverStatus);
        label_Intensity->setObjectName(QStringLiteral("label_Intensity"));
        label_Intensity->setGeometry(QRect(620, 146, 120, 25));
        label_Intensity->setFont(font6);
        label_Intensity->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        Intensity_text = new QTextBrowser(groupBox_LEDDriverStatus);
        Intensity_text->setObjectName(QStringLiteral("Intensity_text"));
        Intensity_text->setEnabled(false);
        Intensity_text->setGeometry(QRect(770, 146, 150, 25));
        label_LEDSerial = new QLabel(groupBox_LEDDriverStatus);
        label_LEDSerial->setObjectName(QStringLiteral("label_LEDSerial"));
        label_LEDSerial->setGeometry(QRect(620, 185, 120, 25));
        label_LEDSerial->setFont(font8);
        label_LEDSerial->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LEDSerial_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDSerial_text->setObjectName(QStringLiteral("LEDSerial_text"));
        LEDSerial_text->setEnabled(false);
        LEDSerial_text->setGeometry(QRect(770, 185, 200, 25));
        sizePolicy3.setHeightForWidth(LEDSerial_text->sizePolicy().hasHeightForWidth());
        LEDSerial_text->setSizePolicy(sizePolicy3);
        label_LESerial = new QLabel(groupBox_LEDDriverStatus);
        label_LESerial->setObjectName(QStringLiteral("label_LESerial"));
        label_LESerial->setGeometry(QRect(620, 220, 120, 25));
        QFont font10;
        font10.setFamily(QStringLiteral("Arial"));
        font10.setPointSize(10);
        font10.setItalic(false);
        label_LESerial->setFont(font10);
        label_LESerial->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LESerial_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LESerial_text->setObjectName(QStringLiteral("LESerial_text"));
        LESerial_text->setEnabled(false);
        LESerial_text->setGeometry(QRect(770, 220, 200, 25));
        sizePolicy3.setHeightForWidth(LESerial_text->sizePolicy().hasHeightForWidth());
        LESerial_text->setSizePolicy(sizePolicy3);
        LESerial_text->setFont(font4);
        label_PCBFanSpeed = new QLabel(groupBox_LEDDriverStatus);
        label_PCBFanSpeed->setObjectName(QStringLiteral("label_PCBFanSpeed"));
        label_PCBFanSpeed->setGeometry(QRect(10, 350, 150, 25));
        label_PCBFanSpeed->setFont(font8);
        label_PCBFanSpeed->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        PCBFanSpeed_text = new QTextBrowser(groupBox_LEDDriverStatus);
        PCBFanSpeed_text->setObjectName(QStringLiteral("PCBFanSpeed_text"));
        PCBFanSpeed_text->setGeometry(QRect(160, 350, 95, 25));
        PCBFanSpeed_text->setFont(font4);
        label_DMDFanSpeed = new QLabel(groupBox_LEDDriverStatus);
        label_DMDFanSpeed->setObjectName(QStringLiteral("label_DMDFanSpeed"));
        label_DMDFanSpeed->setGeometry(QRect(10, 385, 150, 25));
        label_DMDFanSpeed->setFont(font8);
        label_DMDFanSpeed->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        DMDFanSpeed_text = new QTextBrowser(groupBox_LEDDriverStatus);
        DMDFanSpeed_text->setObjectName(QStringLiteral("DMDFanSpeed_text"));
        DMDFanSpeed_text->setGeometry(QRect(160, 385, 95, 25));
        DMDFanSpeed_text->setFont(font4);
        label_LEDFanSpeed = new QLabel(groupBox_LEDDriverStatus);
        label_LEDFanSpeed->setObjectName(QStringLiteral("label_LEDFanSpeed"));
        label_LEDFanSpeed->setGeometry(QRect(10, 420, 150, 25));
        label_LEDFanSpeed->setFont(font8);
        label_LEDFanSpeed->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LEDFanSpeed_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDFanSpeed_text->setObjectName(QStringLiteral("LEDFanSpeed_text"));
        LEDFanSpeed_text->setGeometry(QRect(160, 420, 95, 25));
        LEDFanSpeed_text->setFont(font4);
        label_LEDCurrent2 = new QLabel(groupBox_LEDDriverStatus);
        label_LEDCurrent2->setObjectName(QStringLiteral("label_LEDCurrent2"));
        label_LEDCurrent2->setGeometry(QRect(10, 470, 150, 25));
        label_LEDCurrent2->setFont(font8);
        label_LEDCurrent2->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        pushButton_SetLEDCurrent = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_SetLEDCurrent->setObjectName(QStringLiteral("pushButton_SetLEDCurrent"));
        pushButton_SetLEDCurrent->setGeometry(QRect(170, 495, 115, 25));
        QFont font11;
        font11.setFamily(QStringLiteral("Arial"));
        font11.setPointSize(9);
        font11.setBold(true);
        font11.setWeight(75);
        pushButton_SetLEDCurrent->setFont(font11);
        pushButton_LEDPWMON_OFF = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_LEDPWMON_OFF->setObjectName(QStringLiteral("pushButton_LEDPWMON_OFF"));
        pushButton_LEDPWMON_OFF->setGeometry(QRect(10, 530, 150, 30));
        pushButton_LEDPWMON_OFF->setFont(font9);
        label_Intensity2 = new QLabel(groupBox_LEDDriverStatus);
        label_Intensity2->setObjectName(QStringLiteral("label_Intensity2"));
        label_Intensity2->setGeometry(QRect(330, 470, 150, 25));
        label_Intensity2->setFont(font6);
        label_Intensity2->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        pushButton_SetIntensity = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_SetIntensity->setObjectName(QStringLiteral("pushButton_SetIntensity"));
        pushButton_SetIntensity->setGeometry(QRect(495, 495, 115, 25));
        pushButton_SetIntensity->setFont(font11);
        checkBox_IntensityRegEnable = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_IntensityRegEnable->setObjectName(QStringLiteral("checkBox_IntensityRegEnable"));
        checkBox_IntensityRegEnable->setGeometry(QRect(420, 350, 160, 25));
        checkBox_IntensityRegEnable->setFont(font8);
        checkBox_IntensityRegEnable->setChecked(false);
        pushButton_EnableIntensityReg = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_EnableIntensityReg->setObjectName(QStringLiteral("pushButton_EnableIntensityReg"));
        pushButton_EnableIntensityReg->setGeometry(QRect(410, 380, 175, 25));
        pushButton_EnableIntensityReg->setFont(font11);
        pushButton_ExTrigger = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_ExTrigger->setObjectName(QStringLiteral("pushButton_ExTrigger"));
        pushButton_ExTrigger->setGeometry(QRect(650, 495, 120, 35));
        pushButton_ExTrigger->setFont(font9);
        pushButton_SwTrigger = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_SwTrigger->setObjectName(QStringLiteral("pushButton_SwTrigger"));
        pushButton_SwTrigger->setGeometry(QRect(790, 495, 120, 35));
        pushButton_SwTrigger->setFont(font9);
        pushButton_ConnectLED = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_ConnectLED->setObjectName(QStringLiteral("pushButton_ConnectLED"));
        pushButton_ConnectLED->setGeometry(QRect(10, 23, 95, 31));
        pushButton_ConnectLED->setFont(font11);
        Text_Readbuffer = new QTextEdit(groupBox_LEDDriverStatus);
        Text_Readbuffer->setObjectName(QStringLiteral("Text_Readbuffer"));
        Text_Readbuffer->setGeometry(QRect(100, 65, 801, 35));
        sizePolicy10.setHeightForWidth(Text_Readbuffer->sizePolicy().hasHeightForWidth());
        Text_Readbuffer->setSizePolicy(sizePolicy10);
        Text_Readbuffer->setFont(font4);
        LEDCurrent_lineEdit = new QLineEdit(groupBox_LEDDriverStatus);
        LEDCurrent_lineEdit->setObjectName(QStringLiteral("LEDCurrent_lineEdit"));
        LEDCurrent_lineEdit->setGeometry(QRect(10, 495, 150, 25));
        LEDCurrent_lineEdit->setFont(font4);
        Intensity_lineEdit = new QLineEdit(groupBox_LEDDriverStatus);
        Intensity_lineEdit->setObjectName(QStringLiteral("Intensity_lineEdit"));
        Intensity_lineEdit->setGeometry(QRect(330, 495, 150, 25));
        Intensity_lineEdit->setFont(font4);

        gridLayout_9->addWidget(frame_LedDriver, 0, 0, 1, 1);

        stackedWidget->addWidget(LEDDriverPage);
        patternModePage = new QWidget();
        patternModePage->setObjectName(QStringLiteral("patternModePage"));
        gridLayout_3 = new QGridLayout(patternModePage);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_patternMode = new QFrame(patternModePage);
        frame_patternMode->setObjectName(QStringLiteral("frame_patternMode"));
        sizePolicy6.setHeightForWidth(frame_patternMode->sizePolicy().hasHeightForWidth());
        frame_patternMode->setSizePolicy(sizePolicy6);
        frame_patternMode->setMinimumSize(QSize(931, 581));
        frame_patternMode->setStyleSheet(QLatin1String("QFrame{background-image : url(:/images/img.jpg);\n"
"border:1px solid black}"));
        frame_patternMode->setFrameShape(QFrame::StyledPanel);
        frame_patternMode->setFrameShadow(QFrame::Raised);
        gridLayout_11 = new QGridLayout(frame_patternMode);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        groupBox_PatternMode = new QGroupBox(frame_patternMode);
        groupBox_PatternMode->setObjectName(QStringLiteral("groupBox_PatternMode"));
        sizePolicy6.setHeightForWidth(groupBox_PatternMode->sizePolicy().hasHeightForWidth());
        groupBox_PatternMode->setSizePolicy(sizePolicy6);
        groupBox_PatternMode->setFont(font2);
        groupBox_PatternMode->setAutoFillBackground(false);
        groupBox_PatternMode->setStyleSheet(QLatin1String("QGroupBox{ border: 1.5px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        horizontalLayout_26 = new QHBoxLayout(groupBox_PatternMode);
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(-1, 18, -1, -1);
        verticalLayout_39 = new QVBoxLayout();
        verticalLayout_39->setSpacing(6);
        verticalLayout_39->setObjectName(QStringLiteral("verticalLayout_39"));
        pushButton_patternControls = new QPushButton(groupBox_PatternMode);
        pushButton_patternControls->setObjectName(QStringLiteral("pushButton_patternControls"));
        sizePolicy3.setHeightForWidth(pushButton_patternControls->sizePolicy().hasHeightForWidth());
        pushButton_patternControls->setSizePolicy(sizePolicy3);
        pushButton_patternControls->setMinimumSize(QSize(81, 71));
        QFont font12;
        font12.setFamily(QStringLiteral("Arial"));
        font12.setPointSize(11);
        font12.setBold(false);
        font12.setItalic(false);
        font12.setWeight(50);
        pushButton_patternControls->setFont(font12);
        pushButton_patternControls->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"}"));
        pushButton_patternControls->setCheckable(true);
        pushButton_patternControls->setChecked(true);

        verticalLayout_39->addWidget(pushButton_patternControls);

        pushButton_globalSettings = new QPushButton(groupBox_PatternMode);
        pushButton_globalSettings->setObjectName(QStringLiteral("pushButton_globalSettings"));
        sizePolicy3.setHeightForWidth(pushButton_globalSettings->sizePolicy().hasHeightForWidth());
        pushButton_globalSettings->setSizePolicy(sizePolicy3);
        pushButton_globalSettings->setMinimumSize(QSize(81, 71));
        pushButton_globalSettings->setFont(font12);
        pushButton_globalSettings->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"}"));
        pushButton_globalSettings->setCheckable(true);

        verticalLayout_39->addWidget(pushButton_globalSettings);


        horizontalLayout_26->addLayout(verticalLayout_39);

        patternMode_stackedWidget = new QStackedWidget(groupBox_PatternMode);
        patternMode_stackedWidget->setObjectName(QStringLiteral("patternMode_stackedWidget"));
        patternMode_stackedWidget->setMinimumSize(QSize(794, 514));
        patternMode_stackedWidget->setStyleSheet(QStringLiteral("QStackedWidget{border:0px}"));
        patternDesignPage = new QWidget();
        patternDesignPage->setObjectName(QStringLiteral("patternDesignPage"));
        gridLayout_31 = new QGridLayout(patternDesignPage);
        gridLayout_31->setSpacing(6);
        gridLayout_31->setContentsMargins(11, 11, 11, 11);
        gridLayout_31->setObjectName(QStringLiteral("gridLayout_31"));
        gridLayout_31->setContentsMargins(0, 0, 0, 0);
        groupBox_patternMode_patternControls = new QGroupBox(patternDesignPage);
        groupBox_patternMode_patternControls->setObjectName(QStringLiteral("groupBox_patternMode_patternControls"));
        groupBox_patternMode_patternControls->setMaximumSize(QSize(16777200, 16777200));
        groupBox_patternMode_patternControls->setStyleSheet(QLatin1String("QGroupBox{ border: 1.5px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        horizontalLayout_27 = new QHBoxLayout(groupBox_patternMode_patternControls);
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        verticalLayout_37 = new QVBoxLayout();
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        groupBox_Menu = new QGroupBox(groupBox_patternMode_patternControls);
        groupBox_Menu->setObjectName(QStringLiteral("groupBox_Menu"));
        sizePolicy8.setHeightForWidth(groupBox_Menu->sizePolicy().hasHeightForWidth());
        groupBox_Menu->setSizePolicy(sizePolicy8);
        groupBox_Menu->setMinimumSize(QSize(661, 50));
        groupBox_Menu->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        horizontalLayout_44 = new QHBoxLayout(groupBox_Menu);
        horizontalLayout_44->setSpacing(6);
        horizontalLayout_44->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_44->setObjectName(QStringLiteral("horizontalLayout_44"));
        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_44->addItem(horizontalSpacer_30);

        saveButton_patternSettings = new QPushButton(groupBox_Menu);
        saveButton_patternSettings->setObjectName(QStringLiteral("saveButton_patternSettings"));
        saveButton_patternSettings->setEnabled(true);
        QSizePolicy sizePolicy11(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(saveButton_patternSettings->sizePolicy().hasHeightForWidth());
        saveButton_patternSettings->setSizePolicy(sizePolicy11);
        saveButton_patternSettings->setMinimumSize(QSize(70, 35));
        saveButton_patternSettings->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"}"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/Icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton_patternSettings->setIcon(icon7);

        horizontalLayout_44->addWidget(saveButton_patternSettings);

        loadButton_patternSettings = new QPushButton(groupBox_Menu);
        loadButton_patternSettings->setObjectName(QStringLiteral("loadButton_patternSettings"));
        loadButton_patternSettings->setMinimumSize(QSize(70, 35));
        loadButton_patternSettings->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/Icons/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        loadButton_patternSettings->setIcon(icon8);

        horizontalLayout_44->addWidget(loadButton_patternSettings);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_44->addItem(horizontalSpacer_33);

        addPatternsButton = new QPushButton(groupBox_Menu);
        addPatternsButton->setObjectName(QStringLiteral("addPatternsButton"));
        sizePolicy3.setHeightForWidth(addPatternsButton->sizePolicy().hasHeightForWidth());
        addPatternsButton->setSizePolicy(sizePolicy3);
        addPatternsButton->setMinimumSize(QSize(40, 35));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/Icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addPatternsButton->setIcon(icon9);

        horizontalLayout_44->addWidget(addPatternsButton);

        removePatternsButton = new QPushButton(groupBox_Menu);
        removePatternsButton->setObjectName(QStringLiteral("removePatternsButton"));
        removePatternsButton->setEnabled(false);
        sizePolicy3.setHeightForWidth(removePatternsButton->sizePolicy().hasHeightForWidth());
        removePatternsButton->setSizePolicy(sizePolicy3);
        removePatternsButton->setMinimumSize(QSize(40, 35));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/Icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        removePatternsButton->setIcon(icon10);

        horizontalLayout_44->addWidget(removePatternsButton);

        selectAllButton = new QPushButton(groupBox_Menu);
        selectAllButton->setObjectName(QStringLiteral("selectAllButton"));
        selectAllButton->setEnabled(false);
        sizePolicy3.setHeightForWidth(selectAllButton->sizePolicy().hasHeightForWidth());
        selectAllButton->setSizePolicy(sizePolicy3);
        selectAllButton->setMinimumSize(QSize(40, 35));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/prefix1/Icons/select.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectAllButton->setIcon(icon11);

        horizontalLayout_44->addWidget(selectAllButton);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_44->addItem(horizontalSpacer_32);

        label_Zoom = new QLabel(groupBox_Menu);
        label_Zoom->setObjectName(QStringLiteral("label_Zoom"));
        sizePolicy7.setHeightForWidth(label_Zoom->sizePolicy().hasHeightForWidth());
        label_Zoom->setSizePolicy(sizePolicy7);
        label_Zoom->setMinimumSize(QSize(0, 35));
        label_Zoom->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        horizontalLayout_44->addWidget(label_Zoom);

        zoomSlider = new QSlider(groupBox_Menu);
        zoomSlider->setObjectName(QStringLiteral("zoomSlider"));
        zoomSlider->setEnabled(false);
        sizePolicy1.setHeightForWidth(zoomSlider->sizePolicy().hasHeightForWidth());
        zoomSlider->setSizePolicy(sizePolicy1);
        zoomSlider->setMinimumSize(QSize(271, 35));
        zoomSlider->setMinimum(50);
        zoomSlider->setMaximum(200);
        zoomSlider->setValue(100);
        zoomSlider->setSliderPosition(100);
        zoomSlider->setOrientation(Qt::Horizontal);
        zoomSlider->setInvertedAppearance(false);

        horizontalLayout_44->addWidget(zoomSlider);


        verticalLayout_37->addWidget(groupBox_Menu);

        groupBox_PatternImage = new QGroupBox(groupBox_patternMode_patternControls);
        groupBox_PatternImage->setObjectName(QStringLiteral("groupBox_PatternImage"));
        groupBox_PatternImage->setMinimumSize(QSize(661, 451));
        groupBox_PatternImage->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        horizontalLayout_46 = new QHBoxLayout(groupBox_PatternImage);
        horizontalLayout_46->setSpacing(6);
        horizontalLayout_46->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_46->setObjectName(QStringLiteral("horizontalLayout_46"));
        ptnSetting_groupBox = new QGroupBox(groupBox_PatternImage);
        ptnSetting_groupBox->setObjectName(QStringLiteral("ptnSetting_groupBox"));
        ptnSetting_groupBox->setEnabled(false);
        sizePolicy7.setHeightForWidth(ptnSetting_groupBox->sizePolicy().hasHeightForWidth());
        ptnSetting_groupBox->setSizePolicy(sizePolicy7);
        ptnSetting_groupBox->setMinimumSize(QSize(131, 431));
        ptnSetting_groupBox->setMaximumSize(QSize(131, 16777215));
        ptnSetting_groupBox->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        verticalLayout_38 = new QVBoxLayout(ptnSetting_groupBox);
        verticalLayout_38->setSpacing(6);
        verticalLayout_38->setContentsMargins(11, 11, 11, 11);
        verticalLayout_38->setObjectName(QStringLiteral("verticalLayout_38"));
        verticalLayout_38->setContentsMargins(-1, 20, -1, -1);
        groupBox_BitInfo = new QGroupBox(ptnSetting_groupBox);
        groupBox_BitInfo->setObjectName(QStringLiteral("groupBox_BitInfo"));
        sizePolicy8.setHeightForWidth(groupBox_BitInfo->sizePolicy().hasHeightForWidth());
        groupBox_BitInfo->setSizePolicy(sizePolicy8);
        groupBox_BitInfo->setMinimumSize(QSize(0, 80));
        bitDepth_ComboBox = new QComboBox(groupBox_BitInfo);
        bitDepth_ComboBox->addItem(QString());
        bitDepth_ComboBox->addItem(QString());
        bitDepth_ComboBox->addItem(QString());
        bitDepth_ComboBox->addItem(QString());
        bitDepth_ComboBox->addItem(QString());
        bitDepth_ComboBox->addItem(QString());
        bitDepth_ComboBox->addItem(QString());
        bitDepth_ComboBox->addItem(QString());
        bitDepth_ComboBox->setObjectName(QStringLiteral("bitDepth_ComboBox"));
        bitDepth_ComboBox->setGeometry(QRect(63, 20, 41, 22));
        label_Depth = new QLabel(groupBox_BitInfo);
        label_Depth->setObjectName(QStringLiteral("label_Depth"));
        label_Depth->setGeometry(QRect(10, 22, 31, 16));
        label_Depth->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        startPos_label = new QLabel(groupBox_BitInfo);
        startPos_label->setObjectName(QStringLiteral("startPos_label"));
        startPos_label->setGeometry(QRect(10, 52, 51, 21));
        startPos_label->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        startPos_label->setWordWrap(true);
        startPos_ComboBox = new QComboBox(groupBox_BitInfo);
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->addItem(QString());
        startPos_ComboBox->setObjectName(QStringLiteral("startPos_ComboBox"));
        startPos_ComboBox->setGeometry(QRect(63, 50, 41, 22));

        verticalLayout_38->addWidget(groupBox_BitInfo);

        groupBox_Timing = new QGroupBox(ptnSetting_groupBox);
        groupBox_Timing->setObjectName(QStringLiteral("groupBox_Timing"));
        sizePolicy8.setHeightForWidth(groupBox_Timing->sizePolicy().hasHeightForWidth());
        groupBox_Timing->setSizePolicy(sizePolicy8);
        groupBox_Timing->setMinimumSize(QSize(0, 80));
        exposure_lineEdit = new QLineEdit(groupBox_Timing);
        exposure_lineEdit->setObjectName(QStringLiteral("exposure_lineEdit"));
        exposure_lineEdit->setGeometry(QRect(64, 19, 41, 20));
        label_Exposure = new QLabel(groupBox_Timing);
        label_Exposure->setObjectName(QStringLiteral("label_Exposure"));
        label_Exposure->setGeometry(QRect(13, 20, 45, 21));
        label_Exposure->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        label_Exposure->setWordWrap(true);
        label_DarkTime = new QLabel(groupBox_Timing);
        label_DarkTime->setObjectName(QStringLiteral("label_DarkTime"));
        label_DarkTime->setGeometry(QRect(13, 50, 47, 21));
        label_DarkTime->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        darkPeriod_lineEdit = new QLineEdit(groupBox_Timing);
        darkPeriod_lineEdit->setObjectName(QStringLiteral("darkPeriod_lineEdit"));
        darkPeriod_lineEdit->setGeometry(QRect(64, 54, 41, 20));

        verticalLayout_38->addWidget(groupBox_Timing);

        verticalSpacer_32 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_38->addItem(verticalSpacer_32);

        groupBox_Color = new QGroupBox(ptnSetting_groupBox);
        groupBox_Color->setObjectName(QStringLiteral("groupBox_Color"));
        sizePolicy8.setHeightForWidth(groupBox_Color->sizePolicy().hasHeightForWidth());
        groupBox_Color->setSizePolicy(sizePolicy8);
        groupBox_Color->setMinimumSize(QSize(100, 50));
        groupBox_Color->setMaximumSize(QSize(16777215, 45));
        verticalLayout_4 = new QVBoxLayout(groupBox_Color);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        color_ComboBox = new QComboBox(groupBox_Color);
        color_ComboBox->addItem(QString());
        color_ComboBox->addItem(QString());
        color_ComboBox->addItem(QString());
        color_ComboBox->addItem(QString());
        color_ComboBox->addItem(QString());
        color_ComboBox->addItem(QString());
        color_ComboBox->addItem(QString());
        color_ComboBox->setObjectName(QStringLiteral("color_ComboBox"));

        verticalLayout_4->addWidget(color_ComboBox);


        verticalLayout_38->addWidget(groupBox_Color);

        verticalSpacer_33 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_38->addItem(verticalSpacer_33);

        triggerIn_checkBox = new QCheckBox(ptnSetting_groupBox);
        triggerIn_checkBox->setObjectName(QStringLiteral("triggerIn_checkBox"));

        verticalLayout_38->addWidget(triggerIn_checkBox);

        verticalSpacer_34 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_38->addItem(verticalSpacer_34);

        label_TrigOut1 = new QLabel(ptnSetting_groupBox);
        label_TrigOut1->setObjectName(QStringLiteral("label_TrigOut1"));
        label_TrigOut1->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        label_TrigOut1->setLineWidth(1);

        verticalLayout_38->addWidget(label_TrigOut1);

        verticalSpacer_35 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_38->addItem(verticalSpacer_35);

        triggerOut2_checkBox = new QCheckBox(ptnSetting_groupBox);
        triggerOut2_checkBox->setObjectName(QStringLiteral("triggerOut2_checkBox"));

        verticalLayout_38->addWidget(triggerOut2_checkBox);

        verticalSpacer_36 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_38->addItem(verticalSpacer_36);


        horizontalLayout_46->addWidget(ptnSetting_groupBox);

        waveFormArea = new QScrollArea(groupBox_PatternImage);
        waveFormArea->setObjectName(QStringLiteral("waveFormArea"));
        waveFormArea->setMinimumSize(QSize(501, 431));
        waveFormArea->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        waveFormArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        waveFormArea->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 502, 429));
        waveFormArea->setWidget(scrollAreaWidgetContents_4);

        horizontalLayout_46->addWidget(waveFormArea);


        verticalLayout_37->addWidget(groupBox_PatternImage);


        horizontalLayout_27->addLayout(verticalLayout_37);

        verticalLayout_36 = new QVBoxLayout();
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        verticalSpacer_29 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_36->addItem(verticalSpacer_29);

        groupBox_UpdateLUT = new QGroupBox(groupBox_patternMode_patternControls);
        groupBox_UpdateLUT->setObjectName(QStringLiteral("groupBox_UpdateLUT"));
        groupBox_UpdateLUT->setMinimumSize(QSize(101, 0));
        groupBox_UpdateLUT->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        gridLayout_37 = new QGridLayout(groupBox_UpdateLUT);
        gridLayout_37->setSpacing(6);
        gridLayout_37->setContentsMargins(11, 11, 11, 11);
        gridLayout_37->setObjectName(QStringLiteral("gridLayout_37"));
        updateLUT_Button = new QPushButton(groupBox_UpdateLUT);
        updateLUT_Button->setObjectName(QStringLiteral("updateLUT_Button"));
        sizePolicy3.setHeightForWidth(updateLUT_Button->sizePolicy().hasHeightForWidth());
        updateLUT_Button->setSizePolicy(sizePolicy3);
        updateLUT_Button->setMinimumSize(QSize(81, 71));

        gridLayout_37->addWidget(updateLUT_Button, 1, 0, 1, 1);


        verticalLayout_36->addWidget(groupBox_UpdateLUT);

        verticalSpacer_28 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_36->addItem(verticalSpacer_28);

        groupBox_PlayRepeat = new QGroupBox(groupBox_patternMode_patternControls);
        groupBox_PlayRepeat->setObjectName(QStringLiteral("groupBox_PlayRepeat"));
        groupBox_PlayRepeat->setMinimumSize(QSize(101, 66));
        groupBox_PlayRepeat->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        verticalLayout_35 = new QVBoxLayout(groupBox_PlayRepeat);
        verticalLayout_35->setSpacing(6);
        verticalLayout_35->setContentsMargins(11, 11, 11, 11);
        verticalLayout_35->setObjectName(QStringLiteral("verticalLayout_35"));
        playOnce_radioButton = new QRadioButton(groupBox_PlayRepeat);
        playOnce_radioButton->setObjectName(QStringLiteral("playOnce_radioButton"));

        verticalLayout_35->addWidget(playOnce_radioButton);

        repeat_radioButton = new QRadioButton(groupBox_PlayRepeat);
        repeat_radioButton->setObjectName(QStringLiteral("repeat_radioButton"));
        repeat_radioButton->setChecked(true);

        verticalLayout_35->addWidget(repeat_radioButton);


        verticalLayout_36->addWidget(groupBox_PlayRepeat);

        groupBox_StartPauseStop = new QGroupBox(groupBox_patternMode_patternControls);
        groupBox_StartPauseStop->setObjectName(QStringLiteral("groupBox_StartPauseStop"));
        groupBox_StartPauseStop->setMinimumSize(QSize(101, 181));
        groupBox_StartPauseStop->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        verticalLayout_6 = new QVBoxLayout(groupBox_StartPauseStop);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        startPatSequence_Button = new QPushButton(groupBox_StartPauseStop);
        startPatSequence_Button->setObjectName(QStringLiteral("startPatSequence_Button"));
        sizePolicy3.setHeightForWidth(startPatSequence_Button->sizePolicy().hasHeightForWidth());
        startPatSequence_Button->setSizePolicy(sizePolicy3);
        startPatSequence_Button->setMinimumSize(QSize(81, 50));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/prefix1/Icons/my_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        startPatSequence_Button->setIcon(icon12);

        verticalLayout_6->addWidget(startPatSequence_Button);

        pausePatSequence_Button = new QPushButton(groupBox_StartPauseStop);
        pausePatSequence_Button->setObjectName(QStringLiteral("pausePatSequence_Button"));
        sizePolicy3.setHeightForWidth(pausePatSequence_Button->sizePolicy().hasHeightForWidth());
        pausePatSequence_Button->setSizePolicy(sizePolicy3);
        pausePatSequence_Button->setMinimumSize(QSize(81, 50));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/new/prefix1/Icons/my_pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pausePatSequence_Button->setIcon(icon13);

        verticalLayout_6->addWidget(pausePatSequence_Button);

        stopPatSequence_Button = new QPushButton(groupBox_StartPauseStop);
        stopPatSequence_Button->setObjectName(QStringLiteral("stopPatSequence_Button"));
        sizePolicy3.setHeightForWidth(stopPatSequence_Button->sizePolicy().hasHeightForWidth());
        stopPatSequence_Button->setSizePolicy(sizePolicy3);
        stopPatSequence_Button->setMinimumSize(QSize(81, 50));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/new/prefix1/Icons/my_stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopPatSequence_Button->setIcon(icon14);

        verticalLayout_6->addWidget(stopPatSequence_Button);


        verticalLayout_36->addWidget(groupBox_StartPauseStop);

        verticalSpacer_31 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_36->addItem(verticalSpacer_31);


        horizontalLayout_27->addLayout(verticalLayout_36);


        gridLayout_31->addWidget(groupBox_patternMode_patternControls, 0, 0, 1, 1);

        patternMode_stackedWidget->addWidget(patternDesignPage);
        patternSettingsPage = new QWidget();
        patternSettingsPage->setObjectName(QStringLiteral("patternSettingsPage"));
        gridLayout_32 = new QGridLayout(patternSettingsPage);
        gridLayout_32->setSpacing(6);
        gridLayout_32->setContentsMargins(11, 11, 11, 11);
        gridLayout_32->setObjectName(QStringLiteral("gridLayout_32"));
        gridLayout_32->setContentsMargins(0, 0, 0, 0);
        groupBox_patternMode_globalSettings = new QGroupBox(patternSettingsPage);
        groupBox_patternMode_globalSettings->setObjectName(QStringLiteral("groupBox_patternMode_globalSettings"));
        groupBox_patternMode_globalSettings->setStyleSheet(QLatin1String("QGroupBox{ border: 1.5px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        groupBox_TriggerControl = new QGroupBox(groupBox_patternMode_globalSettings);
        groupBox_TriggerControl->setObjectName(QStringLiteral("groupBox_TriggerControl"));
        groupBox_TriggerControl->setGeometry(QRect(11, 160, 811, 200));
        sizePolicy8.setHeightForWidth(groupBox_TriggerControl->sizePolicy().hasHeightForWidth());
        groupBox_TriggerControl->setSizePolicy(sizePolicy8);
        groupBox_TriggerControl->setMinimumSize(QSize(390, 200));
        groupBox_TriggerControl->setMaximumSize(QSize(16777215, 200));
        groupBox_TriggerControl->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        gridLayout_33 = new QGridLayout(groupBox_TriggerControl);
        gridLayout_33->setSpacing(6);
        gridLayout_33->setContentsMargins(11, 11, 11, 11);
        gridLayout_33->setObjectName(QStringLiteral("gridLayout_33"));
        gridLayout_33->setContentsMargins(-1, 15, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_TriggerOut1 = new QGroupBox(groupBox_TriggerControl);
        groupBox_TriggerOut1->setObjectName(QStringLiteral("groupBox_TriggerOut1"));
        groupBox_TriggerOut1->setMinimumSize(QSize(170, 169));
        groupBox_TriggerOut1->setMaximumSize(QSize(250, 16777215));
        horizontalLayout_41 = new QHBoxLayout(groupBox_TriggerOut1);
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_20);

        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setSpacing(6);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        gridLayout_35 = new QGridLayout();
        gridLayout_35->setSpacing(6);
        gridLayout_35->setObjectName(QStringLiteral("gridLayout_35"));
        trigOut1_fallingDelay_spinBox = new QSpinBox(groupBox_TriggerOut1);
        trigOut1_fallingDelay_spinBox->setObjectName(QStringLiteral("trigOut1_fallingDelay_spinBox"));
        trigOut1_fallingDelay_spinBox->setMinimum(-100);
        trigOut1_fallingDelay_spinBox->setMaximum(20000);

        gridLayout_35->addWidget(trigOut1_fallingDelay_spinBox, 2, 1, 1, 1);

        trigOut1_risingDelay_spinBox = new QSpinBox(groupBox_TriggerOut1);
        trigOut1_risingDelay_spinBox->setObjectName(QStringLiteral("trigOut1_risingDelay_spinBox"));
        trigOut1_risingDelay_spinBox->setMinimum(-100);
        trigOut1_risingDelay_spinBox->setMaximum(20000);

        gridLayout_35->addWidget(trigOut1_risingDelay_spinBox, 1, 1, 1, 1);

        label_TrigOut1_FallingEdge = new QLabel(groupBox_TriggerOut1);
        label_TrigOut1_FallingEdge->setObjectName(QStringLiteral("label_TrigOut1_FallingEdge"));
        label_TrigOut1_FallingEdge->setStyleSheet(QStringLiteral("QLabel{border:0px solid black}"));
        label_TrigOut1_FallingEdge->setWordWrap(true);

        gridLayout_35->addWidget(label_TrigOut1_FallingEdge, 2, 0, 1, 1);

        label_TrigOut1_RisingEdge = new QLabel(groupBox_TriggerOut1);
        label_TrigOut1_RisingEdge->setObjectName(QStringLiteral("label_TrigOut1_RisingEdge"));
        label_TrigOut1_RisingEdge->setStyleSheet(QStringLiteral("QLabel{border:0px solid black}"));
        label_TrigOut1_RisingEdge->setWordWrap(true);

        gridLayout_35->addWidget(label_TrigOut1_RisingEdge, 1, 0, 1, 1);

        verticalSpacer_24 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_35->addItem(verticalSpacer_24, 0, 0, 1, 2);


        verticalLayout_33->addLayout(gridLayout_35);

        verticalSpacer_23 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_33->addItem(verticalSpacer_23);

        invertTrigOut1_checkBox = new QCheckBox(groupBox_TriggerOut1);
        invertTrigOut1_checkBox->setObjectName(QStringLiteral("invertTrigOut1_checkBox"));

        verticalLayout_33->addWidget(invertTrigOut1_checkBox);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        trigOut1GetButton = new QPushButton(groupBox_TriggerOut1);
        trigOut1GetButton->setObjectName(QStringLiteral("trigOut1GetButton"));
        sizePolicy3.setHeightForWidth(trigOut1GetButton->sizePolicy().hasHeightForWidth());
        trigOut1GetButton->setSizePolicy(sizePolicy3);
        trigOut1GetButton->setMinimumSize(QSize(70, 0));

        horizontalLayout_6->addWidget(trigOut1GetButton);

        trigOut1SetButton = new QPushButton(groupBox_TriggerOut1);
        trigOut1SetButton->setObjectName(QStringLiteral("trigOut1SetButton"));
        sizePolicy3.setHeightForWidth(trigOut1SetButton->sizePolicy().hasHeightForWidth());
        trigOut1SetButton->setSizePolicy(sizePolicy3);
        trigOut1SetButton->setMinimumSize(QSize(70, 0));

        horizontalLayout_6->addWidget(trigOut1SetButton);


        verticalLayout_33->addLayout(horizontalLayout_6);


        horizontalLayout_41->addLayout(verticalLayout_33);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_21);


        horizontalLayout->addWidget(groupBox_TriggerOut1);

        groupBox_TriggerOut = new QGroupBox(groupBox_TriggerControl);
        groupBox_TriggerOut->setObjectName(QStringLiteral("groupBox_TriggerOut"));
        groupBox_TriggerOut->setMinimumSize(QSize(170, 169));
        groupBox_TriggerOut->setMaximumSize(QSize(250, 16777215));
        horizontalLayout_40 = new QHBoxLayout(groupBox_TriggerOut);
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_40->setObjectName(QStringLiteral("horizontalLayout_40"));
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_40->addItem(horizontalSpacer_18);

        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        gridLayout_34 = new QGridLayout();
        gridLayout_34->setSpacing(6);
        gridLayout_34->setObjectName(QStringLiteral("gridLayout_34"));
        label_TrigOut2_RisingEdge = new QLabel(groupBox_TriggerOut);
        label_TrigOut2_RisingEdge->setObjectName(QStringLiteral("label_TrigOut2_RisingEdge"));
        label_TrigOut2_RisingEdge->setStyleSheet(QStringLiteral("QLabel{border:0px solid black}"));
        label_TrigOut2_RisingEdge->setWordWrap(true);

        gridLayout_34->addWidget(label_TrigOut2_RisingEdge, 1, 0, 1, 1);

        trigOut2_risingDelay_spinBox = new QSpinBox(groupBox_TriggerOut);
        trigOut2_risingDelay_spinBox->setObjectName(QStringLiteral("trigOut2_risingDelay_spinBox"));
        trigOut2_risingDelay_spinBox->setMinimum(-100);
        trigOut2_risingDelay_spinBox->setMaximum(20000);

        gridLayout_34->addWidget(trigOut2_risingDelay_spinBox, 1, 1, 1, 1);

        trigOut2_fallingDelay_spinBox = new QSpinBox(groupBox_TriggerOut);
        trigOut2_fallingDelay_spinBox->setObjectName(QStringLiteral("trigOut2_fallingDelay_spinBox"));
        trigOut2_fallingDelay_spinBox->setMinimum(-100);
        trigOut2_fallingDelay_spinBox->setMaximum(20000);

        gridLayout_34->addWidget(trigOut2_fallingDelay_spinBox, 2, 1, 1, 1);

        label_TrigOut2_FallingEdge = new QLabel(groupBox_TriggerOut);
        label_TrigOut2_FallingEdge->setObjectName(QStringLiteral("label_TrigOut2_FallingEdge"));
        label_TrigOut2_FallingEdge->setStyleSheet(QStringLiteral("QLabel{border:0px solid black}"));
        label_TrigOut2_FallingEdge->setWordWrap(true);

        gridLayout_34->addWidget(label_TrigOut2_FallingEdge, 2, 0, 1, 1);

        verticalSpacer_22 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_34->addItem(verticalSpacer_22, 0, 0, 1, 2);


        verticalLayout_32->addLayout(gridLayout_34);

        verticalSpacer_21 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_32->addItem(verticalSpacer_21);

        invertTrigOut2_checkBox = new QCheckBox(groupBox_TriggerOut);
        invertTrigOut2_checkBox->setObjectName(QStringLiteral("invertTrigOut2_checkBox"));

        verticalLayout_32->addWidget(invertTrigOut2_checkBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        trigOut2GetButton = new QPushButton(groupBox_TriggerOut);
        trigOut2GetButton->setObjectName(QStringLiteral("trigOut2GetButton"));
        sizePolicy3.setHeightForWidth(trigOut2GetButton->sizePolicy().hasHeightForWidth());
        trigOut2GetButton->setSizePolicy(sizePolicy3);
        trigOut2GetButton->setMinimumSize(QSize(70, 0));

        horizontalLayout_3->addWidget(trigOut2GetButton);

        trigOut2SetButton = new QPushButton(groupBox_TriggerOut);
        trigOut2SetButton->setObjectName(QStringLiteral("trigOut2SetButton"));
        sizePolicy3.setHeightForWidth(trigOut2SetButton->sizePolicy().hasHeightForWidth());
        trigOut2SetButton->setSizePolicy(sizePolicy3);
        trigOut2SetButton->setMinimumSize(QSize(70, 0));

        horizontalLayout_3->addWidget(trigOut2SetButton);


        verticalLayout_32->addLayout(horizontalLayout_3);


        horizontalLayout_40->addLayout(verticalLayout_32);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_40->addItem(horizontalSpacer_19);


        horizontalLayout->addWidget(groupBox_TriggerOut);

        groupBox_TriggerInput1 = new QGroupBox(groupBox_TriggerControl);
        groupBox_TriggerInput1->setObjectName(QStringLiteral("groupBox_TriggerInput1"));
        groupBox_TriggerInput1->setMinimumSize(QSize(170, 169));
        groupBox_TriggerInput1->setMaximumSize(QSize(250, 16777215));
        horizontalLayout_39 = new QHBoxLayout(groupBox_TriggerInput1);
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_39->setObjectName(QStringLiteral("horizontalLayout_39"));
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_16);

        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        verticalSpacer_20 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_31->addItem(verticalSpacer_20);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QStringLiteral("horizontalLayout_38"));
        label_TrigIn1_Delay = new QLabel(groupBox_TriggerInput1);
        label_TrigIn1_Delay->setObjectName(QStringLiteral("label_TrigIn1_Delay"));
        label_TrigIn1_Delay->setStyleSheet(QStringLiteral("QLabel{border:0px solid black}"));
        label_TrigIn1_Delay->setWordWrap(true);

        horizontalLayout_38->addWidget(label_TrigIn1_Delay);

        trigIn1_Delay_spinBox = new QSpinBox(groupBox_TriggerInput1);
        trigIn1_Delay_spinBox->setObjectName(QStringLiteral("trigIn1_Delay_spinBox"));
        trigIn1_Delay_spinBox->setMinimum(105);
        trigIn1_Delay_spinBox->setMaximum(20000);

        horizontalLayout_38->addWidget(trigIn1_Delay_spinBox);


        verticalLayout_31->addLayout(horizontalLayout_38);

        verticalSpacer_19 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_31->addItem(verticalSpacer_19);

        invertTrigIn1_checkBox = new QCheckBox(groupBox_TriggerInput1);
        invertTrigIn1_checkBox->setObjectName(QStringLiteral("invertTrigIn1_checkBox"));

        verticalLayout_31->addWidget(invertTrigIn1_checkBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        trigIn1GetButton = new QPushButton(groupBox_TriggerInput1);
        trigIn1GetButton->setObjectName(QStringLiteral("trigIn1GetButton"));
        sizePolicy3.setHeightForWidth(trigIn1GetButton->sizePolicy().hasHeightForWidth());
        trigIn1GetButton->setSizePolicy(sizePolicy3);
        trigIn1GetButton->setMinimumSize(QSize(70, 0));

        horizontalLayout_4->addWidget(trigIn1GetButton);

        trigIn1SetButton = new QPushButton(groupBox_TriggerInput1);
        trigIn1SetButton->setObjectName(QStringLiteral("trigIn1SetButton"));
        sizePolicy3.setHeightForWidth(trigIn1SetButton->sizePolicy().hasHeightForWidth());
        trigIn1SetButton->setSizePolicy(sizePolicy3);
        trigIn1SetButton->setMinimumSize(QSize(70, 0));

        horizontalLayout_4->addWidget(trigIn1SetButton);


        verticalLayout_31->addLayout(horizontalLayout_4);


        horizontalLayout_39->addLayout(verticalLayout_31);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_17);


        horizontalLayout->addWidget(groupBox_TriggerInput1);

        groupBox_TriggerInput2 = new QGroupBox(groupBox_TriggerControl);
        groupBox_TriggerInput2->setObjectName(QStringLiteral("groupBox_TriggerInput2"));
        groupBox_TriggerInput2->setMinimumSize(QSize(170, 169));
        groupBox_TriggerInput2->setMaximumSize(QSize(250, 16777215));
        horizontalLayout_37 = new QHBoxLayout(groupBox_TriggerInput2);
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_14);

        verticalLayout_30 = new QVBoxLayout();
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        verticalSpacer_18 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_30->addItem(verticalSpacer_18);

        invertTrigIn2_checkBox = new QCheckBox(groupBox_TriggerInput2);
        invertTrigIn2_checkBox->setObjectName(QStringLiteral("invertTrigIn2_checkBox"));

        verticalLayout_30->addWidget(invertTrigIn2_checkBox);

        verticalSpacer_17 = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_30->addItem(verticalSpacer_17);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        trigIn2GetButton = new QPushButton(groupBox_TriggerInput2);
        trigIn2GetButton->setObjectName(QStringLiteral("trigIn2GetButton"));
        sizePolicy3.setHeightForWidth(trigIn2GetButton->sizePolicy().hasHeightForWidth());
        trigIn2GetButton->setSizePolicy(sizePolicy3);
        trigIn2GetButton->setMinimumSize(QSize(70, 0));

        horizontalLayout_5->addWidget(trigIn2GetButton);

        trigIn2SetButton = new QPushButton(groupBox_TriggerInput2);
        trigIn2SetButton->setObjectName(QStringLiteral("trigIn2SetButton"));
        sizePolicy3.setHeightForWidth(trigIn2SetButton->sizePolicy().hasHeightForWidth());
        trigIn2SetButton->setSizePolicy(sizePolicy3);
        trigIn2SetButton->setMinimumSize(QSize(70, 0));

        horizontalLayout_5->addWidget(trigIn2SetButton);


        verticalLayout_30->addLayout(horizontalLayout_5);


        horizontalLayout_37->addLayout(verticalLayout_30);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_15);


        horizontalLayout->addWidget(groupBox_TriggerInput2);


        gridLayout_33->addLayout(horizontalLayout, 0, 0, 1, 1);

        groupBox_LEDDelayControls = new QGroupBox(groupBox_patternMode_globalSettings);
        groupBox_LEDDelayControls->setObjectName(QStringLiteral("groupBox_LEDDelayControls"));
        groupBox_LEDDelayControls->setGeometry(QRect(11, 389, 778, 181));
        sizePolicy8.setHeightForWidth(groupBox_LEDDelayControls->sizePolicy().hasHeightForWidth());
        groupBox_LEDDelayControls->setSizePolicy(sizePolicy8);
        groupBox_LEDDelayControls->setMinimumSize(QSize(0, 181));
        groupBox_LEDDelayControls->setMaximumSize(QSize(16777215, 181));
        groupBox_LEDDelayControls->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        horizontalLayout_43 = new QHBoxLayout(groupBox_LEDDelayControls);
        horizontalLayout_43->setSpacing(6);
        horizontalLayout_43->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_43->setObjectName(QStringLiteral("horizontalLayout_43"));
        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_43->addItem(horizontalSpacer_26);

        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        gridLayout_36 = new QGridLayout();
        gridLayout_36->setSpacing(6);
        gridLayout_36->setObjectName(QStringLiteral("gridLayout_36"));
        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_36->addItem(horizontalSpacer_25, 1, 6, 1, 1);

        label_GreenRisingEdge = new QLabel(groupBox_LEDDelayControls);
        label_GreenRisingEdge->setObjectName(QStringLiteral("label_GreenRisingEdge"));
        label_GreenRisingEdge->setMinimumSize(QSize(141, 0));
        label_GreenRisingEdge->setAutoFillBackground(false);
        label_GreenRisingEdge->setStyleSheet(QStringLiteral("QLabel{border:0px solid black}"));
        label_GreenRisingEdge->setLineWidth(0);
        label_GreenRisingEdge->setWordWrap(true);

        gridLayout_36->addWidget(label_GreenRisingEdge, 1, 4, 1, 1);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_36->addItem(horizontalSpacer_24, 1, 3, 1, 1);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_36->addItem(horizontalSpacer_28, 1, 0, 1, 1);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_36->addItem(horizontalSpacer_29, 1, 9, 1, 1);

        label_BlueFallingEdge = new QLabel(groupBox_LEDDelayControls);
        label_BlueFallingEdge->setObjectName(QStringLiteral("label_BlueFallingEdge"));
        label_BlueFallingEdge->setStyleSheet(QStringLiteral("QLabel{border:0px solid black}"));
        label_BlueFallingEdge->setWordWrap(true);

        gridLayout_36->addWidget(label_BlueFallingEdge, 3, 7, 1, 1);

        label_RedFallingEdge = new QLabel(groupBox_LEDDelayControls);
        label_RedFallingEdge->setObjectName(QStringLiteral("label_RedFallingEdge"));
        label_RedFallingEdge->setStyleSheet(QStringLiteral("QLabel{border:0px solid black}"));
        label_RedFallingEdge->setWordWrap(true);

        gridLayout_36->addWidget(label_RedFallingEdge, 3, 1, 1, 1);

        ledBlueRising_spinBox = new QSpinBox(groupBox_LEDDelayControls);
        ledBlueRising_spinBox->setObjectName(QStringLiteral("ledBlueRising_spinBox"));
        ledBlueRising_spinBox->setMaximumSize(QSize(51, 16777215));
        ledBlueRising_spinBox->setMinimum(-100);
        ledBlueRising_spinBox->setMaximum(20000);

        gridLayout_36->addWidget(ledBlueRising_spinBox, 1, 8, 1, 1);

        label_BlueRisingEdge = new QLabel(groupBox_LEDDelayControls);
        label_BlueRisingEdge->setObjectName(QStringLiteral("label_BlueRisingEdge"));
        label_BlueRisingEdge->setMinimumSize(QSize(131, 0));
        label_BlueRisingEdge->setStyleSheet(QStringLiteral("QLabel{border:0px solid black}"));
        label_BlueRisingEdge->setWordWrap(true);

        gridLayout_36->addWidget(label_BlueRisingEdge, 1, 7, 1, 1);

        ledGreenRising_spinBox = new QSpinBox(groupBox_LEDDelayControls);
        ledGreenRising_spinBox->setObjectName(QStringLiteral("ledGreenRising_spinBox"));
        ledGreenRising_spinBox->setMaximumSize(QSize(51, 16777215));
        ledGreenRising_spinBox->setMinimum(-100);
        ledGreenRising_spinBox->setMaximum(20000);

        gridLayout_36->addWidget(ledGreenRising_spinBox, 1, 5, 1, 1);

        ledRedRising_spinBox = new QSpinBox(groupBox_LEDDelayControls);
        ledRedRising_spinBox->setObjectName(QStringLiteral("ledRedRising_spinBox"));
        ledRedRising_spinBox->setMaximumSize(QSize(51, 16777215));
        ledRedRising_spinBox->setMinimum(-100);
        ledRedRising_spinBox->setMaximum(20000);

        gridLayout_36->addWidget(ledRedRising_spinBox, 1, 2, 1, 1);

        label_Red_RisingEdge = new QLabel(groupBox_LEDDelayControls);
        label_Red_RisingEdge->setObjectName(QStringLiteral("label_Red_RisingEdge"));
        label_Red_RisingEdge->setMinimumSize(QSize(141, 0));
        label_Red_RisingEdge->setMaximumSize(QSize(900, 16777215));
        label_Red_RisingEdge->setStyleSheet(QStringLiteral("QLabel{border:0px solid black}"));
        label_Red_RisingEdge->setWordWrap(true);

        gridLayout_36->addWidget(label_Red_RisingEdge, 1, 1, 1, 1);

        ledGreenFalling_spinBox = new QSpinBox(groupBox_LEDDelayControls);
        ledGreenFalling_spinBox->setObjectName(QStringLiteral("ledGreenFalling_spinBox"));
        ledGreenFalling_spinBox->setMaximumSize(QSize(51, 16777215));
        ledGreenFalling_spinBox->setMinimum(-100);
        ledGreenFalling_spinBox->setMaximum(20000);

        gridLayout_36->addWidget(ledGreenFalling_spinBox, 3, 5, 1, 1);

        label_GreenFallingEdge = new QLabel(groupBox_LEDDelayControls);
        label_GreenFallingEdge->setObjectName(QStringLiteral("label_GreenFallingEdge"));
        label_GreenFallingEdge->setMinimumSize(QSize(141, 0));
        label_GreenFallingEdge->setStyleSheet(QStringLiteral("QLabel{border:0px solid black}"));
        label_GreenFallingEdge->setWordWrap(true);

        gridLayout_36->addWidget(label_GreenFallingEdge, 3, 4, 1, 1);

        ledBlueFalling_spinBox = new QSpinBox(groupBox_LEDDelayControls);
        ledBlueFalling_spinBox->setObjectName(QStringLiteral("ledBlueFalling_spinBox"));
        ledBlueFalling_spinBox->setMinimum(-100);
        ledBlueFalling_spinBox->setMaximum(20000);

        gridLayout_36->addWidget(ledBlueFalling_spinBox, 3, 8, 1, 1);

        ledRedFalling_spinBox = new QSpinBox(groupBox_LEDDelayControls);
        ledRedFalling_spinBox->setObjectName(QStringLiteral("ledRedFalling_spinBox"));
        ledRedFalling_spinBox->setMaximumSize(QSize(51, 16777215));
        ledRedFalling_spinBox->setMinimum(-100);
        ledRedFalling_spinBox->setMaximum(20000);

        gridLayout_36->addWidget(ledRedFalling_spinBox, 3, 2, 1, 1);

        verticalSpacer_26 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_36->addItem(verticalSpacer_26, 0, 4, 1, 1);

        verticalSpacer_27 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_36->addItem(verticalSpacer_27, 2, 1, 1, 9);


        verticalLayout_34->addLayout(gridLayout_36);

        verticalSpacer_25 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_34->addItem(verticalSpacer_25);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QStringLiteral("horizontalLayout_42"));
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_42->addItem(horizontalSpacer_22);

        ledGetDelayButton = new QPushButton(groupBox_LEDDelayControls);
        ledGetDelayButton->setObjectName(QStringLiteral("ledGetDelayButton"));
        sizePolicy3.setHeightForWidth(ledGetDelayButton->sizePolicy().hasHeightForWidth());
        ledGetDelayButton->setSizePolicy(sizePolicy3);
        ledGetDelayButton->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_42->addWidget(ledGetDelayButton);

        ledSetDelayButton = new QPushButton(groupBox_LEDDelayControls);
        ledSetDelayButton->setObjectName(QStringLiteral("ledSetDelayButton"));
        sizePolicy3.setHeightForWidth(ledSetDelayButton->sizePolicy().hasHeightForWidth());
        ledSetDelayButton->setSizePolicy(sizePolicy3);

        horizontalLayout_42->addWidget(ledSetDelayButton);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_42->addItem(horizontalSpacer_23);


        verticalLayout_34->addLayout(horizontalLayout_42);


        horizontalLayout_43->addLayout(verticalLayout_34);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_43->addItem(horizontalSpacer_27);

        operatingModes_groupBox_2 = new QGroupBox(groupBox_patternMode_globalSettings);
        operatingModes_groupBox_2->setObjectName(QStringLiteral("operatingModes_groupBox_2"));
        operatingModes_groupBox_2->setGeometry(QRect(10, 20, 201, 121));
        sizePolicy3.setHeightForWidth(operatingModes_groupBox_2->sizePolicy().hasHeightForWidth());
        operatingModes_groupBox_2->setSizePolicy(sizePolicy3);
        operatingModes_groupBox_2->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        verticalLayout_51 = new QVBoxLayout(operatingModes_groupBox_2);
        verticalLayout_51->setSpacing(6);
        verticalLayout_51->setContentsMargins(11, 11, 11, 11);
        verticalLayout_51->setObjectName(QStringLiteral("verticalLayout_51"));
        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_51->addItem(verticalSpacer_7);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));
        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        apiVersionLabel_2 = new QLabel(operatingModes_groupBox_2);
        apiVersionLabel_2->setObjectName(QStringLiteral("apiVersionLabel_2"));
        apiVersionLabel_2->setMinimumSize(QSize(20, 0));
        apiVersionLabel_2->setFont(font1);
        apiVersionLabel_2->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        verticalLayout_28->addWidget(apiVersionLabel_2);

        apiVersionLabel_3 = new QLabel(operatingModes_groupBox_2);
        apiVersionLabel_3->setObjectName(QStringLiteral("apiVersionLabel_3"));
        apiVersionLabel_3->setMinimumSize(QSize(20, 0));
        apiVersionLabel_3->setFont(font1);
        apiVersionLabel_3->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        verticalLayout_28->addWidget(apiVersionLabel_3);


        horizontalLayout_35->addLayout(verticalLayout_28);

        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        startDmdBlock = new QComboBox(operatingModes_groupBox_2);
        startDmdBlock->setObjectName(QStringLiteral("startDmdBlock"));

        verticalLayout_29->addWidget(startDmdBlock);

        endDmdBlock = new QComboBox(operatingModes_groupBox_2);
        endDmdBlock->setObjectName(QStringLiteral("endDmdBlock"));

        verticalLayout_29->addWidget(endDmdBlock);


        horizontalLayout_35->addLayout(verticalLayout_29);


        verticalLayout_51->addLayout(horizontalLayout_35);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        dmdBlockGet = new QPushButton(operatingModes_groupBox_2);
        dmdBlockGet->setObjectName(QStringLiteral("dmdBlockGet"));

        horizontalLayout_28->addWidget(dmdBlockGet);

        dmdBlockSet = new QPushButton(operatingModes_groupBox_2);
        dmdBlockSet->setObjectName(QStringLiteral("dmdBlockSet"));

        horizontalLayout_28->addWidget(dmdBlockSet);


        verticalLayout_51->addLayout(horizontalLayout_28);

        groupBox_DMDIdle = new QGroupBox(groupBox_patternMode_globalSettings);
        groupBox_DMDIdle->setObjectName(QStringLiteral("groupBox_DMDIdle"));
        groupBox_DMDIdle->setGeometry(QRect(460, 20, 201, 121));
        groupBox_DMDIdle->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}\n"
""));
        groupBox_DMDIdle->setTitle(QStringLiteral("DMD Idle Mode (50/50 Sequence)"));
        pushButton_DMDSaverModeOn = new QPushButton(groupBox_DMDIdle);
        pushButton_DMDSaverModeOn->setObjectName(QStringLiteral("pushButton_DMDSaverModeOn"));
        pushButton_DMDSaverModeOn->setGeometry(QRect(10, 50, 80, 40));
        pushButton_DMDSaverModeOff = new QPushButton(groupBox_DMDIdle);
        pushButton_DMDSaverModeOff->setObjectName(QStringLiteral("pushButton_DMDSaverModeOff"));
        pushButton_DMDSaverModeOff->setGeometry(QRect(110, 50, 80, 40));
        groupBox_LEDPulseWidth = new QGroupBox(groupBox_patternMode_globalSettings);
        groupBox_LEDPulseWidth->setObjectName(QStringLiteral("groupBox_LEDPulseWidth"));
        groupBox_LEDPulseWidth->setGeometry(QRect(220, 20, 231, 121));
        groupBox_LEDPulseWidth->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}\n"
""));
        groupBox_LEDPulseWidth->setTitle(QStringLiteral("Minimum LED Pulse Width"));
        layoutWidget_4 = new QWidget(groupBox_LEDPulseWidth);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 20, 197, 101));
        verticalLayout_16 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label = new QLabel(layoutWidget_4);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        horizontalLayout_9->addWidget(label);

        ledPulseWidth = new QSpinBox(layoutWidget_4);
        ledPulseWidth->setObjectName(QStringLiteral("ledPulseWidth"));
        ledPulseWidth->setMaximum(999);

        horizontalLayout_9->addWidget(ledPulseWidth);


        verticalLayout_16->addLayout(horizontalLayout_9);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        ledPulseWidthGet = new QPushButton(layoutWidget_4);
        ledPulseWidthGet->setObjectName(QStringLiteral("ledPulseWidthGet"));

        horizontalLayout_32->addWidget(ledPulseWidthGet);

        ledPulseWidthSet = new QPushButton(layoutWidget_4);
        ledPulseWidthSet->setObjectName(QStringLiteral("ledPulseWidthSet"));

        horizontalLayout_32->addWidget(ledPulseWidthSet);


        verticalLayout_16->addLayout(horizontalLayout_32);


        gridLayout_32->addWidget(groupBox_patternMode_globalSettings, 0, 0, 1, 1);

        patternMode_stackedWidget->addWidget(patternSettingsPage);

        horizontalLayout_26->addWidget(patternMode_stackedWidget);


        gridLayout_11->addWidget(groupBox_PatternMode, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_patternMode, 0, 0, 1, 1);

        stackedWidget->addWidget(patternModePage);
        batchFilePage = new QWidget();
        batchFilePage->setObjectName(QStringLiteral("batchFilePage"));
        gridLayout_4 = new QGridLayout(batchFilePage);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(batchFilePage);
        peripheralsPage = new QWidget();
        peripheralsPage->setObjectName(QStringLiteral("peripheralsPage"));
        gridLayout_5 = new QGridLayout(peripheralsPage);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(peripheralsPage);
        firmwarePage = new QWidget();
        firmwarePage->setObjectName(QStringLiteral("firmwarePage"));
        gridLayout_6 = new QGridLayout(firmwarePage);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(firmwarePage);

        horizontalLayout_25->addWidget(stackedWidget);


        gridLayout->addLayout(horizontalLayout_25, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);
        EVM_Picture_stackedWidget->setCurrentIndex(0);
        onlineResources_stackedWidget->setCurrentIndex(1);
        patternMode_stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_info->setText(QApplication::translate("MainWindow", "Information", nullptr));
        pushButton_systemControls->setText(QApplication::translate("MainWindow", "System \n"
"Settings", nullptr));
        pushButton_patternMode->setText(QApplication::translate("MainWindow", "Pattern \n"
" Mode", nullptr));
        pushButton_LEDDriver->setText(QApplication::translate("MainWindow", "LED Driver", nullptr));
        label_TILogo->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "System Controls", nullptr));
        dummyConnection->setText(QApplication::translate("MainWindow", "Virtual Connection", nullptr));
        powerOn_radioButton->setText(QApplication::translate("MainWindow", "Normal", nullptr));
        standBy_radioButton->setText(QApplication::translate("MainWindow", "Standby", nullptr));
        resetDMD_Button->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        groupBox_firmware->setTitle(QApplication::translate("MainWindow", "Firmware", nullptr));
        label_version->setText(QApplication::translate("MainWindow", "Version:", nullptr));
        label_Tag->setText(QApplication::translate("MainWindow", "Tag : ", nullptr));
        apiVersionLabel->setText(QApplication::translate("MainWindow", "xx.xx.xx", nullptr));
        firmwareTag_label->setText(QApplication::translate("MainWindow", "xxxx", nullptr));
        groupBox_ChipSetType->setTitle(QApplication::translate("MainWindow", "Chipset Type", nullptr));
        pDMD_radioButton->setText(QApplication::translate("MainWindow", "DLP6500", nullptr));
        operatingModes_groupBox->setTitle(QApplication::translate("MainWindow", "Operating Mode", nullptr));
        patternMode_radioButton->setText(QApplication::translate("MainWindow", "Pre-stored Pattern Mode", nullptr));
        patternMemory_radioButton->setText(QApplication::translate("MainWindow", "Pattern On-The-Fly Mode", nullptr));
        status_groupBox->setTitle(QApplication::translate("MainWindow", "Status", nullptr));
        internalMemTest_checkBox->setText(QApplication::translate("MainWindow", "Internal Memory Test Passed", nullptr));
        incompatibleASICorDMD_checkBox->setText(QApplication::translate("MainWindow", "Controller/DMD Incompatible", nullptr));
        slaveReady_checkBox->setText(QApplication::translate("MainWindow", "Slave Present and Ready (DLP9000)", nullptr));
        internalInit_checkBox->setText(QApplication::translate("MainWindow", "Internal Initialization Complete ", nullptr));
        DMDResetWaveformControllerErr_checkBox->setText(QApplication::translate("MainWindow", "DMD Reset Waveform Controller Error ", nullptr));
        forcedSwapErr_checkBox->setText(QApplication::translate("MainWindow", "Forced Swap Error ", nullptr));
        seqAbortStatus_checkBox->setText(QApplication::translate("MainWindow", "Sequencer Abort Status Flag Error", nullptr));
        seqErr_checkBox->setText(QApplication::translate("MainWindow", "Sequencer Error ", nullptr));
        DMDParkStatus_checkBox->setText(QApplication::translate("MainWindow", "DMD Micromirrors Parked", nullptr));
        sequencerRunState_checkBox->setText(QApplication::translate("MainWindow", "Sequencer Running", nullptr));
        videoState_checkBox->setText(QApplication::translate("MainWindow", "Video Running", nullptr));
        extSourceLocked_checkBox->setText(QApplication::translate("MainWindow", "Locked to External Source", nullptr));
        groupBox_EVMImage->setTitle(QApplication::translate("MainWindow", "EVM Information ", nullptr));
        label_evm6500->setText(QString());
        label_evm9000->setText(QString());
        onlineResources_groupBox->setTitle(QApplication::translate("MainWindow", "Online Resources", nullptr));
        label_6500ToolFolder->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.ti.com/tool/dlplcr6500evm\"><span style=\" text-decoration: underline; color:#0000ff;\">LightCrafter 6500 Tool Folder</span></a></p></body></html>", nullptr));
        label_6500UserGuide->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.ti.com/lit/dlpu028\"><span style=\" text-decoration: underline; color:#0000ff;\">LightCrafter 6500 Users Guide</span></a></p></body></html>", nullptr));
        label_6500ControllerDataSheet->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.ti.com/lit/dlps037\"><span style=\" text-decoration: underline; color:#0000ff;\">DLPC900 Controller Datasheet </span></a></p></body></html>", nullptr));
        label_6500DMDDataSheet->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.ti.com/lit/dlps053\"><span style=\" text-decoration: underline; color:#0000ff;\">DLP6500FYE DMD Datasheet </span></a></p></body></html>", nullptr));
        label_DLP->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.ti.com/lsds/ti/analog/dlp/solutions-services.page\"><span style=\" text-decoration: underline; color:#0000ff;\">TI DLP Solutions &amp; Services</span></a></p></body></html>", nullptr));
        ti_e2e_pushButton->setText(QString());
        onlineResources_groupBox_2->setTitle(QApplication::translate("MainWindow", "Online Resources", nullptr));
        label_900ToolFolder->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.ti.com/tool/dlplcr9000evm\"><span style=\" text-decoration: underline; color:#0000ff;\">LightCrafter 9000 Tool Folder</span></a></p></body></html>", nullptr));
        label_9000UserGuide->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.ti.com/lit/dlpu028\"><span style=\" text-decoration: underline; color:#0000ff;\">LightCrafter 9000 Users Guide</span></a></p></body></html>", nullptr));
        label_ControllerDataSheet->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.ti.com/lit/dlps037\"><span style=\" text-decoration: underline; color:#0000ff;\">DLPC900 Controller Datasheet </span></a></p></body></html>", nullptr));
        label_9000DMDDataSheet->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.ti.com/lit/dlps036\"><span style=\" text-decoration: underline; color:#0000ff;\">DLP9000 DMD Datasheet </span></a></p></body></html>", nullptr));
        label_9000DLP->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.ti.com/lsds/ti/analog/dlp/solutions-services.page\"><span style=\" text-decoration: underline; color:#0000ff;\">TI DLP Solutions &amp; Services</span></a></p></body></html>", nullptr));
        ti_e2e_pushButton_2->setText(QString());
        label_QuickStart->setText(QApplication::translate("MainWindow", "Quick Start:", nullptr));
        label_A->setText(QString());
        label_ConnectEVMToPower->setText(QApplication::translate("MainWindow", "Connect the EVM to Power", nullptr));
        label_B->setText(QString());
        label_ConnectEVMToPC->setText(QApplication::translate("MainWindow", "Connect the EVM to your PC with USB", nullptr));
        dlp_pushButton->setText(QString());
        label_DLPText2->setText(QApplication::translate("MainWindow", "Start innovating with high resolution, high speed DLP technology!", nullptr));
        label_DLPText1->setText(QApplication::translate("MainWindow", "                   Scan more.   Design brighter.   Build bigger.", nullptr));
        groupBox_SystemSettings->setTitle(QApplication::translate("MainWindow", "System Settings", nullptr));
        groupBox_ImageOrientation->setTitle(QApplication::translate("MainWindow", "Image Orientation", nullptr));
        setFlipPushButton->setText(QApplication::translate("MainWindow", "Set", nullptr));
        ShortAxisFlipCheckBox->setText(QApplication::translate("MainWindow", "North/South Flip", nullptr));
        LongAxisFlipCheckBox->setText(QApplication::translate("MainWindow", "East/West Flip", nullptr));
        getFlipPushButton->setText(QApplication::translate("MainWindow", "Get", nullptr));
        groupBox_LEDControl->setTitle(QApplication::translate("MainWindow", "LED Control", nullptr));
        GetLEDpushButton->setText(QApplication::translate("MainWindow", "Get", nullptr));
        SetLEDpushButton->setText(QApplication::translate("MainWindow", "Set", nullptr));
        groupBox_LEDSelection->setTitle(QApplication::translate("MainWindow", "LED Selection", nullptr));
        radioButton_ColorDisplayAuto->setText(QApplication::translate("MainWindow", "Automatic", nullptr));
        radioButton_ColorDisplayManual->setText(QApplication::translate("MainWindow", "Manual", nullptr));
        RedCheckBox->setText(QApplication::translate("MainWindow", "Red", nullptr));
        GreenCheckBox->setText(QApplication::translate("MainWindow", "Green", nullptr));
        BlueCheckBox->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        groupBox_LEDCurrent->setTitle(QApplication::translate("MainWindow", "LED Current(0-255)", nullptr));
        RedLEDCurrent->setText(QApplication::translate("MainWindow", "0", nullptr));
        BlueLEDCurrent->setText(QApplication::translate("MainWindow", "0", nullptr));
        GreenLEDCurrent->setText(QApplication::translate("MainWindow", "0", nullptr));
        LedPwmInvert_checkBox->setText(QApplication::translate("MainWindow", "Invert PWM", nullptr));
        label_Red->setText(QApplication::translate("MainWindow", "Red", nullptr));
        label_Blue->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        label_Green->setText(QApplication::translate("MainWindow", "Green", nullptr));
        groupBox_OpticalInvert->setTitle(QApplication::translate("MainWindow", "Optical Invert", nullptr));
        patternDisplayInvertData_checkBox->setText(QApplication::translate("MainWindow", "Pattern Display Invert Data", nullptr));
        getPatternDisplayInvertData_button->setText(QApplication::translate("MainWindow", "Get", nullptr));
        setPatternDisplayInvertData_button->setText(QApplication::translate("MainWindow", "Set", nullptr));
        groupBox_LEDDriver->setTitle(QApplication::translate("MainWindow", "LED Driver", nullptr));
        groupBox_LEDDriverStatus->setTitle(QApplication::translate("MainWindow", "Status", nullptr));
        label_LEDDriverStatus->setText(QApplication::translate("MainWindow", "Light Engine Disconnected", nullptr));
        USBDevicePath->setText(QApplication::translate("MainWindow", "USB Device path", nullptr));
        label_ReadBuffer->setText(QApplication::translate("MainWindow", "Read Buffer", nullptr));
        pushButton_RestartLEDDriver->setText(QApplication::translate("MainWindow", "Restart LED Driver", nullptr));
        checkBox_InternalInitialization->setText(QApplication::translate("MainWindow", "Internal Initialization", nullptr));
        checkBox_LEDTempOK->setText(QApplication::translate("MainWindow", "LED Temp OK", nullptr));
        checkBox_DMDTempOK->setText(QApplication::translate("MainWindow", "DMD Temp OK", nullptr));
        checkBox_BoardTempOK->setText(QApplication::translate("MainWindow", "Board Temp OK", nullptr));
        checkBox_HardwareOK->setText(QApplication::translate("MainWindow", "Hardware OK", nullptr));
        checkBox_IntensityCalOK->setText(QApplication::translate("MainWindow", "Intensity Calibration OK", nullptr));
        checkBox_WriteProtection->setText(QApplication::translate("MainWindow", "Write Protection", nullptr));
        checkBox_IntensityModInstall->setText(QApplication::translate("MainWindow", "Intensity Modul Installed", nullptr));
        label_DMDTempMax->setText(QApplication::translate("MainWindow", "DMD Temp Max", nullptr));
        label_LEDTempMax->setText(QApplication::translate("MainWindow", "LED Temp Max", nullptr));
        label_BoardTempMax->setText(QApplication::translate("MainWindow", "Board Temp Max", nullptr));
        label_LEDCurrentMax->setText(QApplication::translate("MainWindow", "LED Current Max", nullptr));
        label_IntensityOffset->setText(QApplication::translate("MainWindow", "Intensity Offset", nullptr));
        label_IntensityGain->setText(QApplication::translate("MainWindow", "Intensity Gain", nullptr));
        Label_DMDTemp->setText(QApplication::translate("MainWindow", "DMD Temp [\302\260C]", nullptr));
        label_LEDTemp->setText(QApplication::translate("MainWindow", "LED Temp [\302\260C]", nullptr));
        label_BoardTemp->setText(QApplication::translate("MainWindow", "Board Temp [\302\260C]", nullptr));
        label_LEDVoltage->setText(QApplication::translate("MainWindow", "<html><head/><body><p>LED Voltage [V]</p></body></html>", nullptr));
        label_LEDCurrent->setText(QApplication::translate("MainWindow", "LED Current [mA]", nullptr));
        label_CycleTime->setText(QApplication::translate("MainWindow", "Cycle Time", nullptr));
        label_IntensityVoltage->setText(QApplication::translate("MainWindow", "Intensity Voltage [mV]", nullptr));
        label_Intensity->setText(QApplication::translate("MainWindow", "Intensity [uW/cm2]", nullptr));
        label_LEDSerial->setText(QApplication::translate("MainWindow", "LED Serial", nullptr));
        label_LESerial->setText(QApplication::translate("MainWindow", "Light Engine Serial", nullptr));
        label_PCBFanSpeed->setText(QApplication::translate("MainWindow", "PCB FAN Speed [1/min]", nullptr));
        label_DMDFanSpeed->setText(QApplication::translate("MainWindow", "DMD FAN Speed [1/min]", nullptr));
        label_LEDFanSpeed->setText(QApplication::translate("MainWindow", "LED FAN Speed [1/min]", nullptr));
        label_LEDCurrent2->setText(QApplication::translate("MainWindow", "LED Current [mA]", nullptr));
        pushButton_SetLEDCurrent->setText(QApplication::translate("MainWindow", "Set LED Current", nullptr));
        pushButton_LEDPWMON_OFF->setText(QApplication::translate("MainWindow", "LED PWM OFF", nullptr));
        label_Intensity2->setText(QApplication::translate("MainWindow", "Intensity uW/cm2", nullptr));
        pushButton_SetIntensity->setText(QApplication::translate("MainWindow", "Set Intensity", nullptr));
        checkBox_IntensityRegEnable->setText(QApplication::translate("MainWindow", "Intensity Reg. Enable?", nullptr));
        pushButton_EnableIntensityReg->setText(QApplication::translate("MainWindow", "Enable Intensity Regulation", nullptr));
        pushButton_ExTrigger->setText(QApplication::translate("MainWindow", "EXT Trigger", nullptr));
        pushButton_SwTrigger->setText(QApplication::translate("MainWindow", "SW Trigger", nullptr));
        pushButton_ConnectLED->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        groupBox_PatternMode->setTitle(QApplication::translate("MainWindow", "Pattern Mode", nullptr));
        pushButton_patternControls->setText(QApplication::translate("MainWindow", "Pattern \n"
" Design", nullptr));
        pushButton_globalSettings->setText(QApplication::translate("MainWindow", "Pattern \n"
" Settings", nullptr));
        groupBox_Menu->setTitle(QApplication::translate("MainWindow", "Menu", nullptr));
#ifndef QT_NO_TOOLTIP
        saveButton_patternSettings->setToolTip(QApplication::translate("MainWindow", "Save settings to a file", nullptr));
#endif // QT_NO_TOOLTIP
        saveButton_patternSettings->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_TOOLTIP
        loadButton_patternSettings->setToolTip(QApplication::translate("MainWindow", "Load settings from a file", nullptr));
#endif // QT_NO_TOOLTIP
        loadButton_patternSettings->setText(QApplication::translate("MainWindow", "Load", nullptr));
#ifndef QT_NO_TOOLTIP
        addPatternsButton->setToolTip(QApplication::translate("MainWindow", "Add Pattern", nullptr));
#endif // QT_NO_TOOLTIP
        addPatternsButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        removePatternsButton->setToolTip(QApplication::translate("MainWindow", "Delete Pattern", nullptr));
#endif // QT_NO_TOOLTIP
        removePatternsButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        selectAllButton->setToolTip(QApplication::translate("MainWindow", "Select All Patterns", nullptr));
#endif // QT_NO_TOOLTIP
        selectAllButton->setText(QString());
        label_Zoom->setText(QApplication::translate("MainWindow", "Zoom", nullptr));
        groupBox_PatternImage->setTitle(QString());
        ptnSetting_groupBox->setTitle(QApplication::translate("MainWindow", "Pattern -", nullptr));
        groupBox_BitInfo->setTitle(QApplication::translate("MainWindow", "Bit Information", nullptr));
        bitDepth_ComboBox->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        bitDepth_ComboBox->setItemText(1, QApplication::translate("MainWindow", "2", nullptr));
        bitDepth_ComboBox->setItemText(2, QApplication::translate("MainWindow", "3", nullptr));
        bitDepth_ComboBox->setItemText(3, QApplication::translate("MainWindow", "4", nullptr));
        bitDepth_ComboBox->setItemText(4, QApplication::translate("MainWindow", "5", nullptr));
        bitDepth_ComboBox->setItemText(5, QApplication::translate("MainWindow", "6", nullptr));
        bitDepth_ComboBox->setItemText(6, QApplication::translate("MainWindow", "7", nullptr));
        bitDepth_ComboBox->setItemText(7, QApplication::translate("MainWindow", "8", nullptr));

        bitDepth_ComboBox->setCurrentText(QApplication::translate("MainWindow", "1", nullptr));
        label_Depth->setText(QApplication::translate("MainWindow", "Depth", nullptr));
        startPos_label->setText(QApplication::translate("MainWindow", "Start Bit", nullptr));
        startPos_ComboBox->setItemText(0, QApplication::translate("MainWindow", "G0", nullptr));
        startPos_ComboBox->setItemText(1, QApplication::translate("MainWindow", "G1", nullptr));
        startPos_ComboBox->setItemText(2, QApplication::translate("MainWindow", "G2", nullptr));
        startPos_ComboBox->setItemText(3, QApplication::translate("MainWindow", "G3", nullptr));
        startPos_ComboBox->setItemText(4, QApplication::translate("MainWindow", "G4", nullptr));
        startPos_ComboBox->setItemText(5, QApplication::translate("MainWindow", "G5", nullptr));
        startPos_ComboBox->setItemText(6, QApplication::translate("MainWindow", "G6", nullptr));
        startPos_ComboBox->setItemText(7, QApplication::translate("MainWindow", "G7", nullptr));
        startPos_ComboBox->setItemText(8, QApplication::translate("MainWindow", "R0", nullptr));
        startPos_ComboBox->setItemText(9, QApplication::translate("MainWindow", "R1", nullptr));
        startPos_ComboBox->setItemText(10, QApplication::translate("MainWindow", "R2", nullptr));
        startPos_ComboBox->setItemText(11, QApplication::translate("MainWindow", "R3", nullptr));
        startPos_ComboBox->setItemText(12, QApplication::translate("MainWindow", "R4", nullptr));
        startPos_ComboBox->setItemText(13, QApplication::translate("MainWindow", "R5", nullptr));
        startPos_ComboBox->setItemText(14, QApplication::translate("MainWindow", "R6", nullptr));
        startPos_ComboBox->setItemText(15, QApplication::translate("MainWindow", "R7", nullptr));
        startPos_ComboBox->setItemText(16, QApplication::translate("MainWindow", "B0", nullptr));
        startPos_ComboBox->setItemText(17, QApplication::translate("MainWindow", "B1", nullptr));
        startPos_ComboBox->setItemText(18, QApplication::translate("MainWindow", "B2", nullptr));
        startPos_ComboBox->setItemText(19, QApplication::translate("MainWindow", "B3", nullptr));
        startPos_ComboBox->setItemText(20, QApplication::translate("MainWindow", "B4", nullptr));
        startPos_ComboBox->setItemText(21, QApplication::translate("MainWindow", "B5", nullptr));
        startPos_ComboBox->setItemText(22, QApplication::translate("MainWindow", "B6", nullptr));
        startPos_ComboBox->setItemText(23, QApplication::translate("MainWindow", "B7", nullptr));

        groupBox_Timing->setTitle(QApplication::translate("MainWindow", "Timing (us)", nullptr));
        exposure_lineEdit->setText(QString());
        label_Exposure->setText(QApplication::translate("MainWindow", "Exposure", nullptr));
        label_DarkTime->setText(QApplication::translate("MainWindow", "Dark Time", nullptr));
        groupBox_Color->setTitle(QApplication::translate("MainWindow", "Color", nullptr));
        color_ComboBox->setItemText(0, QApplication::translate("MainWindow", "RED", nullptr));
        color_ComboBox->setItemText(1, QApplication::translate("MainWindow", "GREEN", nullptr));
        color_ComboBox->setItemText(2, QApplication::translate("MainWindow", "YELLOW", nullptr));
        color_ComboBox->setItemText(3, QApplication::translate("MainWindow", "BLUE", nullptr));
        color_ComboBox->setItemText(4, QApplication::translate("MainWindow", "MAGENTA", nullptr));
        color_ComboBox->setItemText(5, QApplication::translate("MainWindow", "CYAN", nullptr));
        color_ComboBox->setItemText(6, QApplication::translate("MainWindow", "WHITE", nullptr));

        triggerIn_checkBox->setText(QApplication::translate("MainWindow", "Trigger Input", nullptr));
        label_TrigOut1->setText(QApplication::translate("MainWindow", "      Trigger Out 1", nullptr));
        triggerOut2_checkBox->setText(QApplication::translate("MainWindow", "Trigger Out 2", nullptr));
        groupBox_UpdateLUT->setTitle(QString());
        updateLUT_Button->setText(QApplication::translate("MainWindow", "Update\n"
" LUT", nullptr));
        groupBox_PlayRepeat->setTitle(QString());
        playOnce_radioButton->setText(QApplication::translate("MainWindow", "Play Once", nullptr));
        repeat_radioButton->setText(QApplication::translate("MainWindow", "Repeat", nullptr));
        groupBox_StartPauseStop->setTitle(QString());
        startPatSequence_Button->setText(QApplication::translate("MainWindow", "Start  ", nullptr));
        pausePatSequence_Button->setText(QApplication::translate("MainWindow", "Pause", nullptr));
        stopPatSequence_Button->setText(QApplication::translate("MainWindow", "Stop  ", nullptr));
        groupBox_TriggerControl->setTitle(QApplication::translate("MainWindow", "Trigger Control", nullptr));
        groupBox_TriggerOut1->setTitle(QApplication::translate("MainWindow", "Trigger Out 1 (us)", nullptr));
        label_TrigOut1_FallingEdge->setText(QApplication::translate("MainWindow", "Falling Edge Delay", nullptr));
        label_TrigOut1_RisingEdge->setText(QApplication::translate("MainWindow", "Rising Edge Delay", nullptr));
        invertTrigOut1_checkBox->setText(QApplication::translate("MainWindow", "Invert", nullptr));
        trigOut1GetButton->setText(QApplication::translate("MainWindow", "Get", nullptr));
        trigOut1SetButton->setText(QApplication::translate("MainWindow", "Set", nullptr));
        groupBox_TriggerOut->setTitle(QApplication::translate("MainWindow", "Trigger Out 2 (us)", nullptr));
        label_TrigOut2_RisingEdge->setText(QApplication::translate("MainWindow", "Rising Edge Delay", nullptr));
        label_TrigOut2_FallingEdge->setText(QApplication::translate("MainWindow", "Falling Edge Delay", nullptr));
        invertTrigOut2_checkBox->setText(QApplication::translate("MainWindow", "Invert", nullptr));
        trigOut2GetButton->setText(QApplication::translate("MainWindow", "Get", nullptr));
        trigOut2SetButton->setText(QApplication::translate("MainWindow", "Set", nullptr));
        groupBox_TriggerInput1->setTitle(QApplication::translate("MainWindow", "Trigger In 1 (us)", nullptr));
        label_TrigIn1_Delay->setText(QApplication::translate("MainWindow", "Delay  (us)", nullptr));
        invertTrigIn1_checkBox->setText(QApplication::translate("MainWindow", "Invert", nullptr));
        trigIn1GetButton->setText(QApplication::translate("MainWindow", "Get", nullptr));
        trigIn1SetButton->setText(QApplication::translate("MainWindow", "Set", nullptr));
        groupBox_TriggerInput2->setTitle(QApplication::translate("MainWindow", "Trigger In 2", nullptr));
        invertTrigIn2_checkBox->setText(QApplication::translate("MainWindow", "Invert", nullptr));
        trigIn2GetButton->setText(QApplication::translate("MainWindow", "Get", nullptr));
        trigIn2SetButton->setText(QApplication::translate("MainWindow", "Set", nullptr));
        groupBox_LEDDelayControls->setTitle(QApplication::translate("MainWindow", "LED Delay Controls (us)", nullptr));
        label_GreenRisingEdge->setText(QApplication::translate("MainWindow", "Green LED Rising Edge Delay", nullptr));
        label_BlueFallingEdge->setText(QApplication::translate("MainWindow", "Blue LED Falling Edge Delay", nullptr));
        label_RedFallingEdge->setText(QApplication::translate("MainWindow", "Red LED Falling Edge Delay", nullptr));
        label_BlueRisingEdge->setText(QApplication::translate("MainWindow", "Blue LED Rising Edge Delay", nullptr));
        label_Red_RisingEdge->setText(QApplication::translate("MainWindow", "Red LED Rising Edge Delay", nullptr));
        label_GreenFallingEdge->setText(QApplication::translate("MainWindow", "Green LED Falling Edge Delay", nullptr));
        ledGetDelayButton->setText(QApplication::translate("MainWindow", "Get", nullptr));
        ledSetDelayButton->setText(QApplication::translate("MainWindow", "Set", nullptr));
        operatingModes_groupBox_2->setTitle(QApplication::translate("MainWindow", "DMD Active Blocks", nullptr));
        apiVersionLabel_2->setText(QApplication::translate("MainWindow", "Start Block", nullptr));
        apiVersionLabel_3->setText(QApplication::translate("MainWindow", "End Block", nullptr));
        dmdBlockGet->setText(QApplication::translate("MainWindow", "Get", nullptr));
        dmdBlockSet->setText(QApplication::translate("MainWindow", "Set", nullptr));
        pushButton_DMDSaverModeOn->setText(QApplication::translate("MainWindow", "Enable", nullptr));
        pushButton_DMDSaverModeOff->setText(QApplication::translate("MainWindow", "Disable", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_LEDPulseWidth->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Minimum LED pulse width supported by the LED driver.</p><p>The pattern sequence will not generate any pulse less then this value.</p><p>Pattern sequence setting may fail if such sequence is not possible.</p><p>Use zero for no LED modulation.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "Pulse Width (us)", nullptr));
        ledPulseWidthGet->setText(QApplication::translate("MainWindow", "Get", nullptr));
        ledPulseWidthSet->setText(QApplication::translate("MainWindow", "Set", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
