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
#include <QtWidgets/QSpacerItem>
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
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_evm6500;
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
    QGroupBox *groupBox_PatternImage;
    QHBoxLayout *horizontalLayout_46;
    QGroupBox *ptnSetting_groupBox;
    QVBoxLayout *verticalLayout_38;
    QLabel *PatternIndex;
    QGroupBox *groupBox_Timing;
    QLineEdit *exposure_lineEdit;
    QLabel *label_Exposure;
    QLabel *label_DarkTime;
    QLineEdit *darkPeriod_lineEdit;
    QSpacerItem *verticalSpacer_32;
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
    QSpacerItem *verticalSpacer_28;
    QGroupBox *groupBox_StartPauseStop;
    QVBoxLayout *verticalLayout_6;
    QPushButton *startPatSequence_Button;
    QPushButton *pausePatSequence_Button;
    QPushButton *stopPatSequence_Button;
    QSpacerItem *verticalSpacer_31;
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
        scrollArea->setGeometry(QRect(0, 0, 1351, 711));
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1349, 709));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        horizontalLayout_24->setSizeConstraint(QLayout::SetNoConstraint);
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
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/images/pattern.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_patternMode->setIcon(icon1);
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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/images/LEDDriver_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_LEDDriver->setIcon(icon2);
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
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/Icons/Led_R.png"), QSize(), QIcon::Normal, QIcon::Off);
        connectButton->setIcon(icon3);

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
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_9, 0, 1, 1, 1);

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
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/TI_E2E_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ti_e2e_pushButton->setIcon(icon4);
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
        ti_e2e_pushButton_2->setIcon(icon4);
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
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/Icons/dlp_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        dlp_pushButton->setIcon(icon5);
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
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/Icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton_patternSettings->setIcon(icon6);

        horizontalLayout_44->addWidget(saveButton_patternSettings);

        loadButton_patternSettings = new QPushButton(groupBox_Menu);
        loadButton_patternSettings->setObjectName(QStringLiteral("loadButton_patternSettings"));
        loadButton_patternSettings->setMinimumSize(QSize(70, 35));
        loadButton_patternSettings->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"}"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/Icons/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        loadButton_patternSettings->setIcon(icon7);

        horizontalLayout_44->addWidget(loadButton_patternSettings);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_44->addItem(horizontalSpacer_33);

        addPatternsButton = new QPushButton(groupBox_Menu);
        addPatternsButton->setObjectName(QStringLiteral("addPatternsButton"));
        sizePolicy3.setHeightForWidth(addPatternsButton->sizePolicy().hasHeightForWidth());
        addPatternsButton->setSizePolicy(sizePolicy3);
        addPatternsButton->setMinimumSize(QSize(40, 35));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/Icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addPatternsButton->setIcon(icon8);

        horizontalLayout_44->addWidget(addPatternsButton);

        removePatternsButton = new QPushButton(groupBox_Menu);
        removePatternsButton->setObjectName(QStringLiteral("removePatternsButton"));
        removePatternsButton->setEnabled(false);
        sizePolicy3.setHeightForWidth(removePatternsButton->sizePolicy().hasHeightForWidth());
        removePatternsButton->setSizePolicy(sizePolicy3);
        removePatternsButton->setMinimumSize(QSize(40, 35));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/Icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        removePatternsButton->setIcon(icon9);

        horizontalLayout_44->addWidget(removePatternsButton);

        selectAllButton = new QPushButton(groupBox_Menu);
        selectAllButton->setObjectName(QStringLiteral("selectAllButton"));
        selectAllButton->setEnabled(false);
        sizePolicy3.setHeightForWidth(selectAllButton->sizePolicy().hasHeightForWidth());
        selectAllButton->setSizePolicy(sizePolicy3);
        selectAllButton->setMinimumSize(QSize(40, 35));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/Icons/select.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectAllButton->setIcon(icon10);

        horizontalLayout_44->addWidget(selectAllButton);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_44->addItem(horizontalSpacer_32);


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
        PatternIndex = new QLabel(ptnSetting_groupBox);
        PatternIndex->setObjectName(QStringLiteral("PatternIndex"));
        PatternIndex->setMinimumSize(QSize(0, 30));
        QFont font13;
        font13.setFamily(QStringLiteral("Arial"));
        font13.setBold(true);
        font13.setWeight(75);
        PatternIndex->setFont(font13);
        PatternIndex->setStyleSheet(QLatin1String("QLabel{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));

        verticalLayout_38->addWidget(PatternIndex);

        groupBox_Timing = new QGroupBox(ptnSetting_groupBox);
        groupBox_Timing->setObjectName(QStringLiteral("groupBox_Timing"));
        sizePolicy8.setHeightForWidth(groupBox_Timing->sizePolicy().hasHeightForWidth());
        groupBox_Timing->setSizePolicy(sizePolicy8);
        groupBox_Timing->setMinimumSize(QSize(0, 150));
        exposure_lineEdit = new QLineEdit(groupBox_Timing);
        exposure_lineEdit->setObjectName(QStringLiteral("exposure_lineEdit"));
        exposure_lineEdit->setGeometry(QRect(13, 45, 90, 30));
        label_Exposure = new QLabel(groupBox_Timing);
        label_Exposure->setObjectName(QStringLiteral("label_Exposure"));
        label_Exposure->setGeometry(QRect(30, 20, 61, 21));
        label_Exposure->setFont(font13);
        label_Exposure->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        label_Exposure->setWordWrap(true);
        label_DarkTime = new QLabel(groupBox_Timing);
        label_DarkTime->setObjectName(QStringLiteral("label_DarkTime"));
        label_DarkTime->setGeometry(QRect(30, 82, 61, 21));
        label_DarkTime->setFont(font13);
        label_DarkTime->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        darkPeriod_lineEdit = new QLineEdit(groupBox_Timing);
        darkPeriod_lineEdit->setObjectName(QStringLiteral("darkPeriod_lineEdit"));
        darkPeriod_lineEdit->setGeometry(QRect(13, 110, 90, 30));

        verticalLayout_38->addWidget(groupBox_Timing);

        verticalSpacer_32 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_38->addItem(verticalSpacer_32);

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
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 655, 480));
        waveFormArea->setWidget(scrollAreaWidgetContents_4);

        horizontalLayout_46->addWidget(waveFormArea);


        verticalLayout_37->addWidget(groupBox_PatternImage);


        horizontalLayout_27->addLayout(verticalLayout_37);

        verticalLayout_36 = new QVBoxLayout();
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        verticalSpacer_29 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_36->addItem(verticalSpacer_29);

        verticalSpacer_28 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_36->addItem(verticalSpacer_28);

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
        startPatSequence_Button->setMinimumSize(QSize(81, 60));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/prefix1/Icons/my_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        startPatSequence_Button->setIcon(icon11);

        verticalLayout_6->addWidget(startPatSequence_Button);

        pausePatSequence_Button = new QPushButton(groupBox_StartPauseStop);
        pausePatSequence_Button->setObjectName(QStringLiteral("pausePatSequence_Button"));
        sizePolicy3.setHeightForWidth(pausePatSequence_Button->sizePolicy().hasHeightForWidth());
        pausePatSequence_Button->setSizePolicy(sizePolicy3);
        pausePatSequence_Button->setMinimumSize(QSize(81, 60));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/prefix1/Icons/my_pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pausePatSequence_Button->setIcon(icon12);

        verticalLayout_6->addWidget(pausePatSequence_Button);

        stopPatSequence_Button = new QPushButton(groupBox_StartPauseStop);
        stopPatSequence_Button->setObjectName(QStringLiteral("stopPatSequence_Button"));
        sizePolicy3.setHeightForWidth(stopPatSequence_Button->sizePolicy().hasHeightForWidth());
        stopPatSequence_Button->setSizePolicy(sizePolicy3);
        stopPatSequence_Button->setMinimumSize(QSize(81, 60));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/new/prefix1/Icons/my_stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopPatSequence_Button->setIcon(icon13);

        verticalLayout_6->addWidget(stopPatSequence_Button);


        verticalLayout_36->addWidget(groupBox_StartPauseStop);

        verticalSpacer_31 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_36->addItem(verticalSpacer_31);


        horizontalLayout_27->addLayout(verticalLayout_36);


        gridLayout_31->addWidget(groupBox_patternMode_patternControls, 0, 0, 1, 1);

        patternMode_stackedWidget->addWidget(patternDesignPage);

        horizontalLayout_26->addWidget(patternMode_stackedWidget);


        gridLayout_11->addWidget(groupBox_PatternMode, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_patternMode, 0, 0, 1, 1);

        stackedWidget->addWidget(patternModePage);

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
        patternMode_stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_info->setText(QApplication::translate("MainWindow", "Information", nullptr));
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
        groupBox_PatternImage->setTitle(QString());
        ptnSetting_groupBox->setTitle(QApplication::translate("MainWindow", "Pattern -", nullptr));
        PatternIndex->setText(QString());
        groupBox_Timing->setTitle(QApplication::translate("MainWindow", "Timing (us)", nullptr));
        exposure_lineEdit->setText(QString());
        label_Exposure->setText(QApplication::translate("MainWindow", "Exposure", nullptr));
        label_DarkTime->setText(QApplication::translate("MainWindow", "Dark Time", nullptr));
        triggerIn_checkBox->setText(QApplication::translate("MainWindow", "Trigger Input", nullptr));
        label_TrigOut1->setText(QApplication::translate("MainWindow", "      Trigger Out 1", nullptr));
        triggerOut2_checkBox->setText(QApplication::translate("MainWindow", "Trigger Out 2", nullptr));
        groupBox_StartPauseStop->setTitle(QString());
        startPatSequence_Button->setText(QApplication::translate("MainWindow", "Start  ", nullptr));
        pausePatSequence_Button->setText(QApplication::translate("MainWindow", "Pause", nullptr));
        stopPatSequence_Button->setText(QApplication::translate("MainWindow", "Stop  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
