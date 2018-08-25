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
#include <QtWidgets/QPlainTextEdit>
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
    QPushButton *connectButton;
    QPushButton *startPatSequence_Button;
    QPushButton *pausePatSequence_Button;
    QPushButton *stopPatSequence_Button;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_patternMode;
    QPushButton *pushButton_LEDDriver;
    QPushButton *pushButton_ZMachineControl;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_8;
    QLabel *StartTime;
    QLabel *label_12;
    QLabel *TotalTime;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_25;
    QFrame *frame_common;
    QGroupBox *groupBox;
    QPushButton *addPatternsButton;
    QPushButton *removePatternsButton;
    QPushButton *selectAllButton;
    QPushButton *saveButton_patternSettings;
    QPushButton *loadButton_patternSettings;
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
    QWidget *patternModePage;
    QGridLayout *gridLayout_3;
    QFrame *frame_patternMode;
    QGridLayout *gridLayout_11;
    QGroupBox *groupBox_PatternMode;
    QHBoxLayout *horizontalLayout_26;
    QStackedWidget *patternMode_stackedWidget;
    QWidget *patternDesignPage;
    QGridLayout *gridLayout_31;
    QVBoxLayout *verticalLayout_37;
    QGroupBox *groupBox_PatternImage;
    QHBoxLayout *horizontalLayout_46;
    QGroupBox *ptnSetting_groupBox;
    QVBoxLayout *verticalLayout_38;
    QGroupBox *groupBox_PatternIndex;
    QLabel *PatternIndex;
    QGroupBox *groupBox_Timing;
    QLineEdit *exposure_lineEdit;
    QLabel *label_Exposure;
    QLabel *label_DarkTime;
    QLineEdit *darkPeriod_lineEdit;
    QPushButton *UpdateTotalTime;
    QSpacerItem *verticalSpacer_33;
    QCheckBox *triggerIn_checkBox;
    QSpacerItem *verticalSpacer_34;
    QLabel *label_TrigOut1;
    QSpacerItem *verticalSpacer_35;
    QCheckBox *triggerOut2_checkBox;
    QSpacerItem *verticalSpacer_36;
    QScrollArea *waveFormArea;
    QWidget *scrollAreaWidgetContents_4;
    QWidget *LEDDriverPage;
    QGridLayout *gridLayout_9;
    QFrame *frame_LedDriver;
    QGroupBox *groupBox_LEDDriver;
    QGroupBox *groupBox_LEDDriverStatus;
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
    QTextEdit *Text_Readbuffer;
    QLineEdit *LEDCurrent_lineEdit;
    QLineEdit *Intensity_lineEdit;
    QLabel *label_LEDDriverStatus;
    QLabel *label_11;
    QWidget *ZMachineControl;
    QFrame *frame_ZMavhineControl;
    QGridLayout *gridLayout_12;
    QGroupBox *groupBox_ZMachineControl;
    QGroupBox *PrinterBoard;
    QPushButton *Moveup50;
    QPushButton *AutoHome;
    QPushButton *Movedown1;
    QPushButton *Movedown100;
    QPushButton *Moveup100;
    QPushButton *Moveup1;
    QPushButton *Moveup01;
    QPushButton *Movedown10;
    QPushButton *Moveup10;
    QLabel *label;
    QPushButton *Movedown50;
    QLabel *label_2;
    QPushButton *Movedown01;
    QGroupBox *Gcode;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *StartPrintGcode;
    QTextEdit *EndPrintGcode;
    QTextEdit *StartLayerGcode;
    QTextEdit *EndLayerGcode;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QGroupBox *ManualGcode_GroupBox;
    QPushButton *SendManualGcode;
    QPushButton *ClearManualGcode;
    QTextEdit *ManualGcode;
    QGroupBox *MotorControl;
    QPushButton *MotorConDisable;
    QGroupBox *AutoBed;
    QPushButton *AutoBedLevel;
    QGroupBox *LiftSeqTime;
    QLineEdit *ZLiftdelay;
    QLabel *label_9;
    QLineEdit *PrintingDelay;
    QLabel *label_10;
    QGroupBox *groupBox_2;
    QRadioButton *AutoHoming;
    QRadioButton *ManualHoming;
    QLabel *HomeDelay;
    QLineEdit *HomingDelay;
    QLabel *ComPort;
    QComboBox *SerialPort;
    QLabel *BoardStatus;
    QLabel *label_3;
    QPushButton *SaveMacProfile;
    QPushButton *LoadMacProfile;
    QPlainTextEdit *ProfileName;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1388, 764);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 1371, 731));
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1369, 729));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        horizontalLayout_24->setSizeConstraint(QLayout::SetNoConstraint);
        connectButton = new QPushButton(scrollAreaWidgetContents);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy);
        connectButton->setMinimumSize(QSize(10, 48));
        connectButton->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        connectButton->setFont(font);
        connectButton->setStyleSheet(QLatin1String("#connectButton{\n"
"background-color: transparent;\n"
"border-image: url(:connected.png);\n"
"backgorund: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/images/connected.png"), QSize(), QIcon::Normal, QIcon::Off);
        connectButton->setIcon(icon1);
        connectButton->setIconSize(QSize(50, 50));
        connectButton->setCheckable(true);
        connectButton->setChecked(false);

        horizontalLayout_24->addWidget(connectButton);

        startPatSequence_Button = new QPushButton(scrollAreaWidgetContents);
        startPatSequence_Button->setObjectName(QStringLiteral("startPatSequence_Button"));
        sizePolicy.setHeightForWidth(startPatSequence_Button->sizePolicy().hasHeightForWidth());
        startPatSequence_Button->setSizePolicy(sizePolicy);
        startPatSequence_Button->setMinimumSize(QSize(50, 60));
        startPatSequence_Button->setStyleSheet(QLatin1String("#startPatSequence_Button{\n"
"background-color: transparent;\n"
"backgorund: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Icons/my_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        startPatSequence_Button->setIcon(icon2);
        startPatSequence_Button->setIconSize(QSize(40, 40));

        horizontalLayout_24->addWidget(startPatSequence_Button);

        pausePatSequence_Button = new QPushButton(scrollAreaWidgetContents);
        pausePatSequence_Button->setObjectName(QStringLiteral("pausePatSequence_Button"));
        pausePatSequence_Button->setEnabled(false);
        sizePolicy.setHeightForWidth(pausePatSequence_Button->sizePolicy().hasHeightForWidth());
        pausePatSequence_Button->setSizePolicy(sizePolicy);
        pausePatSequence_Button->setMinimumSize(QSize(50, 60));
        pausePatSequence_Button->setStyleSheet(QLatin1String("#pausePatSequence_Button{\n"
"background-color: transparent;\n"
"backgorund: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/Icons/my_pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pausePatSequence_Button->setIcon(icon3);
        pausePatSequence_Button->setIconSize(QSize(40, 40));
        pausePatSequence_Button->setCheckable(false);
        pausePatSequence_Button->setChecked(false);

        horizontalLayout_24->addWidget(pausePatSequence_Button);

        stopPatSequence_Button = new QPushButton(scrollAreaWidgetContents);
        stopPatSequence_Button->setObjectName(QStringLiteral("stopPatSequence_Button"));
        stopPatSequence_Button->setEnabled(false);
        sizePolicy.setHeightForWidth(stopPatSequence_Button->sizePolicy().hasHeightForWidth());
        stopPatSequence_Button->setSizePolicy(sizePolicy);
        stopPatSequence_Button->setMinimumSize(QSize(50, 60));
        stopPatSequence_Button->setStyleSheet(QLatin1String("#stopPatSequence_Button{\n"
"background-color: transparent;\n"
"border-image: url(:connected.png);\n"
"backgorund: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/Icons/my_stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopPatSequence_Button->setIcon(icon4);
        stopPatSequence_Button->setIconSize(QSize(40, 40));

        horizontalLayout_24->addWidget(stopPatSequence_Button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_2);

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
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images/images/pattern.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_patternMode->setIcon(icon5);
        pushButton_patternMode->setIconSize(QSize(40, 40));
        pushButton_patternMode->setCheckable(true);
        pushButton_patternMode->setChecked(true);

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
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Images/images/LEDDriver_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_LEDDriver->setIcon(icon6);
        pushButton_LEDDriver->setIconSize(QSize(40, 40));
        pushButton_LEDDriver->setCheckable(true);

        horizontalLayout_24->addWidget(pushButton_LEDDriver);

        pushButton_ZMachineControl = new QPushButton(scrollAreaWidgetContents);
        pushButton_ZMachineControl->setObjectName(QStringLiteral("pushButton_ZMachineControl"));
        sizePolicy.setHeightForWidth(pushButton_ZMachineControl->sizePolicy().hasHeightForWidth());
        pushButton_ZMachineControl->setSizePolicy(sizePolicy);
        pushButton_ZMachineControl->setMinimumSize(QSize(0, 0));
        pushButton_ZMachineControl->setFont(font);
        pushButton_ZMachineControl->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"   }"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Images/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ZMachineControl->setIcon(icon7);
        pushButton_ZMachineControl->setIconSize(QSize(40, 40));
        pushButton_ZMachineControl->setCheckable(true);

        horizontalLayout_24->addWidget(pushButton_ZMachineControl);

        horizontalSpacer_3 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_3);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_8->setFont(font1);
        label_8->setStyleSheet(QLatin1String("QLabel{\n"
"	color:rgb(0,150,150);\n"
"   }"));

        horizontalLayout_24->addWidget(label_8);

        StartTime = new QLabel(scrollAreaWidgetContents);
        StartTime->setObjectName(QStringLiteral("StartTime"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(StartTime->sizePolicy().hasHeightForWidth());
        StartTime->setSizePolicy(sizePolicy1);
        StartTime->setMinimumSize(QSize(70, 0));
        StartTime->setFont(font1);
        StartTime->setStyleSheet(QLatin1String("QLabel{\n"
"	color:rgb(0,150,150);\n"
"   }"));

        horizontalLayout_24->addWidget(StartTime);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QStringLiteral("label_12"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_12->setFont(font2);
        label_12->setStyleSheet(QLatin1String("QLabel{\n"
"	color:rgb(0,150,150);\n"
"   }"));

        horizontalLayout_24->addWidget(label_12);

        TotalTime = new QLabel(scrollAreaWidgetContents);
        TotalTime->setObjectName(QStringLiteral("TotalTime"));
        sizePolicy1.setHeightForWidth(TotalTime->sizePolicy().hasHeightForWidth());
        TotalTime->setSizePolicy(sizePolicy1);
        TotalTime->setMinimumSize(QSize(70, 0));
        TotalTime->setFont(font1);
        TotalTime->setStyleSheet(QLatin1String("QLabel{\n"
"	color:rgb(0,150,150);\n"
"   }"));

        horizontalLayout_24->addWidget(TotalTime);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer);


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
        groupBox->setGeometry(QRect(10, 10, 221, 131));
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
        addPatternsButton = new QPushButton(groupBox);
        addPatternsButton->setObjectName(QStringLiteral("addPatternsButton"));
        addPatternsButton->setGeometry(QRect(20, 80, 40, 35));
        sizePolicy3.setHeightForWidth(addPatternsButton->sizePolicy().hasHeightForWidth());
        addPatternsButton->setSizePolicy(sizePolicy3);
        addPatternsButton->setMinimumSize(QSize(40, 35));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/Icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addPatternsButton->setIcon(icon8);
        removePatternsButton = new QPushButton(groupBox);
        removePatternsButton->setObjectName(QStringLiteral("removePatternsButton"));
        removePatternsButton->setEnabled(false);
        removePatternsButton->setGeometry(QRect(85, 80, 40, 35));
        sizePolicy3.setHeightForWidth(removePatternsButton->sizePolicy().hasHeightForWidth());
        removePatternsButton->setSizePolicy(sizePolicy3);
        removePatternsButton->setMinimumSize(QSize(40, 35));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/Icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        removePatternsButton->setIcon(icon9);
        selectAllButton = new QPushButton(groupBox);
        selectAllButton->setObjectName(QStringLiteral("selectAllButton"));
        selectAllButton->setEnabled(false);
        selectAllButton->setGeometry(QRect(150, 80, 40, 35));
        sizePolicy3.setHeightForWidth(selectAllButton->sizePolicy().hasHeightForWidth());
        selectAllButton->setSizePolicy(sizePolicy3);
        selectAllButton->setMinimumSize(QSize(40, 35));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/Icons/select.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectAllButton->setIcon(icon10);
        saveButton_patternSettings = new QPushButton(groupBox);
        saveButton_patternSettings->setObjectName(QStringLiteral("saveButton_patternSettings"));
        saveButton_patternSettings->setEnabled(true);
        saveButton_patternSettings->setGeometry(QRect(10, 20, 75, 35));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(saveButton_patternSettings->sizePolicy().hasHeightForWidth());
        saveButton_patternSettings->setSizePolicy(sizePolicy4);
        saveButton_patternSettings->setMinimumSize(QSize(70, 35));
        saveButton_patternSettings->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"}"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/prefix1/Icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton_patternSettings->setIcon(icon11);
        loadButton_patternSettings = new QPushButton(groupBox);
        loadButton_patternSettings->setObjectName(QStringLiteral("loadButton_patternSettings"));
        loadButton_patternSettings->setGeometry(QRect(110, 20, 75, 35));
        loadButton_patternSettings->setMinimumSize(QSize(70, 35));
        loadButton_patternSettings->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"}"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/prefix1/Icons/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        loadButton_patternSettings->setIcon(icon12);
        groupBox_firmware = new QGroupBox(frame_common);
        groupBox_firmware->setObjectName(QStringLiteral("groupBox_firmware"));
        groupBox_firmware->setGeometry(QRect(10, 150, 221, 60));
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
        QFont font3;
        font3.setPointSize(8);
        label_version->setFont(font3);
        label_version->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        verticalLayout_18->addWidget(label_version);

        label_Tag = new QLabel(groupBox_firmware);
        label_Tag->setObjectName(QStringLiteral("label_Tag"));
        sizePolicy5.setHeightForWidth(label_Tag->sizePolicy().hasHeightForWidth());
        label_Tag->setSizePolicy(sizePolicy5);
        label_Tag->setFont(font3);
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
        apiVersionLabel->setFont(font3);
        apiVersionLabel->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        verticalLayout_19->addWidget(apiVersionLabel);

        firmwareTag_label = new QLabel(groupBox_firmware);
        firmwareTag_label->setObjectName(QStringLiteral("firmwareTag_label"));
        sizePolicy5.setHeightForWidth(firmwareTag_label->sizePolicy().hasHeightForWidth());
        firmwareTag_label->setSizePolicy(sizePolicy5);
        firmwareTag_label->setFont(font3);
        firmwareTag_label->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        verticalLayout_19->addWidget(firmwareTag_label);


        horizontalLayout_22->addLayout(verticalLayout_19);

        groupBox_ChipSetType = new QGroupBox(frame_common);
        groupBox_ChipSetType->setObjectName(QStringLiteral("groupBox_ChipSetType"));
        groupBox_ChipSetType->setGeometry(QRect(10, 220, 221, 43));
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
        operatingModes_groupBox->setGeometry(QRect(10, 270, 221, 81));
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
        status_groupBox->setGeometry(QRect(10, 360, 221, 271));
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
        groupBox_PatternMode->setFont(font1);
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
        verticalLayout_37 = new QVBoxLayout();
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        groupBox_PatternImage = new QGroupBox(patternDesignPage);
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
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
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
        groupBox_PatternIndex = new QGroupBox(ptnSetting_groupBox);
        groupBox_PatternIndex->setObjectName(QStringLiteral("groupBox_PatternIndex"));
        groupBox_PatternIndex->setMinimumSize(QSize(0, 70));
        PatternIndex = new QLabel(groupBox_PatternIndex);
        PatternIndex->setObjectName(QStringLiteral("PatternIndex"));
        PatternIndex->setGeometry(QRect(3, 20, 105, 35));
        PatternIndex->setFont(font);
        PatternIndex->setStyleSheet(QLatin1String("QLabel{border:0px;\n"
"color:rgb(0,150,150);}"));

        verticalLayout_38->addWidget(groupBox_PatternIndex);

        groupBox_Timing = new QGroupBox(ptnSetting_groupBox);
        groupBox_Timing->setObjectName(QStringLiteral("groupBox_Timing"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(groupBox_Timing->sizePolicy().hasHeightForWidth());
        groupBox_Timing->setSizePolicy(sizePolicy8);
        groupBox_Timing->setMinimumSize(QSize(0, 160));
        exposure_lineEdit = new QLineEdit(groupBox_Timing);
        exposure_lineEdit->setObjectName(QStringLiteral("exposure_lineEdit"));
        exposure_lineEdit->setGeometry(QRect(13, 50, 90, 30));
        QFont font4;
        font4.setPointSize(10);
        exposure_lineEdit->setFont(font4);
        label_Exposure = new QLabel(groupBox_Timing);
        label_Exposure->setObjectName(QStringLiteral("label_Exposure"));
        label_Exposure->setGeometry(QRect(30, 20, 61, 21));
        QFont font5;
        font5.setFamily(QStringLiteral("Arial"));
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setWeight(50);
        label_Exposure->setFont(font5);
        label_Exposure->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        label_Exposure->setWordWrap(true);
        label_DarkTime = new QLabel(groupBox_Timing);
        label_DarkTime->setObjectName(QStringLiteral("label_DarkTime"));
        label_DarkTime->setGeometry(QRect(30, 88, 61, 21));
        label_DarkTime->setFont(font5);
        label_DarkTime->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        darkPeriod_lineEdit = new QLineEdit(groupBox_Timing);
        darkPeriod_lineEdit->setObjectName(QStringLiteral("darkPeriod_lineEdit"));
        darkPeriod_lineEdit->setGeometry(QRect(13, 115, 90, 30));
        darkPeriod_lineEdit->setFont(font4);

        verticalLayout_38->addWidget(groupBox_Timing);

        UpdateTotalTime = new QPushButton(ptnSetting_groupBox);
        UpdateTotalTime->setObjectName(QStringLiteral("UpdateTotalTime"));
        UpdateTotalTime->setEnabled(false);
        sizePolicy1.setHeightForWidth(UpdateTotalTime->sizePolicy().hasHeightForWidth());
        UpdateTotalTime->setSizePolicy(sizePolicy1);
        UpdateTotalTime->setMinimumSize(QSize(0, 35));
        QFont font6;
        font6.setFamily(QStringLiteral("Arial"));
        font6.setPointSize(10);
        UpdateTotalTime->setFont(font6);
        UpdateTotalTime->setMouseTracking(true);
        UpdateTotalTime->setCheckable(false);

        verticalLayout_38->addWidget(UpdateTotalTime);

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
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 895, 566));
        waveFormArea->setWidget(scrollAreaWidgetContents_4);

        horizontalLayout_46->addWidget(waveFormArea);


        verticalLayout_37->addWidget(groupBox_PatternImage);


        gridLayout_31->addLayout(verticalLayout_37, 0, 0, 1, 1);

        patternMode_stackedWidget->addWidget(patternDesignPage);

        horizontalLayout_26->addWidget(patternMode_stackedWidget);


        gridLayout_11->addWidget(groupBox_PatternMode, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_patternMode, 0, 0, 1, 1);

        stackedWidget->addWidget(patternModePage);
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
        groupBox_LEDDriver->setGeometry(QRect(9, 9, 1081, 621));
        sizePolicy6.setHeightForWidth(groupBox_LEDDriver->sizePolicy().hasHeightForWidth());
        groupBox_LEDDriver->setSizePolicy(sizePolicy6);
        groupBox_LEDDriver->setFont(font1);
        groupBox_LEDDriver->setStyleSheet(QLatin1String("QGroupBox{ border: 1.5px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        groupBox_LEDDriverStatus = new QGroupBox(groupBox_LEDDriver);
        groupBox_LEDDriverStatus->setObjectName(QStringLiteral("groupBox_LEDDriverStatus"));
        groupBox_LEDDriverStatus->setGeometry(QRect(9, 19, 1061, 581));
        QFont font7;
        font7.setPointSize(9);
        groupBox_LEDDriverStatus->setFont(font7);
        groupBox_LEDDriverStatus->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        USBDevicePath_TextEdit = new QTextEdit(groupBox_LEDDriverStatus);
        USBDevicePath_TextEdit->setObjectName(QStringLiteral("USBDevicePath_TextEdit"));
        USBDevicePath_TextEdit->setEnabled(true);
        USBDevicePath_TextEdit->setGeometry(QRect(135, 23, 540, 31));
        QSizePolicy sizePolicy9(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(50);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(USBDevicePath_TextEdit->sizePolicy().hasHeightForWidth());
        USBDevicePath_TextEdit->setSizePolicy(sizePolicy9);
        USBDevicePath_TextEdit->setFont(font6);
        USBDevicePath_TextEdit->setStyleSheet(QLatin1String("QTextEdit{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        USBDevicePath = new QLabel(groupBox_LEDDriverStatus);
        USBDevicePath->setObjectName(QStringLiteral("USBDevicePath"));
        USBDevicePath->setGeometry(QRect(10, 23, 121, 31));
        QFont font8;
        font8.setFamily(QStringLiteral("Arial"));
        font8.setPointSize(11);
        USBDevicePath->setFont(font8);
        USBDevicePath->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        label_ReadBuffer = new QLabel(groupBox_LEDDriverStatus);
        label_ReadBuffer->setObjectName(QStringLiteral("label_ReadBuffer"));
        label_ReadBuffer->setGeometry(QRect(10, 65, 85, 31));
        label_ReadBuffer->setFont(font8);
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
        pushButton_RestartLEDDriver->setStyleSheet(QLatin1String("QPushButtonl{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        checkBox_InternalInitialization = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_InternalInitialization->setObjectName(QStringLiteral("checkBox_InternalInitialization"));
        checkBox_InternalInitialization->setEnabled(false);
        checkBox_InternalInitialization->setGeometry(QRect(10, 110, 130, 20));
        QFont font10;
        font10.setFamily(QStringLiteral("Arial"));
        font10.setPointSize(9);
        checkBox_InternalInitialization->setFont(font10);
        checkBox_LEDTempOK = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_LEDTempOK->setObjectName(QStringLiteral("checkBox_LEDTempOK"));
        checkBox_LEDTempOK->setEnabled(false);
        checkBox_LEDTempOK->setGeometry(QRect(10, 135, 130, 20));
        checkBox_LEDTempOK->setFont(font10);
        checkBox_DMDTempOK = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_DMDTempOK->setObjectName(QStringLiteral("checkBox_DMDTempOK"));
        checkBox_DMDTempOK->setEnabled(false);
        checkBox_DMDTempOK->setGeometry(QRect(10, 160, 130, 20));
        checkBox_DMDTempOK->setFont(font10);
        checkBox_BoardTempOK = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_BoardTempOK->setObjectName(QStringLiteral("checkBox_BoardTempOK"));
        checkBox_BoardTempOK->setEnabled(false);
        checkBox_BoardTempOK->setGeometry(QRect(10, 185, 130, 20));
        checkBox_BoardTempOK->setFont(font10);
        checkBox_HardwareOK = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_HardwareOK->setObjectName(QStringLiteral("checkBox_HardwareOK"));
        checkBox_HardwareOK->setEnabled(false);
        checkBox_HardwareOK->setGeometry(QRect(10, 208, 130, 20));
        checkBox_HardwareOK->setFont(font10);
        checkBox_IntensityCalOK = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_IntensityCalOK->setObjectName(QStringLiteral("checkBox_IntensityCalOK"));
        checkBox_IntensityCalOK->setEnabled(false);
        checkBox_IntensityCalOK->setGeometry(QRect(10, 233, 150, 20));
        checkBox_IntensityCalOK->setFont(font10);
        checkBox_WriteProtection = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_WriteProtection->setObjectName(QStringLiteral("checkBox_WriteProtection"));
        checkBox_WriteProtection->setEnabled(false);
        checkBox_WriteProtection->setGeometry(QRect(10, 258, 130, 20));
        checkBox_WriteProtection->setFont(font10);
        checkBox_IntensityModInstall = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_IntensityModInstall->setObjectName(QStringLiteral("checkBox_IntensityModInstall"));
        checkBox_IntensityModInstall->setEnabled(false);
        checkBox_IntensityModInstall->setGeometry(QRect(10, 282, 150, 20));
        checkBox_IntensityModInstall->setFont(font10);
        label_DMDTempMax = new QLabel(groupBox_LEDDriverStatus);
        label_DMDTempMax->setObjectName(QStringLiteral("label_DMDTempMax"));
        label_DMDTempMax->setGeometry(QRect(200, 110, 95, 25));
        label_DMDTempMax->setFont(font10);
        label_DMDTempMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        DMDTempMax_text = new QTextBrowser(groupBox_LEDDriverStatus);
        DMDTempMax_text->setObjectName(QStringLiteral("DMDTempMax_text"));
        DMDTempMax_text->setEnabled(false);
        DMDTempMax_text->setGeometry(QRect(300, 110, 75, 25));
        DMDTempMax_text->setFont(font10);
        DMDTempMax_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LEDTempMax = new QLabel(groupBox_LEDDriverStatus);
        label_LEDTempMax->setObjectName(QStringLiteral("label_LEDTempMax"));
        label_LEDTempMax->setGeometry(QRect(200, 146, 90, 25));
        label_LEDTempMax->setFont(font10);
        label_LEDTempMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        LEDTempMax_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDTempMax_text->setObjectName(QStringLiteral("LEDTempMax_text"));
        LEDTempMax_text->setEnabled(false);
        LEDTempMax_text->setGeometry(QRect(300, 146, 75, 25));
        LEDTempMax_text->setFont(font10);
        LEDTempMax_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_BoardTempMax = new QLabel(groupBox_LEDDriverStatus);
        label_BoardTempMax->setObjectName(QStringLiteral("label_BoardTempMax"));
        label_BoardTempMax->setGeometry(QRect(200, 185, 95, 25));
        label_BoardTempMax->setFont(font10);
        label_BoardTempMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        BoardTempMax_text = new QTextBrowser(groupBox_LEDDriverStatus);
        BoardTempMax_text->setObjectName(QStringLiteral("BoardTempMax_text"));
        BoardTempMax_text->setEnabled(false);
        BoardTempMax_text->setGeometry(QRect(300, 185, 75, 25));
        BoardTempMax_text->setFont(font10);
        BoardTempMax_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LEDCurrentMax = new QLabel(groupBox_LEDDriverStatus);
        label_LEDCurrentMax->setObjectName(QStringLiteral("label_LEDCurrentMax"));
        label_LEDCurrentMax->setGeometry(QRect(200, 220, 100, 25));
        label_LEDCurrentMax->setFont(font10);
        label_LEDCurrentMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        LEDCurrentMax_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDCurrentMax_text->setObjectName(QStringLiteral("LEDCurrentMax_text"));
        LEDCurrentMax_text->setEnabled(false);
        LEDCurrentMax_text->setGeometry(QRect(300, 220, 75, 25));
        LEDCurrentMax_text->setFont(font10);
        LEDCurrentMax_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_IntensityOffset = new QLabel(groupBox_LEDDriverStatus);
        label_IntensityOffset->setObjectName(QStringLiteral("label_IntensityOffset"));
        label_IntensityOffset->setGeometry(QRect(200, 260, 90, 25));
        label_IntensityOffset->setFont(font6);
        label_IntensityOffset->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        Intensity_offset_text = new QTextBrowser(groupBox_LEDDriverStatus);
        Intensity_offset_text->setObjectName(QStringLiteral("Intensity_offset_text"));
        Intensity_offset_text->setEnabled(false);
        Intensity_offset_text->setGeometry(QRect(300, 260, 75, 25));
        Intensity_offset_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_IntensityGain = new QLabel(groupBox_LEDDriverStatus);
        label_IntensityGain->setObjectName(QStringLiteral("label_IntensityGain"));
        label_IntensityGain->setGeometry(QRect(200, 300, 95, 25));
        label_IntensityGain->setFont(font6);
        label_IntensityGain->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        IntensityGain_text = new QTextBrowser(groupBox_LEDDriverStatus);
        IntensityGain_text->setObjectName(QStringLiteral("IntensityGain_text"));
        IntensityGain_text->setEnabled(false);
        IntensityGain_text->setGeometry(QRect(300, 300, 75, 25));
        IntensityGain_text->setFont(font10);
        IntensityGain_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        Label_DMDTemp = new QLabel(groupBox_LEDDriverStatus);
        Label_DMDTemp->setObjectName(QStringLiteral("Label_DMDTemp"));
        Label_DMDTemp->setGeometry(QRect(400, 110, 90, 25));
        Label_DMDTemp->setFont(font10);
        Label_DMDTemp->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        DMDTemp_text = new QTextBrowser(groupBox_LEDDriverStatus);
        DMDTemp_text->setObjectName(QStringLiteral("DMDTemp_text"));
        DMDTemp_text->setEnabled(false);
        DMDTemp_text->setGeometry(QRect(520, 110, 75, 25));
        DMDTemp_text->setFont(font10);
        DMDTemp_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LEDTemp = new QLabel(groupBox_LEDDriverStatus);
        label_LEDTemp->setObjectName(QStringLiteral("label_LEDTemp"));
        label_LEDTemp->setGeometry(QRect(400, 146, 95, 25));
        label_LEDTemp->setFont(font10);
        label_LEDTemp->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LEDTemp_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDTemp_text->setObjectName(QStringLiteral("LEDTemp_text"));
        LEDTemp_text->setEnabled(false);
        LEDTemp_text->setGeometry(QRect(520, 146, 75, 25));
        LEDTemp_text->setFont(font10);
        LEDTemp_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_BoardTemp = new QLabel(groupBox_LEDDriverStatus);
        label_BoardTemp->setObjectName(QStringLiteral("label_BoardTemp"));
        label_BoardTemp->setGeometry(QRect(400, 185, 95, 25));
        label_BoardTemp->setFont(font6);
        label_BoardTemp->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        BoardTemp_text = new QTextBrowser(groupBox_LEDDriverStatus);
        BoardTemp_text->setObjectName(QStringLiteral("BoardTemp_text"));
        BoardTemp_text->setEnabled(false);
        BoardTemp_text->setGeometry(QRect(520, 185, 75, 25));
        BoardTemp_text->setFont(font10);
        BoardTemp_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LEDVoltage = new QLabel(groupBox_LEDDriverStatus);
        label_LEDVoltage->setObjectName(QStringLiteral("label_LEDVoltage"));
        label_LEDVoltage->setGeometry(QRect(400, 220, 95, 25));
        label_LEDVoltage->setFont(font6);
        label_LEDVoltage->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LEDVoltage_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDVoltage_text->setObjectName(QStringLiteral("LEDVoltage_text"));
        LEDVoltage_text->setEnabled(false);
        LEDVoltage_text->setGeometry(QRect(520, 220, 75, 25));
        LEDVoltage_text->setFont(font10);
        LEDVoltage_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LEDCurrent = new QLabel(groupBox_LEDDriverStatus);
        label_LEDCurrent->setObjectName(QStringLiteral("label_LEDCurrent"));
        label_LEDCurrent->setGeometry(QRect(400, 260, 105, 25));
        label_LEDCurrent->setFont(font6);
        label_LEDCurrent->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LEDCurrent_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDCurrent_text->setObjectName(QStringLiteral("LEDCurrent_text"));
        LEDCurrent_text->setEnabled(false);
        LEDCurrent_text->setGeometry(QRect(520, 260, 75, 25));
        LEDCurrent_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_CycleTime = new QLabel(groupBox_LEDDriverStatus);
        label_CycleTime->setObjectName(QStringLiteral("label_CycleTime"));
        label_CycleTime->setGeometry(QRect(400, 300, 95, 25));
        label_CycleTime->setFont(font6);
        label_CycleTime->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        CycleTime_Text = new QTextBrowser(groupBox_LEDDriverStatus);
        CycleTime_Text->setObjectName(QStringLiteral("CycleTime_Text"));
        CycleTime_Text->setEnabled(false);
        CycleTime_Text->setGeometry(QRect(520, 300, 75, 25));
        CycleTime_Text->setFont(font10);
        CycleTime_Text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_IntensityVoltage = new QLabel(groupBox_LEDDriverStatus);
        label_IntensityVoltage->setObjectName(QStringLiteral("label_IntensityVoltage"));
        label_IntensityVoltage->setGeometry(QRect(620, 110, 150, 25));
        label_IntensityVoltage->setFont(font8);
        label_IntensityVoltage->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        IntensityVoltage_text = new QTextBrowser(groupBox_LEDDriverStatus);
        IntensityVoltage_text->setObjectName(QStringLiteral("IntensityVoltage_text"));
        IntensityVoltage_text->setEnabled(false);
        IntensityVoltage_text->setGeometry(QRect(770, 110, 150, 25));
        IntensityVoltage_text->setFont(font10);
        IntensityVoltage_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_Intensity = new QLabel(groupBox_LEDDriverStatus);
        label_Intensity->setObjectName(QStringLiteral("label_Intensity"));
        label_Intensity->setGeometry(QRect(620, 146, 120, 25));
        label_Intensity->setFont(font8);
        label_Intensity->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        Intensity_text = new QTextBrowser(groupBox_LEDDriverStatus);
        Intensity_text->setObjectName(QStringLiteral("Intensity_text"));
        Intensity_text->setEnabled(false);
        Intensity_text->setGeometry(QRect(770, 146, 150, 25));
        Intensity_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LEDSerial = new QLabel(groupBox_LEDDriverStatus);
        label_LEDSerial->setObjectName(QStringLiteral("label_LEDSerial"));
        label_LEDSerial->setGeometry(QRect(620, 185, 120, 25));
        label_LEDSerial->setFont(font6);
        label_LEDSerial->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LEDSerial_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDSerial_text->setObjectName(QStringLiteral("LEDSerial_text"));
        LEDSerial_text->setEnabled(false);
        LEDSerial_text->setGeometry(QRect(770, 185, 200, 25));
        sizePolicy3.setHeightForWidth(LEDSerial_text->sizePolicy().hasHeightForWidth());
        LEDSerial_text->setSizePolicy(sizePolicy3);
        LEDSerial_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LESerial = new QLabel(groupBox_LEDDriverStatus);
        label_LESerial->setObjectName(QStringLiteral("label_LESerial"));
        label_LESerial->setGeometry(QRect(620, 220, 120, 25));
        QFont font11;
        font11.setFamily(QStringLiteral("Arial"));
        font11.setPointSize(10);
        font11.setItalic(false);
        label_LESerial->setFont(font11);
        label_LESerial->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LESerial_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LESerial_text->setObjectName(QStringLiteral("LESerial_text"));
        LESerial_text->setEnabled(false);
        LESerial_text->setGeometry(QRect(770, 220, 200, 25));
        sizePolicy3.setHeightForWidth(LESerial_text->sizePolicy().hasHeightForWidth());
        LESerial_text->setSizePolicy(sizePolicy3);
        LESerial_text->setFont(font10);
        LESerial_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_PCBFanSpeed = new QLabel(groupBox_LEDDriverStatus);
        label_PCBFanSpeed->setObjectName(QStringLiteral("label_PCBFanSpeed"));
        label_PCBFanSpeed->setGeometry(QRect(10, 350, 150, 25));
        label_PCBFanSpeed->setFont(font6);
        label_PCBFanSpeed->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        PCBFanSpeed_text = new QTextBrowser(groupBox_LEDDriverStatus);
        PCBFanSpeed_text->setObjectName(QStringLiteral("PCBFanSpeed_text"));
        PCBFanSpeed_text->setGeometry(QRect(160, 350, 95, 25));
        PCBFanSpeed_text->setFont(font10);
        PCBFanSpeed_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_DMDFanSpeed = new QLabel(groupBox_LEDDriverStatus);
        label_DMDFanSpeed->setObjectName(QStringLiteral("label_DMDFanSpeed"));
        label_DMDFanSpeed->setGeometry(QRect(10, 385, 150, 25));
        label_DMDFanSpeed->setFont(font6);
        label_DMDFanSpeed->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        DMDFanSpeed_text = new QTextBrowser(groupBox_LEDDriverStatus);
        DMDFanSpeed_text->setObjectName(QStringLiteral("DMDFanSpeed_text"));
        DMDFanSpeed_text->setGeometry(QRect(160, 385, 95, 25));
        DMDFanSpeed_text->setFont(font10);
        DMDFanSpeed_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LEDFanSpeed = new QLabel(groupBox_LEDDriverStatus);
        label_LEDFanSpeed->setObjectName(QStringLiteral("label_LEDFanSpeed"));
        label_LEDFanSpeed->setGeometry(QRect(10, 420, 150, 25));
        label_LEDFanSpeed->setFont(font6);
        label_LEDFanSpeed->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LEDFanSpeed_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDFanSpeed_text->setObjectName(QStringLiteral("LEDFanSpeed_text"));
        LEDFanSpeed_text->setGeometry(QRect(160, 420, 95, 25));
        LEDFanSpeed_text->setFont(font10);
        LEDFanSpeed_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LEDCurrent2 = new QLabel(groupBox_LEDDriverStatus);
        label_LEDCurrent2->setObjectName(QStringLiteral("label_LEDCurrent2"));
        label_LEDCurrent2->setGeometry(QRect(10, 470, 150, 25));
        label_LEDCurrent2->setFont(font6);
        label_LEDCurrent2->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        pushButton_SetLEDCurrent = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_SetLEDCurrent->setObjectName(QStringLiteral("pushButton_SetLEDCurrent"));
        pushButton_SetLEDCurrent->setGeometry(QRect(170, 495, 115, 25));
        QFont font12;
        font12.setFamily(QStringLiteral("Arial"));
        font12.setPointSize(9);
        font12.setBold(true);
        font12.setWeight(75);
        pushButton_SetLEDCurrent->setFont(font12);
        pushButton_LEDPWMON_OFF = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_LEDPWMON_OFF->setObjectName(QStringLiteral("pushButton_LEDPWMON_OFF"));
        pushButton_LEDPWMON_OFF->setGeometry(QRect(10, 530, 150, 30));
        pushButton_LEDPWMON_OFF->setFont(font9);
        label_Intensity2 = new QLabel(groupBox_LEDDriverStatus);
        label_Intensity2->setObjectName(QStringLiteral("label_Intensity2"));
        label_Intensity2->setGeometry(QRect(330, 470, 150, 25));
        label_Intensity2->setFont(font8);
        label_Intensity2->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        pushButton_SetIntensity = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_SetIntensity->setObjectName(QStringLiteral("pushButton_SetIntensity"));
        pushButton_SetIntensity->setGeometry(QRect(495, 495, 115, 25));
        pushButton_SetIntensity->setFont(font12);
        checkBox_IntensityRegEnable = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_IntensityRegEnable->setObjectName(QStringLiteral("checkBox_IntensityRegEnable"));
        checkBox_IntensityRegEnable->setGeometry(QRect(420, 350, 160, 25));
        checkBox_IntensityRegEnable->setFont(font6);
        checkBox_IntensityRegEnable->setChecked(false);
        pushButton_EnableIntensityReg = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_EnableIntensityReg->setObjectName(QStringLiteral("pushButton_EnableIntensityReg"));
        pushButton_EnableIntensityReg->setGeometry(QRect(410, 380, 175, 25));
        pushButton_EnableIntensityReg->setFont(font12);
        pushButton_ExTrigger = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_ExTrigger->setObjectName(QStringLiteral("pushButton_ExTrigger"));
        pushButton_ExTrigger->setGeometry(QRect(650, 495, 120, 35));
        pushButton_ExTrigger->setFont(font9);
        pushButton_SwTrigger = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_SwTrigger->setObjectName(QStringLiteral("pushButton_SwTrigger"));
        pushButton_SwTrigger->setGeometry(QRect(790, 495, 120, 35));
        pushButton_SwTrigger->setFont(font9);
        Text_Readbuffer = new QTextEdit(groupBox_LEDDriverStatus);
        Text_Readbuffer->setObjectName(QStringLiteral("Text_Readbuffer"));
        Text_Readbuffer->setGeometry(QRect(100, 65, 801, 35));
        sizePolicy9.setHeightForWidth(Text_Readbuffer->sizePolicy().hasHeightForWidth());
        Text_Readbuffer->setSizePolicy(sizePolicy9);
        Text_Readbuffer->setFont(font10);
        Text_Readbuffer->setStyleSheet(QLatin1String("QTextEdit{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        LEDCurrent_lineEdit = new QLineEdit(groupBox_LEDDriverStatus);
        LEDCurrent_lineEdit->setObjectName(QStringLiteral("LEDCurrent_lineEdit"));
        LEDCurrent_lineEdit->setGeometry(QRect(10, 495, 150, 25));
        LEDCurrent_lineEdit->setFont(font10);
        LEDCurrent_lineEdit->setStyleSheet(QStringLiteral(""));
        Intensity_lineEdit = new QLineEdit(groupBox_LEDDriverStatus);
        Intensity_lineEdit->setObjectName(QStringLiteral("Intensity_lineEdit"));
        Intensity_lineEdit->setGeometry(QRect(330, 495, 150, 25));
        Intensity_lineEdit->setFont(font10);
        label_LEDDriverStatus = new QLabel(groupBox_LEDDriverStatus);
        label_LEDDriverStatus->setObjectName(QStringLiteral("label_LEDDriverStatus"));
        label_LEDDriverStatus->setGeometry(QRect(795, 23, 240, 31));
        label_LEDDriverStatus->setFont(font8);
        label_LEDDriverStatus->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        label_11 = new QLabel(groupBox_LEDDriverStatus);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(720, 23, 65, 31));
        label_11->setFont(font8);
        label_11->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_9->addWidget(frame_LedDriver, 0, 0, 1, 1);

        stackedWidget->addWidget(LEDDriverPage);
        ZMachineControl = new QWidget();
        ZMachineControl->setObjectName(QStringLiteral("ZMachineControl"));
        frame_ZMavhineControl = new QFrame(ZMachineControl);
        frame_ZMavhineControl->setObjectName(QStringLiteral("frame_ZMavhineControl"));
        frame_ZMavhineControl->setGeometry(QRect(0, 0, 1098, 641));
        sizePolicy6.setHeightForWidth(frame_ZMavhineControl->sizePolicy().hasHeightForWidth());
        frame_ZMavhineControl->setSizePolicy(sizePolicy6);
        frame_ZMavhineControl->setMinimumSize(QSize(0, 0));
        frame_ZMavhineControl->setStyleSheet(QLatin1String("QFrame{background-image : url(:/images/img.jpg);\n"
"border:1px solid black}"));
        frame_ZMavhineControl->setFrameShape(QFrame::StyledPanel);
        frame_ZMavhineControl->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(frame_ZMavhineControl);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        groupBox_ZMachineControl = new QGroupBox(frame_ZMavhineControl);
        groupBox_ZMachineControl->setObjectName(QStringLiteral("groupBox_ZMachineControl"));
        groupBox_ZMachineControl->setFont(font1);
        groupBox_ZMachineControl->setAutoFillBackground(false);
        groupBox_ZMachineControl->setStyleSheet(QLatin1String("QGroupBox{ border: 1.5px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}\n"
"QLabel{border:0px}"));
        PrinterBoard = new QGroupBox(groupBox_ZMachineControl);
        PrinterBoard->setObjectName(QStringLiteral("PrinterBoard"));
        PrinterBoard->setGeometry(QRect(10, 300, 221, 311));
        sizePolicy3.setHeightForWidth(PrinterBoard->sizePolicy().hasHeightForWidth());
        PrinterBoard->setSizePolicy(sizePolicy3);
        PrinterBoard->setMinimumSize(QSize(0, 0));
        PrinterBoard->setFont(font12);
        PrinterBoard->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        Moveup50 = new QPushButton(PrinterBoard);
        Moveup50->setObjectName(QStringLiteral("Moveup50"));
        Moveup50->setGeometry(QRect(10, 110, 95, 30));
        Moveup50->setFont(font6);
        AutoHome = new QPushButton(PrinterBoard);
        AutoHome->setObjectName(QStringLiteral("AutoHome"));
        AutoHome->setGeometry(QRect(60, 30, 95, 30));
        AutoHome->setFont(font6);
        Movedown1 = new QPushButton(PrinterBoard);
        Movedown1->setObjectName(QStringLiteral("Movedown1"));
        Movedown1->setGeometry(QRect(120, 190, 95, 30));
        Movedown1->setFont(font6);
        Movedown100 = new QPushButton(PrinterBoard);
        Movedown100->setObjectName(QStringLiteral("Movedown100"));
        Movedown100->setGeometry(QRect(120, 70, 95, 30));
        Movedown100->setFont(font6);
        Moveup100 = new QPushButton(PrinterBoard);
        Moveup100->setObjectName(QStringLiteral("Moveup100"));
        Moveup100->setGeometry(QRect(10, 70, 95, 30));
        Moveup100->setFont(font6);
        Moveup1 = new QPushButton(PrinterBoard);
        Moveup1->setObjectName(QStringLiteral("Moveup1"));
        Moveup1->setGeometry(QRect(10, 190, 95, 30));
        Moveup1->setFont(font6);
        Moveup01 = new QPushButton(PrinterBoard);
        Moveup01->setObjectName(QStringLiteral("Moveup01"));
        Moveup01->setGeometry(QRect(10, 230, 95, 30));
        Moveup01->setFont(font6);
        Movedown10 = new QPushButton(PrinterBoard);
        Movedown10->setObjectName(QStringLiteral("Movedown10"));
        Movedown10->setGeometry(QRect(120, 150, 95, 30));
        Movedown10->setFont(font6);
        Moveup10 = new QPushButton(PrinterBoard);
        Moveup10->setObjectName(QStringLiteral("Moveup10"));
        Moveup10->setGeometry(QRect(10, 150, 95, 30));
        Moveup10->setFont(font6);
        label = new QLabel(PrinterBoard);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(29, 260, 60, 25));
        label->setFont(font9);
        Movedown50 = new QPushButton(PrinterBoard);
        Movedown50->setObjectName(QStringLiteral("Movedown50"));
        Movedown50->setGeometry(QRect(120, 110, 95, 30));
        Movedown50->setFont(font6);
        label_2 = new QLabel(PrinterBoard);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(127, 260, 80, 25));
        label_2->setFont(font9);
        Movedown01 = new QPushButton(PrinterBoard);
        Movedown01->setObjectName(QStringLiteral("Movedown01"));
        Movedown01->setGeometry(QRect(120, 230, 95, 30));
        Movedown01->setFont(font6);
        Gcode = new QGroupBox(groupBox_ZMachineControl);
        Gcode->setObjectName(QStringLiteral("Gcode"));
        Gcode->setGeometry(QRect(240, 20, 551, 591));
        Gcode->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        verticalLayoutWidget = new QWidget(Gcode);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(139, 10, 401, 571));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        StartPrintGcode = new QTextEdit(verticalLayoutWidget);
        StartPrintGcode->setObjectName(QStringLiteral("StartPrintGcode"));
        StartPrintGcode->setFont(font6);
        StartPrintGcode->setStyleSheet(QLatin1String("border-color: rgb(0,150,150);\n"
""));

        verticalLayout_3->addWidget(StartPrintGcode);

        EndPrintGcode = new QTextEdit(verticalLayoutWidget);
        EndPrintGcode->setObjectName(QStringLiteral("EndPrintGcode"));
        EndPrintGcode->setFont(font6);
        EndPrintGcode->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));

        verticalLayout_3->addWidget(EndPrintGcode);

        StartLayerGcode = new QTextEdit(verticalLayoutWidget);
        StartLayerGcode->setObjectName(QStringLiteral("StartLayerGcode"));
        StartLayerGcode->setFont(font6);
        StartLayerGcode->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));

        verticalLayout_3->addWidget(StartLayerGcode);

        EndLayerGcode = new QTextEdit(verticalLayoutWidget);
        EndLayerGcode->setObjectName(QStringLiteral("EndLayerGcode"));
        EndLayerGcode->setFont(font6);
        EndLayerGcode->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));

        verticalLayout_3->addWidget(EndLayerGcode);

        verticalLayoutWidget_2 = new QWidget(Gcode);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(9, 10, 121, 571));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font13;
        font13.setFamily(QStringLiteral("Arial"));
        font13.setPointSize(12);
        label_7->setFont(font13);

        verticalLayout_4->addWidget(label_7);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font13);

        verticalLayout_4->addWidget(label_6);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font13);

        verticalLayout_4->addWidget(label_5);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font13);

        verticalLayout_4->addWidget(label_4);

        ManualGcode_GroupBox = new QGroupBox(groupBox_ZMachineControl);
        ManualGcode_GroupBox->setObjectName(QStringLiteral("ManualGcode_GroupBox"));
        ManualGcode_GroupBox->setGeometry(QRect(800, 280, 261, 331));
        ManualGcode_GroupBox->setFont(font12);
        ManualGcode_GroupBox->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        SendManualGcode = new QPushButton(ManualGcode_GroupBox);
        SendManualGcode->setObjectName(QStringLiteral("SendManualGcode"));
        SendManualGcode->setGeometry(QRect(20, 280, 95, 35));
        SendManualGcode->setFont(font9);
        ClearManualGcode = new QPushButton(ManualGcode_GroupBox);
        ClearManualGcode->setObjectName(QStringLiteral("ClearManualGcode"));
        ClearManualGcode->setGeometry(QRect(150, 282, 95, 35));
        ClearManualGcode->setFont(font9);
        ManualGcode = new QTextEdit(ManualGcode_GroupBox);
        ManualGcode->setObjectName(QStringLiteral("ManualGcode"));
        ManualGcode->setGeometry(QRect(10, 20, 241, 251));
        ManualGcode->setFont(font6);
        ManualGcode->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));
        MotorControl = new QGroupBox(groupBox_ZMachineControl);
        MotorControl->setObjectName(QStringLiteral("MotorControl"));
        MotorControl->setGeometry(QRect(800, 20, 111, 61));
        MotorControl->setFont(font12);
        MotorControl->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        MotorConDisable = new QPushButton(MotorControl);
        MotorConDisable->setObjectName(QStringLiteral("MotorConDisable"));
        MotorConDisable->setGeometry(QRect(10, 20, 85, 30));
        MotorConDisable->setFont(font9);
        AutoBed = new QGroupBox(groupBox_ZMachineControl);
        AutoBed->setObjectName(QStringLiteral("AutoBed"));
        AutoBed->setGeometry(QRect(920, 20, 141, 61));
        AutoBed->setFont(font12);
        AutoBed->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        AutoBedLevel = new QPushButton(AutoBed);
        AutoBedLevel->setObjectName(QStringLiteral("AutoBedLevel"));
        AutoBedLevel->setGeometry(QRect(15, 20, 110, 30));
        AutoBedLevel->setFont(font9);
        LiftSeqTime = new QGroupBox(groupBox_ZMachineControl);
        LiftSeqTime->setObjectName(QStringLiteral("LiftSeqTime"));
        LiftSeqTime->setGeometry(QRect(800, 90, 261, 181));
        LiftSeqTime->setFont(font12);
        LiftSeqTime->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        ZLiftdelay = new QLineEdit(LiftSeqTime);
        ZLiftdelay->setObjectName(QStringLiteral("ZLiftdelay"));
        ZLiftdelay->setGeometry(QRect(10, 50, 111, 41));
        ZLiftdelay->setFont(font13);
        label_9 = new QLabel(LiftSeqTime);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 20, 100, 20));
        label_9->setFont(font6);
        PrintingDelay = new QLineEdit(LiftSeqTime);
        PrintingDelay->setObjectName(QStringLiteral("PrintingDelay"));
        PrintingDelay->setGeometry(QRect(140, 50, 111, 41));
        PrintingDelay->setFont(font13);
        label_10 = new QLabel(LiftSeqTime);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(138, 20, 120, 20));
        label_10->setFont(font6);
        groupBox_2 = new QGroupBox(LiftSeqTime);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 100, 241, 71));
        groupBox_2->setFont(font10);
        AutoHoming = new QRadioButton(groupBox_2);
        AutoHoming->setObjectName(QStringLiteral("AutoHoming"));
        AutoHoming->setGeometry(QRect(10, 20, 100, 17));
        AutoHoming->setChecked(true);
        ManualHoming = new QRadioButton(groupBox_2);
        ManualHoming->setObjectName(QStringLiteral("ManualHoming"));
        ManualHoming->setGeometry(QRect(10, 45, 100, 17));
        HomeDelay = new QLabel(groupBox_2);
        HomeDelay->setObjectName(QStringLiteral("HomeDelay"));
        HomeDelay->setEnabled(false);
        HomeDelay->setGeometry(QRect(130, 5, 90, 18));
        QFont font14;
        font14.setFamily(QStringLiteral("Arial"));
        font14.setPointSize(8);
        HomeDelay->setFont(font14);
        HomingDelay = new QLineEdit(groupBox_2);
        HomingDelay->setObjectName(QStringLiteral("HomingDelay"));
        HomingDelay->setEnabled(false);
        HomingDelay->setGeometry(QRect(125, 30, 100, 30));
        HomingDelay->setFont(font13);
        ComPort = new QLabel(groupBox_ZMachineControl);
        ComPort->setObjectName(QStringLiteral("ComPort"));
        ComPort->setGeometry(QRect(10, 16, 101, 50));
        sizePolicy1.setHeightForWidth(ComPort->sizePolicy().hasHeightForWidth());
        ComPort->setSizePolicy(sizePolicy1);
        ComPort->setMinimumSize(QSize(0, 30));
        ComPort->setFont(font8);
        ComPort->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        SerialPort = new QComboBox(groupBox_ZMachineControl);
        SerialPort->setObjectName(QStringLiteral("SerialPort"));
        SerialPort->setEnabled(false);
        SerialPort->setGeometry(QRect(80, 26, 141, 30));
        sizePolicy8.setHeightForWidth(SerialPort->sizePolicy().hasHeightForWidth());
        SerialPort->setSizePolicy(sizePolicy8);
        SerialPort->setMinimumSize(QSize(0, 30));
        SerialPort->setFont(font6);
        BoardStatus = new QLabel(groupBox_ZMachineControl);
        BoardStatus->setObjectName(QStringLiteral("BoardStatus"));
        BoardStatus->setGeometry(QRect(50, 60, 115, 31));
        BoardStatus->setFont(font8);
        BoardStatus->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        label_3 = new QLabel(groupBox_ZMachineControl);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 125, 111, 31));
        label_3->setFont(font8);
        SaveMacProfile = new QPushButton(groupBox_ZMachineControl);
        SaveMacProfile->setObjectName(QStringLiteral("SaveMacProfile"));
        SaveMacProfile->setGeometry(QRect(10, 200, 95, 31));
        SaveMacProfile->setFont(font6);
        LoadMacProfile = new QPushButton(groupBox_ZMachineControl);
        LoadMacProfile->setObjectName(QStringLiteral("LoadMacProfile"));
        LoadMacProfile->setGeometry(QRect(136, 200, 95, 31));
        LoadMacProfile->setFont(font6);
        ProfileName = new QPlainTextEdit(groupBox_ZMachineControl);
        ProfileName->setObjectName(QStringLiteral("ProfileName"));
        ProfileName->setGeometry(QRect(10, 160, 221, 31));
        ProfileName->setFont(font8);
        ProfileName->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));

        gridLayout_12->addWidget(groupBox_ZMachineControl, 0, 1, 1, 1);

        stackedWidget->addWidget(ZMachineControl);

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

        stackedWidget->setCurrentIndex(0);
        patternMode_stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DLPJGroup", nullptr));
        connectButton->setText(QString());
        startPatSequence_Button->setText(QString());
        pausePatSequence_Button->setText(QString());
        stopPatSequence_Button->setText(QString());
        pushButton_patternMode->setText(QApplication::translate("MainWindow", "Pattern \n"
" Mode", nullptr));
        pushButton_LEDDriver->setText(QApplication::translate("MainWindow", "LED Driver", nullptr));
        pushButton_ZMachineControl->setText(QApplication::translate("MainWindow", "Z Control", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Time -", nullptr));
        StartTime->setText(QApplication::translate("MainWindow", "00:00:00", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "/", nullptr));
        TotalTime->setText(QApplication::translate("MainWindow", "00:00:00", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Pattern Menu", nullptr));
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
#ifndef QT_NO_TOOLTIP
        saveButton_patternSettings->setToolTip(QApplication::translate("MainWindow", "Save settings to a file", nullptr));
#endif // QT_NO_TOOLTIP
        saveButton_patternSettings->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_TOOLTIP
        loadButton_patternSettings->setToolTip(QApplication::translate("MainWindow", "Load settings from a file", nullptr));
#endif // QT_NO_TOOLTIP
        loadButton_patternSettings->setText(QApplication::translate("MainWindow", "Load", nullptr));
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
        groupBox_PatternMode->setTitle(QApplication::translate("MainWindow", "Pattern Mode", nullptr));
        groupBox_PatternImage->setTitle(QString());
        ptnSetting_groupBox->setTitle(QApplication::translate("MainWindow", "Pattern -", nullptr));
        groupBox_PatternIndex->setTitle(QApplication::translate("MainWindow", "Index", nullptr));
        PatternIndex->setText(QString());
        groupBox_Timing->setTitle(QApplication::translate("MainWindow", "Timing (us)", nullptr));
        exposure_lineEdit->setText(QString());
        label_Exposure->setText(QApplication::translate("MainWindow", "Exposure", nullptr));
        label_DarkTime->setText(QApplication::translate("MainWindow", "Dark Time", nullptr));
        UpdateTotalTime->setText(QApplication::translate("MainWindow", "Update", nullptr));
        triggerIn_checkBox->setText(QApplication::translate("MainWindow", "Trigger Input", nullptr));
        label_TrigOut1->setText(QApplication::translate("MainWindow", "      Trigger Out 1", nullptr));
        triggerOut2_checkBox->setText(QApplication::translate("MainWindow", "Trigger Out 2", nullptr));
        groupBox_LEDDriver->setTitle(QApplication::translate("MainWindow", "LED Driver", nullptr));
        groupBox_LEDDriverStatus->setTitle(QApplication::translate("MainWindow", "Status", nullptr));
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
        label_LEDDriverStatus->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "Status", nullptr));
        groupBox_ZMachineControl->setTitle(QApplication::translate("MainWindow", "Z Machine Control", nullptr));
        PrinterBoard->setTitle(QApplication::translate("MainWindow", "3D Printer Board", nullptr));
        Moveup50->setText(QApplication::translate("MainWindow", "50 mm", nullptr));
        AutoHome->setText(QApplication::translate("MainWindow", "Auto Home", nullptr));
        Movedown1->setText(QApplication::translate("MainWindow", "1 mm", nullptr));
        Movedown100->setText(QApplication::translate("MainWindow", "100 mm", nullptr));
        Moveup100->setText(QApplication::translate("MainWindow", "100 mm", nullptr));
        Moveup1->setText(QApplication::translate("MainWindow", "1 mm", nullptr));
        Moveup01->setText(QApplication::translate("MainWindow", "0.1 mm", nullptr));
        Movedown10->setText(QApplication::translate("MainWindow", "10 mm", nullptr));
        Moveup10->setText(QApplication::translate("MainWindow", "10 mm", nullptr));
        label->setText(QApplication::translate("MainWindow", "Move Up", nullptr));
        Movedown50->setText(QApplication::translate("MainWindow", "50 mm", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Move Down", nullptr));
        Movedown01->setText(QApplication::translate("MainWindow", "0.1 mm", nullptr));
        Gcode->setTitle(QApplication::translate("MainWindow", "Gcode", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Start of the print", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "End of the print", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Start of the Layer", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "End of the Layer", nullptr));
        ManualGcode_GroupBox->setTitle(QApplication::translate("MainWindow", "Manual Gcode Command", nullptr));
        SendManualGcode->setText(QApplication::translate("MainWindow", "Send", nullptr));
        ClearManualGcode->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        MotorControl->setTitle(QApplication::translate("MainWindow", "Motor Control", nullptr));
        MotorConDisable->setText(QApplication::translate("MainWindow", "Disable", nullptr));
        AutoBed->setTitle(QApplication::translate("MainWindow", "AutoBed Level", nullptr));
        AutoBedLevel->setText(QApplication::translate("MainWindow", "AutoBed Level", nullptr));
        LiftSeqTime->setTitle(QApplication::translate("MainWindow", "Lift / Sequence Time", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Z Lift Time (ms)", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Printing Delay (ms)", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Auto Homing", nullptr));
        AutoHoming->setText(QApplication::translate("MainWindow", "Auto Homing", nullptr));
        ManualHoming->setText(QApplication::translate("MainWindow", "Manual Homing", nullptr));
        HomeDelay->setText(QApplication::translate("MainWindow", "Homing Delay (ms)", nullptr));
        ComPort->setText(QApplication::translate("MainWindow", "Com Port", nullptr));
        BoardStatus->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Machine Profile", nullptr));
        SaveMacProfile->setText(QApplication::translate("MainWindow", "Save Profile", nullptr));
        LoadMacProfile->setText(QApplication::translate("MainWindow", "Load Profile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
