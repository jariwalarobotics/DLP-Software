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
    QHBoxLayout *horizontalLayout_25;
    QFrame *frame_common;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_40;
    QSpacerItem *verticalSpacer_26;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *addPatternsButton;
    QPushButton *removePatternsButton;
    QPushButton *selectAllButton;
    QGroupBox *LiftSeqTime;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_7;
    QPushButton *UpdateTotalTime;
    QGridLayout *gridLayout_36;
    QLabel *label_11;
    QLabel *label_10;
    QLineEdit *PrintingDelay;
    QLabel *label_9;
    QLineEdit *ZLiftdelayBase;
    QLineEdit *ZLiftdelayNormal;
    QGridLayout *gridLayout_39;
    QLabel *label_Exposure;
    QLineEdit *exposure_lineEdit;
    QLabel *label_Exposure_2;
    QLineEdit *BeforeZTime_lineEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_16;
    QLabel *HomeDelay;
    QLineEdit *HomingDelay;
    QRadioButton *ManualHoming;
    QRadioButton *AutoHoming;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_18;
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
    QScrollArea *waveFormArea;
    QWidget *scrollAreaWidgetContents_4;
    QWidget *LEDDriverPage;
    QGridLayout *gridLayout_9;
    QFrame *frame_LedDriver;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_LEDDriver;
    QVBoxLayout *verticalLayout_17;
    QGridLayout *gridLayout_8;
    QTextEdit *USBDevicePath_TextEdit;
    QLabel *label_ReadBuffer;
    QLabel *USBDevicePath;
    QPushButton *pushButton_RestartLEDDriver;
    QTextEdit *Text_Readbuffer;
    QLabel *label_14;
    QLabel *label_LEDDriverStatus;
    QGridLayout *gridLayout_13;
    QVBoxLayout *verticalLayout_11;
    QCheckBox *checkBox_InternalInitialization;
    QCheckBox *checkBox_LEDTempOK;
    QCheckBox *checkBox_DMDTempOK;
    QCheckBox *checkBox_BoardTempOK;
    QCheckBox *checkBox_HardwareOK;
    QCheckBox *checkBox_IntensityCalOK;
    QCheckBox *checkBox_WriteProtection;
    QCheckBox *checkBox_IntensityModInstall;
    QLabel *label_IntensityGain;
    QLabel *label_CycleTime;
    QTextBrowser *LEDCurrent_text;
    QLabel *label_IntensityOffset;
    QLabel *label_LEDCurrent;
    QLabel *label_BoardTemp;
    QLabel *label_BoardTempMax;
    QLabel *label_LEDTempMax;
    QLabel *label_LEDCurrentMax;
    QTextBrowser *LEDTempMax_text;
    QTextBrowser *DMDTempMax_text;
    QTextBrowser *Intensity_offset_text;
    QTextBrowser *BoardTempMax_text;
    QTextBrowser *LEDCurrentMax_text;
    QLabel *label_DMDTempMax;
    QTextBrowser *IntensityGain_text;
    QSpacerItem *horizontalSpacer_10;
    QTextBrowser *LEDTemp_text;
    QLabel *label_LEDSerial;
    QTextBrowser *Intensity_text;
    QTextBrowser *CycleTime_Text;
    QTextBrowser *LEDSerial_text;
    QLabel *label_Intensity;
    QTextBrowser *IntensityVoltage_text;
    QLabel *label_LEDVoltage;
    QSpacerItem *horizontalSpacer_9;
    QLabel *Label_DMDTemp;
    QTextBrowser *BoardTemp_text;
    QTextBrowser *LEDVoltage_text;
    QLabel *label_IntensityVoltage;
    QTextBrowser *DMDTemp_text;
    QLabel *label_LEDTemp;
    QLabel *label_LESerial;
    QTextBrowser *LESerial_text;
    QGridLayout *gridLayout_14;
    QLineEdit *Intensity_lineEdit;
    QLabel *label_Intensity2;
    QLabel *label_DMDFanSpeed;
    QLabel *label_LEDFanSpeed;
    QLabel *label_PCBFanSpeed;
    QTextBrowser *LEDFanSpeed_text;
    QTextBrowser *DMDFanSpeed_text;
    QTextBrowser *PCBFanSpeed_text;
    QPushButton *pushButton_SetIntensity;
    QGroupBox *groupBox_8;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_45;
    QLabel *label_13;
    QLineEdit *MidLayerCount;
    QLabel *label_15;
    QLineEdit *MidLayerIntensity;
    QGroupBox *groupBox_7;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_21;
    QGridLayout *gridLayout_44;
    QLabel *label_6;
    QLineEdit *BaseLayerCount;
    QLabel *label_7;
    QLineEdit *BaseLayerIntensity;
    QSpacerItem *verticalSpacer_7;
    QGridLayout *gridLayout_15;
    QLabel *label_LEDCurrent2;
    QPushButton *pushButton_SetLEDCurrent;
    QPushButton *pushButton_LEDPWMON_OFF;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *LEDCurrent_lineEdit;
    QSpacerItem *horizontalSpacer_13;
    QCheckBox *checkBox_IntensityRegEnable;
    QPushButton *pushButton_EnableIntensityReg;
    QWidget *ZMachineControl;
    QGridLayout *gridLayout_2;
    QFrame *frame_ZMavhineControl;
    QGridLayout *gridLayout_12;
    QGroupBox *groupBox_ZMachineControl;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_37;
    QSpacerItem *verticalSpacer_25;
    QComboBox *SerialPort;
    QLabel *ComPort;
    QLabel *label_5;
    QLabel *BoardStatus;
    QComboBox *Baudrate;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QGridLayout *gridLayout_38;
    QPushButton *LoadMacProfile;
    QTextBrowser *ProfileName;
    QLabel *label_21;
    QPushButton *SaveMacProfile;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_41;
    QVBoxLayout *verticalLayout_4;
    QPushButton *AutoHome;
    QPushButton *Moveup01;
    QLabel *label_22;
    QPushButton *Moveup100;
    QPushButton *Moveup10;
    QPushButton *Moveup1;
    QPushButton *Movedown10;
    QPushButton *Movedown01;
    QPushButton *Movedown1;
    QLabel *label_23;
    QPushButton *Movedown100;
    QPushButton *Moveup50;
    QPushButton *Movedown50;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_12;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_13;
    QTextEdit *StartPrintGcode;
    QTextEdit *EndPrintGcode;
    QTextEdit *EndBaseLayerGcode;
    QTextEdit *EndLayerGcode;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *MotorControl;
    QVBoxLayout *verticalLayout_6;
    QPushButton *MotorConDisable;
    QGroupBox *LayerCount;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *EnableLayer;
    QGridLayout *gridLayout_42;
    QLabel *label_startlayer;
    QLineEdit *EndLayerCount;
    QLabel *label_EndLayer;
    QLineEdit *StartLayerCount;
    QGroupBox *ManualGcode_GroupBox;
    QVBoxLayout *verticalLayout_10;
    QTextEdit *ManualGcode;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *SendManualGcode;
    QPushButton *ClearManualGcode;
    QWidget *SLCFileControl;
    QGridLayout *gridLayout_18;
    QFrame *frame_SCLFileControl;
    QGridLayout *gridLayout_17;
    QGroupBox *groupBox_SLCFileConrol;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_4;
    QPushButton *LoadSlcFile;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *connectButton;
    QPushButton *startPatSequence_Button;
    QPushButton *pausePatSequence_Button;
    QPushButton *stopPatSequence_Button;
    QPushButton *pushButton_patternMode;
    QPushButton *pushButton_LEDDriver;
    QPushButton *pushButton_ZMachineControl;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QLabel *StartTime;
    QLabel *label_12;
    QLabel *TotalTime;
    QLabel *label_16;
    QLabel *PatternIndex;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1042, 704);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 1024, 660));
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1022, 650));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        scrollAreaWidgetContents->setMaximumSize(QSize(16777215, 650));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        frame_common = new QFrame(scrollAreaWidgetContents);
        frame_common->setObjectName(QStringLiteral("frame_common"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_common->sizePolicy().hasHeightForWidth());
        frame_common->setSizePolicy(sizePolicy2);
        frame_common->setMinimumSize(QSize(0, 0));
        frame_common->setStyleSheet(QLatin1String("QFrame{background-image : url(:/images/img.jpg);\n"
"border:1px solid black}"));
        frame_common->setFrameShape(QFrame::StyledPanel);
        frame_common->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_common);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(5, 9, 5, 9);
        groupBox = new QGroupBox(frame_common);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(60);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        groupBox->setMinimumSize(QSize(0, 60));
        groupBox->setMaximumSize(QSize(220, 120));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(9);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(0);
        gridLayout_5->setVerticalSpacing(6);
        gridLayout_5->setContentsMargins(5, 0, 5, 0);
        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_3, 1, 0, 1, 1);

        gridLayout_40 = new QGridLayout();
        gridLayout_40->setSpacing(6);
        gridLayout_40->setObjectName(QStringLiteral("gridLayout_40"));
        verticalSpacer_26 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_40->addItem(verticalSpacer_26, 0, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        addPatternsButton = new QPushButton(groupBox);
        addPatternsButton->setObjectName(QStringLiteral("addPatternsButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(addPatternsButton->sizePolicy().hasHeightForWidth());
        addPatternsButton->setSizePolicy(sizePolicy4);
        addPatternsButton->setMinimumSize(QSize(40, 35));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/Icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addPatternsButton->setIcon(icon1);

        horizontalLayout_5->addWidget(addPatternsButton);

        removePatternsButton = new QPushButton(groupBox);
        removePatternsButton->setObjectName(QStringLiteral("removePatternsButton"));
        removePatternsButton->setEnabled(false);
        sizePolicy4.setHeightForWidth(removePatternsButton->sizePolicy().hasHeightForWidth());
        removePatternsButton->setSizePolicy(sizePolicy4);
        removePatternsButton->setMinimumSize(QSize(40, 35));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        removePatternsButton->setIcon(icon2);

        horizontalLayout_5->addWidget(removePatternsButton);

        selectAllButton = new QPushButton(groupBox);
        selectAllButton->setObjectName(QStringLiteral("selectAllButton"));
        selectAllButton->setEnabled(false);
        sizePolicy4.setHeightForWidth(selectAllButton->sizePolicy().hasHeightForWidth());
        selectAllButton->setSizePolicy(sizePolicy4);
        selectAllButton->setMinimumSize(QSize(40, 35));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/Icons/select.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectAllButton->setIcon(icon3);

        horizontalLayout_5->addWidget(selectAllButton);


        gridLayout_40->addLayout(horizontalLayout_5, 1, 0, 1, 2);


        gridLayout_5->addLayout(gridLayout_40, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        LiftSeqTime = new QGroupBox(frame_common);
        LiftSeqTime->setObjectName(QStringLiteral("LiftSeqTime"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(LiftSeqTime->sizePolicy().hasHeightForWidth());
        LiftSeqTime->setSizePolicy(sizePolicy5);
        LiftSeqTime->setMinimumSize(QSize(220, 0));
        LiftSeqTime->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        LiftSeqTime->setFont(font1);
        LiftSeqTime->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        gridLayout_4 = new QGridLayout(LiftSeqTime);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(5, 9, 5, -1);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        UpdateTotalTime = new QPushButton(LiftSeqTime);
        UpdateTotalTime->setObjectName(QStringLiteral("UpdateTotalTime"));
        UpdateTotalTime->setEnabled(true);
        sizePolicy1.setHeightForWidth(UpdateTotalTime->sizePolicy().hasHeightForWidth());
        UpdateTotalTime->setSizePolicy(sizePolicy1);
        UpdateTotalTime->setMinimumSize(QSize(125, 35));
        UpdateTotalTime->setMaximumSize(QSize(95, 16777215));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(10);
        UpdateTotalTime->setFont(font2);
        UpdateTotalTime->setMouseTracking(true);
        UpdateTotalTime->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"}"));
        UpdateTotalTime->setCheckable(false);

        gridLayout_7->addWidget(UpdateTotalTime, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_7, 2, 0, 1, 1);

        gridLayout_36 = new QGridLayout();
        gridLayout_36->setSpacing(9);
        gridLayout_36->setObjectName(QStringLiteral("gridLayout_36"));
        gridLayout_36->setContentsMargins(-1, 9, -1, 9);
        label_11 = new QLabel(LiftSeqTime);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font2);
        label_11->setStyleSheet(QLatin1String("QLabel{ border: 0px ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));

        gridLayout_36->addWidget(label_11, 4, 0, 1, 1);

        label_10 = new QLabel(LiftSeqTime);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font2);
        label_10->setStyleSheet(QLatin1String("QLabel{ border: 0px ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));

        gridLayout_36->addWidget(label_10, 1, 0, 1, 1);

        PrintingDelay = new QLineEdit(LiftSeqTime);
        PrintingDelay->setObjectName(QStringLiteral("PrintingDelay"));
        sizePolicy5.setHeightForWidth(PrintingDelay->sizePolicy().hasHeightForWidth());
        PrintingDelay->setSizePolicy(sizePolicy5);
        PrintingDelay->setMinimumSize(QSize(0, 35));
        PrintingDelay->setMaximumSize(QSize(16777215, 35));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(11);
        PrintingDelay->setFont(font3);

        gridLayout_36->addWidget(PrintingDelay, 1, 1, 1, 1);

        label_9 = new QLabel(LiftSeqTime);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setEnabled(false);
        label_9->setFont(font2);
        label_9->setStyleSheet(QLatin1String("QLabel{ border: 0px ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));

        gridLayout_36->addWidget(label_9, 2, 0, 1, 1);

        ZLiftdelayBase = new QLineEdit(LiftSeqTime);
        ZLiftdelayBase->setObjectName(QStringLiteral("ZLiftdelayBase"));
        ZLiftdelayBase->setEnabled(false);
        sizePolicy5.setHeightForWidth(ZLiftdelayBase->sizePolicy().hasHeightForWidth());
        ZLiftdelayBase->setSizePolicy(sizePolicy5);
        ZLiftdelayBase->setMinimumSize(QSize(0, 35));
        ZLiftdelayBase->setMaximumSize(QSize(16777215, 35));
        ZLiftdelayBase->setFont(font3);

        gridLayout_36->addWidget(ZLiftdelayBase, 2, 1, 1, 1);

        ZLiftdelayNormal = new QLineEdit(LiftSeqTime);
        ZLiftdelayNormal->setObjectName(QStringLiteral("ZLiftdelayNormal"));
        sizePolicy5.setHeightForWidth(ZLiftdelayNormal->sizePolicy().hasHeightForWidth());
        ZLiftdelayNormal->setSizePolicy(sizePolicy5);
        ZLiftdelayNormal->setMinimumSize(QSize(0, 35));
        ZLiftdelayNormal->setMaximumSize(QSize(16777215, 35));
        ZLiftdelayNormal->setFont(font3);

        gridLayout_36->addWidget(ZLiftdelayNormal, 4, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_36, 1, 0, 1, 1);

        gridLayout_39 = new QGridLayout();
        gridLayout_39->setSpacing(9);
        gridLayout_39->setObjectName(QStringLiteral("gridLayout_39"));
        gridLayout_39->setContentsMargins(0, 9, -1, 9);
        label_Exposure = new QLabel(LiftSeqTime);
        label_Exposure->setObjectName(QStringLiteral("label_Exposure"));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setWeight(50);
        label_Exposure->setFont(font4);
        label_Exposure->setStyleSheet(QLatin1String("QLabel{ border: 0px ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        label_Exposure->setWordWrap(true);

        gridLayout_39->addWidget(label_Exposure, 0, 0, 1, 1);

        exposure_lineEdit = new QLineEdit(LiftSeqTime);
        exposure_lineEdit->setObjectName(QStringLiteral("exposure_lineEdit"));
        sizePolicy5.setHeightForWidth(exposure_lineEdit->sizePolicy().hasHeightForWidth());
        exposure_lineEdit->setSizePolicy(sizePolicy5);
        exposure_lineEdit->setMinimumSize(QSize(0, 35));
        exposure_lineEdit->setMaximumSize(QSize(16777215, 35));
        exposure_lineEdit->setFont(font3);

        gridLayout_39->addWidget(exposure_lineEdit, 0, 1, 1, 1);

        label_Exposure_2 = new QLabel(LiftSeqTime);
        label_Exposure_2->setObjectName(QStringLiteral("label_Exposure_2"));
        label_Exposure_2->setMinimumSize(QSize(105, 0));
        label_Exposure_2->setMaximumSize(QSize(180, 16777215));
        label_Exposure_2->setFont(font4);
        label_Exposure_2->setStyleSheet(QLatin1String("QLabel{ border: 0px ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        label_Exposure_2->setWordWrap(true);

        gridLayout_39->addWidget(label_Exposure_2, 1, 0, 1, 1);

        BeforeZTime_lineEdit = new QLineEdit(LiftSeqTime);
        BeforeZTime_lineEdit->setObjectName(QStringLiteral("BeforeZTime_lineEdit"));
        sizePolicy5.setHeightForWidth(BeforeZTime_lineEdit->sizePolicy().hasHeightForWidth());
        BeforeZTime_lineEdit->setSizePolicy(sizePolicy5);
        BeforeZTime_lineEdit->setMinimumSize(QSize(0, 35));
        BeforeZTime_lineEdit->setMaximumSize(QSize(16777215, 35));
        BeforeZTime_lineEdit->setFont(font3);

        gridLayout_39->addWidget(BeforeZTime_lineEdit, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_39, 0, 0, 1, 1);


        verticalLayout_2->addWidget(LiftSeqTime);

        groupBox_2 = new QGroupBox(frame_common);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        groupBox_2->setMinimumSize(QSize(220, 0));
        groupBox_2->setMaximumSize(QSize(200, 16777215));
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        HomeDelay = new QLabel(groupBox_2);
        HomeDelay->setObjectName(QStringLiteral("HomeDelay"));
        HomeDelay->setEnabled(false);
        HomeDelay->setFont(font);
        HomeDelay->setStyleSheet(QLatin1String("QLabel{ border: 0px ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));

        gridLayout_16->addWidget(HomeDelay, 3, 0, 1, 1);

        HomingDelay = new QLineEdit(groupBox_2);
        HomingDelay->setObjectName(QStringLiteral("HomingDelay"));
        HomingDelay->setEnabled(false);
        sizePolicy1.setHeightForWidth(HomingDelay->sizePolicy().hasHeightForWidth());
        HomingDelay->setSizePolicy(sizePolicy1);
        HomingDelay->setMinimumSize(QSize(0, 31));
        HomingDelay->setFont(font3);

        gridLayout_16->addWidget(HomingDelay, 4, 0, 1, 1);

        ManualHoming = new QRadioButton(groupBox_2);
        ManualHoming->setObjectName(QStringLiteral("ManualHoming"));
        sizePolicy5.setHeightForWidth(ManualHoming->sizePolicy().hasHeightForWidth());
        ManualHoming->setSizePolicy(sizePolicy5);
        ManualHoming->setFont(font);
        ManualHoming->setStyleSheet(QLatin1String("QRadioButton{\n"
"	color:rgb(0,150,150);\n"
"}"));
        ManualHoming->setChecked(true);

        gridLayout_16->addWidget(ManualHoming, 2, 0, 1, 1);

        AutoHoming = new QRadioButton(groupBox_2);
        AutoHoming->setObjectName(QStringLiteral("AutoHoming"));
        sizePolicy5.setHeightForWidth(AutoHoming->sizePolicy().hasHeightForWidth());
        AutoHoming->setSizePolicy(sizePolicy5);
        AutoHoming->setFont(font2);
        AutoHoming->setStyleSheet(QLatin1String("QRadioButton{\n"
"	color:rgb(0,150,150);\n"
"}"));
        AutoHoming->setChecked(false);

        gridLayout_16->addWidget(AutoHoming, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_7, 4, 1, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_16, 1, 1, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_17, 2, 1, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_18, 3, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_16, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);


        horizontalLayout_25->addWidget(frame_common);

        stackedWidget = new QStackedWidget(scrollAreaWidgetContents);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        sizePolicy5.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy5);
        stackedWidget->setMinimumSize(QSize(350, 531));
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));
        stackedWidget->setStyleSheet(QStringLiteral("QStackedWidget{background-image : url(:/images/img.jpg);}"));
        patternModePage = new QWidget();
        patternModePage->setObjectName(QStringLiteral("patternModePage"));
        sizePolicy5.setHeightForWidth(patternModePage->sizePolicy().hasHeightForWidth());
        patternModePage->setSizePolicy(sizePolicy5);
        patternModePage->setMinimumSize(QSize(350, 0));
        patternModePage->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_3 = new QGridLayout(patternModePage);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_patternMode = new QFrame(patternModePage);
        frame_patternMode->setObjectName(QStringLiteral("frame_patternMode"));
        sizePolicy5.setHeightForWidth(frame_patternMode->sizePolicy().hasHeightForWidth());
        frame_patternMode->setSizePolicy(sizePolicy5);
        frame_patternMode->setMinimumSize(QSize(350, 541));
        frame_patternMode->setMaximumSize(QSize(16777215, 16777215));
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
        sizePolicy.setHeightForWidth(groupBox_PatternMode->sizePolicy().hasHeightForWidth());
        groupBox_PatternMode->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamily(QStringLiteral("Arial"));
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        groupBox_PatternMode->setFont(font5);
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
        sizePolicy5.setHeightForWidth(patternMode_stackedWidget->sizePolicy().hasHeightForWidth());
        patternMode_stackedWidget->setSizePolicy(sizePolicy5);
        patternMode_stackedWidget->setMinimumSize(QSize(650, 514));
        patternMode_stackedWidget->setStyleSheet(QStringLiteral("QStackedWidget{border:0px}"));
        patternDesignPage = new QWidget();
        patternDesignPage->setObjectName(QStringLiteral("patternDesignPage"));
        sizePolicy5.setHeightForWidth(patternDesignPage->sizePolicy().hasHeightForWidth());
        patternDesignPage->setSizePolicy(sizePolicy5);
        patternDesignPage->setMinimumSize(QSize(0, 0));
        gridLayout_31 = new QGridLayout(patternDesignPage);
        gridLayout_31->setSpacing(6);
        gridLayout_31->setContentsMargins(11, 11, 11, 11);
        gridLayout_31->setObjectName(QStringLiteral("gridLayout_31"));
        gridLayout_31->setContentsMargins(0, 0, 0, 0);
        verticalLayout_37 = new QVBoxLayout();
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        waveFormArea = new QScrollArea(patternDesignPage);
        waveFormArea->setObjectName(QStringLiteral("waveFormArea"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(waveFormArea->sizePolicy().hasHeightForWidth());
        waveFormArea->setSizePolicy(sizePolicy6);
        waveFormArea->setMinimumSize(QSize(501, 431));
        waveFormArea->setMaximumSize(QSize(16777215, 16777215));
        waveFormArea->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        waveFormArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        waveFormArea->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 718, 519));
        waveFormArea->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_37->addWidget(waveFormArea);


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
        sizePolicy5.setHeightForWidth(frame_LedDriver->sizePolicy().hasHeightForWidth());
        frame_LedDriver->setSizePolicy(sizePolicy5);
        frame_LedDriver->setStyleSheet(QLatin1String("QFrame{background-image : url(:/images/img.jpg);\n"
"border:1px solid black}"));
        frame_LedDriver->setFrameShape(QFrame::StyledPanel);
        frame_LedDriver->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_LedDriver);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_LEDDriver = new QGroupBox(frame_LedDriver);
        groupBox_LEDDriver->setObjectName(QStringLiteral("groupBox_LEDDriver"));
        sizePolicy.setHeightForWidth(groupBox_LEDDriver->sizePolicy().hasHeightForWidth());
        groupBox_LEDDriver->setSizePolicy(sizePolicy);
        QFont font6;
        font6.setFamily(QStringLiteral("Arial"));
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        groupBox_LEDDriver->setFont(font6);
        groupBox_LEDDriver->setStyleSheet(QLatin1String("QGroupBox{ border: 1.5px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        verticalLayout_17 = new QVBoxLayout(groupBox_LEDDriver);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(12, 20, 12, 12);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(6);
        gridLayout_8->setContentsMargins(-1, -1, -1, 0);
        USBDevicePath_TextEdit = new QTextEdit(groupBox_LEDDriver);
        USBDevicePath_TextEdit->setObjectName(QStringLiteral("USBDevicePath_TextEdit"));
        USBDevicePath_TextEdit->setEnabled(true);
        sizePolicy5.setHeightForWidth(USBDevicePath_TextEdit->sizePolicy().hasHeightForWidth());
        USBDevicePath_TextEdit->setSizePolicy(sizePolicy5);
        USBDevicePath_TextEdit->setMinimumSize(QSize(550, 0));
        USBDevicePath_TextEdit->setMaximumSize(QSize(0, 30));
        USBDevicePath_TextEdit->setFont(font);
        USBDevicePath_TextEdit->setStyleSheet(QLatin1String("QTextEdit{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_8->addWidget(USBDevicePath_TextEdit, 1, 1, 1, 1);

        label_ReadBuffer = new QLabel(groupBox_LEDDriver);
        label_ReadBuffer->setObjectName(QStringLiteral("label_ReadBuffer"));
        label_ReadBuffer->setMaximumSize(QSize(85, 35));
        label_ReadBuffer->setFont(font2);
        label_ReadBuffer->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_8->addWidget(label_ReadBuffer, 3, 0, 1, 1);

        USBDevicePath = new QLabel(groupBox_LEDDriver);
        USBDevicePath->setObjectName(QStringLiteral("USBDevicePath"));
        sizePolicy5.setHeightForWidth(USBDevicePath->sizePolicy().hasHeightForWidth());
        USBDevicePath->setSizePolicy(sizePolicy5);
        USBDevicePath->setMinimumSize(QSize(0, 30));
        USBDevicePath->setMaximumSize(QSize(16777215, 30));
        USBDevicePath->setFont(font2);
        USBDevicePath->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_8->addWidget(USBDevicePath, 1, 0, 1, 1);

        pushButton_RestartLEDDriver = new QPushButton(groupBox_LEDDriver);
        pushButton_RestartLEDDriver->setObjectName(QStringLiteral("pushButton_RestartLEDDriver"));
        pushButton_RestartLEDDriver->setMaximumSize(QSize(125, 35));
        QFont font7;
        font7.setFamily(QStringLiteral("Arial"));
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setWeight(75);
        pushButton_RestartLEDDriver->setFont(font7);
        pushButton_RestartLEDDriver->setStyleSheet(QLatin1String("QPushButtonl{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));

        gridLayout_8->addWidget(pushButton_RestartLEDDriver, 3, 5, 1, 1);

        Text_Readbuffer = new QTextEdit(groupBox_LEDDriver);
        Text_Readbuffer->setObjectName(QStringLiteral("Text_Readbuffer"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(50);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(Text_Readbuffer->sizePolicy().hasHeightForWidth());
        Text_Readbuffer->setSizePolicy(sizePolicy7);
        Text_Readbuffer->setMinimumSize(QSize(480, 0));
        Text_Readbuffer->setMaximumSize(QSize(990, 35));
        Text_Readbuffer->setFont(font);
        Text_Readbuffer->setStyleSheet(QLatin1String("QTextEdit{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_8->addWidget(Text_Readbuffer, 3, 1, 1, 3);

        label_14 = new QLabel(groupBox_LEDDriver);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(0, 30));
        label_14->setMaximumSize(QSize(150, 16777215));
        label_14->setFont(font2);
        label_14->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_8->addWidget(label_14, 0, 0, 1, 1);

        label_LEDDriverStatus = new QLabel(groupBox_LEDDriver);
        label_LEDDriverStatus->setObjectName(QStringLiteral("label_LEDDriverStatus"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(label_LEDDriverStatus->sizePolicy().hasHeightForWidth());
        label_LEDDriverStatus->setSizePolicy(sizePolicy8);
        label_LEDDriverStatus->setMinimumSize(QSize(120, 0));
        label_LEDDriverStatus->setMaximumSize(QSize(250, 16777215));
        label_LEDDriverStatus->setFont(font2);
        label_LEDDriverStatus->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_8->addWidget(label_LEDDriverStatus, 0, 1, 1, 1);


        verticalLayout_17->addLayout(gridLayout_8);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        checkBox_InternalInitialization = new QCheckBox(groupBox_LEDDriver);
        checkBox_InternalInitialization->setObjectName(QStringLiteral("checkBox_InternalInitialization"));
        checkBox_InternalInitialization->setEnabled(false);
        sizePolicy5.setHeightForWidth(checkBox_InternalInitialization->sizePolicy().hasHeightForWidth());
        checkBox_InternalInitialization->setSizePolicy(sizePolicy5);
        checkBox_InternalInitialization->setFont(font);

        verticalLayout_11->addWidget(checkBox_InternalInitialization);

        checkBox_LEDTempOK = new QCheckBox(groupBox_LEDDriver);
        checkBox_LEDTempOK->setObjectName(QStringLiteral("checkBox_LEDTempOK"));
        checkBox_LEDTempOK->setEnabled(false);
        sizePolicy5.setHeightForWidth(checkBox_LEDTempOK->sizePolicy().hasHeightForWidth());
        checkBox_LEDTempOK->setSizePolicy(sizePolicy5);
        checkBox_LEDTempOK->setFont(font);

        verticalLayout_11->addWidget(checkBox_LEDTempOK);

        checkBox_DMDTempOK = new QCheckBox(groupBox_LEDDriver);
        checkBox_DMDTempOK->setObjectName(QStringLiteral("checkBox_DMDTempOK"));
        checkBox_DMDTempOK->setEnabled(false);
        sizePolicy5.setHeightForWidth(checkBox_DMDTempOK->sizePolicy().hasHeightForWidth());
        checkBox_DMDTempOK->setSizePolicy(sizePolicy5);
        checkBox_DMDTempOK->setFont(font);

        verticalLayout_11->addWidget(checkBox_DMDTempOK);

        checkBox_BoardTempOK = new QCheckBox(groupBox_LEDDriver);
        checkBox_BoardTempOK->setObjectName(QStringLiteral("checkBox_BoardTempOK"));
        checkBox_BoardTempOK->setEnabled(false);
        sizePolicy5.setHeightForWidth(checkBox_BoardTempOK->sizePolicy().hasHeightForWidth());
        checkBox_BoardTempOK->setSizePolicy(sizePolicy5);
        checkBox_BoardTempOK->setFont(font);

        verticalLayout_11->addWidget(checkBox_BoardTempOK);

        checkBox_HardwareOK = new QCheckBox(groupBox_LEDDriver);
        checkBox_HardwareOK->setObjectName(QStringLiteral("checkBox_HardwareOK"));
        checkBox_HardwareOK->setEnabled(false);
        sizePolicy5.setHeightForWidth(checkBox_HardwareOK->sizePolicy().hasHeightForWidth());
        checkBox_HardwareOK->setSizePolicy(sizePolicy5);
        checkBox_HardwareOK->setFont(font);

        verticalLayout_11->addWidget(checkBox_HardwareOK);

        checkBox_IntensityCalOK = new QCheckBox(groupBox_LEDDriver);
        checkBox_IntensityCalOK->setObjectName(QStringLiteral("checkBox_IntensityCalOK"));
        checkBox_IntensityCalOK->setEnabled(false);
        sizePolicy5.setHeightForWidth(checkBox_IntensityCalOK->sizePolicy().hasHeightForWidth());
        checkBox_IntensityCalOK->setSizePolicy(sizePolicy5);
        checkBox_IntensityCalOK->setFont(font);

        verticalLayout_11->addWidget(checkBox_IntensityCalOK);

        checkBox_WriteProtection = new QCheckBox(groupBox_LEDDriver);
        checkBox_WriteProtection->setObjectName(QStringLiteral("checkBox_WriteProtection"));
        checkBox_WriteProtection->setEnabled(false);
        sizePolicy5.setHeightForWidth(checkBox_WriteProtection->sizePolicy().hasHeightForWidth());
        checkBox_WriteProtection->setSizePolicy(sizePolicy5);
        checkBox_WriteProtection->setFont(font);

        verticalLayout_11->addWidget(checkBox_WriteProtection);

        checkBox_IntensityModInstall = new QCheckBox(groupBox_LEDDriver);
        checkBox_IntensityModInstall->setObjectName(QStringLiteral("checkBox_IntensityModInstall"));
        checkBox_IntensityModInstall->setEnabled(false);
        sizePolicy5.setHeightForWidth(checkBox_IntensityModInstall->sizePolicy().hasHeightForWidth());
        checkBox_IntensityModInstall->setSizePolicy(sizePolicy5);
        checkBox_IntensityModInstall->setMinimumSize(QSize(135, 0));
        checkBox_IntensityModInstall->setFont(font);

        verticalLayout_11->addWidget(checkBox_IntensityModInstall);


        gridLayout_13->addLayout(verticalLayout_11, 0, 0, 6, 1);

        label_IntensityGain = new QLabel(groupBox_LEDDriver);
        label_IntensityGain->setObjectName(QStringLiteral("label_IntensityGain"));
        label_IntensityGain->setFont(font2);
        label_IntensityGain->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        gridLayout_13->addWidget(label_IntensityGain, 5, 1, 1, 1);

        label_CycleTime = new QLabel(groupBox_LEDDriver);
        label_CycleTime->setObjectName(QStringLiteral("label_CycleTime"));
        label_CycleTime->setFont(font2);
        label_CycleTime->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_13->addWidget(label_CycleTime, 5, 4, 1, 1);

        LEDCurrent_text = new QTextBrowser(groupBox_LEDDriver);
        LEDCurrent_text->setObjectName(QStringLiteral("LEDCurrent_text"));
        LEDCurrent_text->setEnabled(false);
        sizePolicy5.setHeightForWidth(LEDCurrent_text->sizePolicy().hasHeightForWidth());
        LEDCurrent_text->setSizePolicy(sizePolicy5);
        LEDCurrent_text->setMinimumSize(QSize(0, 25));
        LEDCurrent_text->setMaximumSize(QSize(200, 25));
        QFont font8;
        font8.setFamily(QStringLiteral("Arial"));
        LEDCurrent_text->setFont(font8);
        LEDCurrent_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(LEDCurrent_text, 4, 5, 1, 1);

        label_IntensityOffset = new QLabel(groupBox_LEDDriver);
        label_IntensityOffset->setObjectName(QStringLiteral("label_IntensityOffset"));
        label_IntensityOffset->setFont(font2);
        label_IntensityOffset->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        gridLayout_13->addWidget(label_IntensityOffset, 4, 1, 1, 1);

        label_LEDCurrent = new QLabel(groupBox_LEDDriver);
        label_LEDCurrent->setObjectName(QStringLiteral("label_LEDCurrent"));
        label_LEDCurrent->setFont(font2);
        label_LEDCurrent->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_13->addWidget(label_LEDCurrent, 4, 4, 1, 1);

        label_BoardTemp = new QLabel(groupBox_LEDDriver);
        label_BoardTemp->setObjectName(QStringLiteral("label_BoardTemp"));
        label_BoardTemp->setFont(font2);
        label_BoardTemp->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_13->addWidget(label_BoardTemp, 2, 4, 1, 1);

        label_BoardTempMax = new QLabel(groupBox_LEDDriver);
        label_BoardTempMax->setObjectName(QStringLiteral("label_BoardTempMax"));
        label_BoardTempMax->setFont(font);
        label_BoardTempMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        gridLayout_13->addWidget(label_BoardTempMax, 2, 1, 1, 1);

        label_LEDTempMax = new QLabel(groupBox_LEDDriver);
        label_LEDTempMax->setObjectName(QStringLiteral("label_LEDTempMax"));
        label_LEDTempMax->setFont(font);
        label_LEDTempMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        gridLayout_13->addWidget(label_LEDTempMax, 1, 1, 1, 1);

        label_LEDCurrentMax = new QLabel(groupBox_LEDDriver);
        label_LEDCurrentMax->setObjectName(QStringLiteral("label_LEDCurrentMax"));
        label_LEDCurrentMax->setFont(font);
        label_LEDCurrentMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        gridLayout_13->addWidget(label_LEDCurrentMax, 3, 1, 1, 1);

        LEDTempMax_text = new QTextBrowser(groupBox_LEDDriver);
        LEDTempMax_text->setObjectName(QStringLiteral("LEDTempMax_text"));
        LEDTempMax_text->setEnabled(false);
        sizePolicy5.setHeightForWidth(LEDTempMax_text->sizePolicy().hasHeightForWidth());
        LEDTempMax_text->setSizePolicy(sizePolicy5);
        LEDTempMax_text->setMinimumSize(QSize(0, 25));
        LEDTempMax_text->setMaximumSize(QSize(200, 25));
        QFont font9;
        font9.setFamily(QStringLiteral("Arial"));
        font9.setPointSize(8);
        LEDTempMax_text->setFont(font9);
        LEDTempMax_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(LEDTempMax_text, 1, 2, 1, 1);

        DMDTempMax_text = new QTextBrowser(groupBox_LEDDriver);
        DMDTempMax_text->setObjectName(QStringLiteral("DMDTempMax_text"));
        DMDTempMax_text->setEnabled(false);
        sizePolicy5.setHeightForWidth(DMDTempMax_text->sizePolicy().hasHeightForWidth());
        DMDTempMax_text->setSizePolicy(sizePolicy5);
        DMDTempMax_text->setMinimumSize(QSize(0, 25));
        DMDTempMax_text->setMaximumSize(QSize(200, 25));
        DMDTempMax_text->setFont(font9);
        DMDTempMax_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(DMDTempMax_text, 0, 2, 1, 1);

        Intensity_offset_text = new QTextBrowser(groupBox_LEDDriver);
        Intensity_offset_text->setObjectName(QStringLiteral("Intensity_offset_text"));
        Intensity_offset_text->setEnabled(false);
        sizePolicy5.setHeightForWidth(Intensity_offset_text->sizePolicy().hasHeightForWidth());
        Intensity_offset_text->setSizePolicy(sizePolicy5);
        Intensity_offset_text->setMinimumSize(QSize(0, 25));
        Intensity_offset_text->setMaximumSize(QSize(200, 35));
        Intensity_offset_text->setFont(font8);
        Intensity_offset_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(Intensity_offset_text, 4, 2, 1, 1);

        BoardTempMax_text = new QTextBrowser(groupBox_LEDDriver);
        BoardTempMax_text->setObjectName(QStringLiteral("BoardTempMax_text"));
        BoardTempMax_text->setEnabled(false);
        sizePolicy5.setHeightForWidth(BoardTempMax_text->sizePolicy().hasHeightForWidth());
        BoardTempMax_text->setSizePolicy(sizePolicy5);
        BoardTempMax_text->setMinimumSize(QSize(0, 25));
        BoardTempMax_text->setMaximumSize(QSize(200, 35));
        BoardTempMax_text->setFont(font9);
        BoardTempMax_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(BoardTempMax_text, 2, 2, 1, 1);

        LEDCurrentMax_text = new QTextBrowser(groupBox_LEDDriver);
        LEDCurrentMax_text->setObjectName(QStringLiteral("LEDCurrentMax_text"));
        LEDCurrentMax_text->setEnabled(false);
        sizePolicy5.setHeightForWidth(LEDCurrentMax_text->sizePolicy().hasHeightForWidth());
        LEDCurrentMax_text->setSizePolicy(sizePolicy5);
        LEDCurrentMax_text->setMinimumSize(QSize(0, 25));
        LEDCurrentMax_text->setMaximumSize(QSize(200, 35));
        LEDCurrentMax_text->setFont(font9);
        LEDCurrentMax_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(LEDCurrentMax_text, 3, 2, 1, 1);

        label_DMDTempMax = new QLabel(groupBox_LEDDriver);
        label_DMDTempMax->setObjectName(QStringLiteral("label_DMDTempMax"));
        label_DMDTempMax->setFont(font);
        label_DMDTempMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        gridLayout_13->addWidget(label_DMDTempMax, 0, 1, 1, 1);

        IntensityGain_text = new QTextBrowser(groupBox_LEDDriver);
        IntensityGain_text->setObjectName(QStringLiteral("IntensityGain_text"));
        IntensityGain_text->setEnabled(false);
        sizePolicy5.setHeightForWidth(IntensityGain_text->sizePolicy().hasHeightForWidth());
        IntensityGain_text->setSizePolicy(sizePolicy5);
        IntensityGain_text->setMinimumSize(QSize(0, 25));
        IntensityGain_text->setMaximumSize(QSize(200, 35));
        IntensityGain_text->setFont(font9);
        IntensityGain_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(IntensityGain_text, 5, 2, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(80, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_10, 0, 6, 1, 1);

        LEDTemp_text = new QTextBrowser(groupBox_LEDDriver);
        LEDTemp_text->setObjectName(QStringLiteral("LEDTemp_text"));
        LEDTemp_text->setEnabled(false);
        sizePolicy5.setHeightForWidth(LEDTemp_text->sizePolicy().hasHeightForWidth());
        LEDTemp_text->setSizePolicy(sizePolicy5);
        LEDTemp_text->setMinimumSize(QSize(0, 25));
        LEDTemp_text->setMaximumSize(QSize(200, 25));
        LEDTemp_text->setFont(font9);
        LEDTemp_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(LEDTemp_text, 1, 5, 1, 1);

        label_LEDSerial = new QLabel(groupBox_LEDDriver);
        label_LEDSerial->setObjectName(QStringLiteral("label_LEDSerial"));
        label_LEDSerial->setFont(font2);
        label_LEDSerial->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_13->addWidget(label_LEDSerial, 2, 7, 1, 1);

        Intensity_text = new QTextBrowser(groupBox_LEDDriver);
        Intensity_text->setObjectName(QStringLiteral("Intensity_text"));
        Intensity_text->setEnabled(false);
        sizePolicy5.setHeightForWidth(Intensity_text->sizePolicy().hasHeightForWidth());
        Intensity_text->setSizePolicy(sizePolicy5);
        Intensity_text->setMinimumSize(QSize(0, 25));
        Intensity_text->setMaximumSize(QSize(16777215, 25));
        Intensity_text->setFont(font8);
        Intensity_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(Intensity_text, 1, 8, 1, 1);

        CycleTime_Text = new QTextBrowser(groupBox_LEDDriver);
        CycleTime_Text->setObjectName(QStringLiteral("CycleTime_Text"));
        CycleTime_Text->setEnabled(false);
        sizePolicy5.setHeightForWidth(CycleTime_Text->sizePolicy().hasHeightForWidth());
        CycleTime_Text->setSizePolicy(sizePolicy5);
        CycleTime_Text->setMinimumSize(QSize(0, 25));
        CycleTime_Text->setMaximumSize(QSize(200, 25));
        CycleTime_Text->setFont(font9);
        CycleTime_Text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(CycleTime_Text, 5, 5, 1, 1);

        LEDSerial_text = new QTextBrowser(groupBox_LEDDriver);
        LEDSerial_text->setObjectName(QStringLiteral("LEDSerial_text"));
        LEDSerial_text->setEnabled(false);
        sizePolicy5.setHeightForWidth(LEDSerial_text->sizePolicy().hasHeightForWidth());
        LEDSerial_text->setSizePolicy(sizePolicy5);
        LEDSerial_text->setMinimumSize(QSize(0, 40));
        LEDSerial_text->setMaximumSize(QSize(16777215, 25));
        LEDSerial_text->setFont(font8);
        LEDSerial_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(LEDSerial_text, 2, 8, 1, 1);

        label_Intensity = new QLabel(groupBox_LEDDriver);
        label_Intensity->setObjectName(QStringLiteral("label_Intensity"));
        label_Intensity->setFont(font3);
        label_Intensity->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_13->addWidget(label_Intensity, 1, 7, 1, 1);

        IntensityVoltage_text = new QTextBrowser(groupBox_LEDDriver);
        IntensityVoltage_text->setObjectName(QStringLiteral("IntensityVoltage_text"));
        IntensityVoltage_text->setEnabled(false);
        sizePolicy5.setHeightForWidth(IntensityVoltage_text->sizePolicy().hasHeightForWidth());
        IntensityVoltage_text->setSizePolicy(sizePolicy5);
        IntensityVoltage_text->setMinimumSize(QSize(0, 25));
        IntensityVoltage_text->setMaximumSize(QSize(16777215, 25));
        IntensityVoltage_text->setFont(font9);
        IntensityVoltage_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(IntensityVoltage_text, 0, 8, 1, 1);

        label_LEDVoltage = new QLabel(groupBox_LEDDriver);
        label_LEDVoltage->setObjectName(QStringLiteral("label_LEDVoltage"));
        label_LEDVoltage->setFont(font2);
        label_LEDVoltage->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_13->addWidget(label_LEDVoltage, 3, 4, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(80, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_9, 0, 3, 1, 1);

        Label_DMDTemp = new QLabel(groupBox_LEDDriver);
        Label_DMDTemp->setObjectName(QStringLiteral("Label_DMDTemp"));
        Label_DMDTemp->setFont(font);
        Label_DMDTemp->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        gridLayout_13->addWidget(Label_DMDTemp, 0, 4, 1, 1);

        BoardTemp_text = new QTextBrowser(groupBox_LEDDriver);
        BoardTemp_text->setObjectName(QStringLiteral("BoardTemp_text"));
        BoardTemp_text->setEnabled(false);
        sizePolicy5.setHeightForWidth(BoardTemp_text->sizePolicy().hasHeightForWidth());
        BoardTemp_text->setSizePolicy(sizePolicy5);
        BoardTemp_text->setMinimumSize(QSize(0, 25));
        BoardTemp_text->setMaximumSize(QSize(200, 25));
        BoardTemp_text->setFont(font9);
        BoardTemp_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(BoardTemp_text, 2, 5, 1, 1);

        LEDVoltage_text = new QTextBrowser(groupBox_LEDDriver);
        LEDVoltage_text->setObjectName(QStringLiteral("LEDVoltage_text"));
        LEDVoltage_text->setEnabled(false);
        sizePolicy5.setHeightForWidth(LEDVoltage_text->sizePolicy().hasHeightForWidth());
        LEDVoltage_text->setSizePolicy(sizePolicy5);
        LEDVoltage_text->setMinimumSize(QSize(0, 25));
        LEDVoltage_text->setMaximumSize(QSize(200, 25));
        LEDVoltage_text->setFont(font9);
        LEDVoltage_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(LEDVoltage_text, 3, 5, 1, 1);

        label_IntensityVoltage = new QLabel(groupBox_LEDDriver);
        label_IntensityVoltage->setObjectName(QStringLiteral("label_IntensityVoltage"));
        label_IntensityVoltage->setFont(font3);
        label_IntensityVoltage->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_13->addWidget(label_IntensityVoltage, 0, 7, 1, 1);

        DMDTemp_text = new QTextBrowser(groupBox_LEDDriver);
        DMDTemp_text->setObjectName(QStringLiteral("DMDTemp_text"));
        DMDTemp_text->setEnabled(false);
        sizePolicy5.setHeightForWidth(DMDTemp_text->sizePolicy().hasHeightForWidth());
        DMDTemp_text->setSizePolicy(sizePolicy5);
        DMDTemp_text->setMinimumSize(QSize(0, 25));
        DMDTemp_text->setMaximumSize(QSize(200, 25));
        DMDTemp_text->setFont(font9);
        DMDTemp_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(DMDTemp_text, 0, 5, 1, 1);

        label_LEDTemp = new QLabel(groupBox_LEDDriver);
        label_LEDTemp->setObjectName(QStringLiteral("label_LEDTemp"));
        label_LEDTemp->setFont(font);
        label_LEDTemp->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_13->addWidget(label_LEDTemp, 1, 4, 1, 1);

        label_LESerial = new QLabel(groupBox_LEDDriver);
        label_LESerial->setObjectName(QStringLiteral("label_LESerial"));
        QFont font10;
        font10.setFamily(QStringLiteral("Arial"));
        font10.setPointSize(10);
        font10.setItalic(false);
        label_LESerial->setFont(font10);
        label_LESerial->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_13->addWidget(label_LESerial, 4, 7, 1, 1);

        LESerial_text = new QTextBrowser(groupBox_LEDDriver);
        LESerial_text->setObjectName(QStringLiteral("LESerial_text"));
        LESerial_text->setEnabled(false);
        sizePolicy5.setHeightForWidth(LESerial_text->sizePolicy().hasHeightForWidth());
        LESerial_text->setSizePolicy(sizePolicy5);
        LESerial_text->setMinimumSize(QSize(0, 40));
        LESerial_text->setMaximumSize(QSize(16777215, 25));
        LESerial_text->setFont(font9);
        LESerial_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_13->addWidget(LESerial_text, 4, 8, 1, 1);


        verticalLayout_17->addLayout(gridLayout_13);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        Intensity_lineEdit = new QLineEdit(groupBox_LEDDriver);
        Intensity_lineEdit->setObjectName(QStringLiteral("Intensity_lineEdit"));
        sizePolicy2.setHeightForWidth(Intensity_lineEdit->sizePolicy().hasHeightForWidth());
        Intensity_lineEdit->setSizePolicy(sizePolicy2);
        Intensity_lineEdit->setMinimumSize(QSize(100, 0));
        Intensity_lineEdit->setMaximumSize(QSize(16777215, 35));
        Intensity_lineEdit->setFont(font2);

        gridLayout_14->addWidget(Intensity_lineEdit, 1, 3, 1, 1);

        label_Intensity2 = new QLabel(groupBox_LEDDriver);
        label_Intensity2->setObjectName(QStringLiteral("label_Intensity2"));
        sizePolicy2.setHeightForWidth(label_Intensity2->sizePolicy().hasHeightForWidth());
        label_Intensity2->setSizePolicy(sizePolicy2);
        label_Intensity2->setMinimumSize(QSize(0, 25));
        label_Intensity2->setFont(font3);
        label_Intensity2->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        label_Intensity2->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_Intensity2, 0, 3, 1, 1);

        label_DMDFanSpeed = new QLabel(groupBox_LEDDriver);
        label_DMDFanSpeed->setObjectName(QStringLiteral("label_DMDFanSpeed"));
        label_DMDFanSpeed->setFont(font2);
        label_DMDFanSpeed->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_14->addWidget(label_DMDFanSpeed, 1, 0, 1, 1);

        label_LEDFanSpeed = new QLabel(groupBox_LEDDriver);
        label_LEDFanSpeed->setObjectName(QStringLiteral("label_LEDFanSpeed"));
        label_LEDFanSpeed->setFont(font2);
        label_LEDFanSpeed->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_14->addWidget(label_LEDFanSpeed, 2, 0, 1, 1);

        label_PCBFanSpeed = new QLabel(groupBox_LEDDriver);
        label_PCBFanSpeed->setObjectName(QStringLiteral("label_PCBFanSpeed"));
        sizePolicy2.setHeightForWidth(label_PCBFanSpeed->sizePolicy().hasHeightForWidth());
        label_PCBFanSpeed->setSizePolicy(sizePolicy2);
        label_PCBFanSpeed->setFont(font2);
        label_PCBFanSpeed->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_14->addWidget(label_PCBFanSpeed, 0, 0, 1, 1);

        LEDFanSpeed_text = new QTextBrowser(groupBox_LEDDriver);
        LEDFanSpeed_text->setObjectName(QStringLiteral("LEDFanSpeed_text"));
        sizePolicy2.setHeightForWidth(LEDFanSpeed_text->sizePolicy().hasHeightForWidth());
        LEDFanSpeed_text->setSizePolicy(sizePolicy2);
        LEDFanSpeed_text->setMaximumSize(QSize(50, 30));
        LEDFanSpeed_text->setFont(font2);
        LEDFanSpeed_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_14->addWidget(LEDFanSpeed_text, 2, 1, 1, 1);

        DMDFanSpeed_text = new QTextBrowser(groupBox_LEDDriver);
        DMDFanSpeed_text->setObjectName(QStringLiteral("DMDFanSpeed_text"));
        sizePolicy2.setHeightForWidth(DMDFanSpeed_text->sizePolicy().hasHeightForWidth());
        DMDFanSpeed_text->setSizePolicy(sizePolicy2);
        DMDFanSpeed_text->setMaximumSize(QSize(50, 30));
        DMDFanSpeed_text->setFont(font2);
        DMDFanSpeed_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_14->addWidget(DMDFanSpeed_text, 1, 1, 1, 1);

        PCBFanSpeed_text = new QTextBrowser(groupBox_LEDDriver);
        PCBFanSpeed_text->setObjectName(QStringLiteral("PCBFanSpeed_text"));
        sizePolicy2.setHeightForWidth(PCBFanSpeed_text->sizePolicy().hasHeightForWidth());
        PCBFanSpeed_text->setSizePolicy(sizePolicy2);
        PCBFanSpeed_text->setMaximumSize(QSize(50, 30));
        PCBFanSpeed_text->setFont(font2);
        PCBFanSpeed_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));

        gridLayout_14->addWidget(PCBFanSpeed_text, 0, 1, 1, 1);

        pushButton_SetIntensity = new QPushButton(groupBox_LEDDriver);
        pushButton_SetIntensity->setObjectName(QStringLiteral("pushButton_SetIntensity"));
        sizePolicy2.setHeightForWidth(pushButton_SetIntensity->sizePolicy().hasHeightForWidth());
        pushButton_SetIntensity->setSizePolicy(sizePolicy2);
        pushButton_SetIntensity->setMinimumSize(QSize(100, 35));
        pushButton_SetIntensity->setMaximumSize(QSize(16777215, 35));
        QFont font11;
        font11.setFamily(QStringLiteral("Arial"));
        font11.setPointSize(9);
        font11.setBold(true);
        font11.setWeight(75);
        pushButton_SetIntensity->setFont(font11);

        gridLayout_14->addWidget(pushButton_SetIntensity, 2, 3, 1, 1);

        groupBox_8 = new QGroupBox(groupBox_LEDDriver);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        layoutWidget_2 = new QWidget(groupBox_8);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 191, 111));
        gridLayout_45 = new QGridLayout(layoutWidget_2);
        gridLayout_45->setSpacing(9);
        gridLayout_45->setContentsMargins(11, 11, 11, 11);
        gridLayout_45->setObjectName(QStringLiteral("gridLayout_45"));
        gridLayout_45->setContentsMargins(0, 9, 0, 9);
        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font3);
        label_13->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_45->addWidget(label_13, 0, 0, 1, 1);

        MidLayerCount = new QLineEdit(layoutWidget_2);
        MidLayerCount->setObjectName(QStringLiteral("MidLayerCount"));
        sizePolicy2.setHeightForWidth(MidLayerCount->sizePolicy().hasHeightForWidth());
        MidLayerCount->setSizePolicy(sizePolicy2);
        MidLayerCount->setMaximumSize(QSize(100, 16777215));
        MidLayerCount->setFont(font2);

        gridLayout_45->addWidget(MidLayerCount, 0, 1, 1, 1);

        label_15 = new QLabel(layoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMaximumSize(QSize(60, 16777215));
        label_15->setFont(font3);
        label_15->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_45->addWidget(label_15, 1, 0, 1, 1);

        MidLayerIntensity = new QLineEdit(layoutWidget_2);
        MidLayerIntensity->setObjectName(QStringLiteral("MidLayerIntensity"));
        sizePolicy5.setHeightForWidth(MidLayerIntensity->sizePolicy().hasHeightForWidth());
        MidLayerIntensity->setSizePolicy(sizePolicy5);
        MidLayerIntensity->setMinimumSize(QSize(100, 0));
        MidLayerIntensity->setMaximumSize(QSize(100, 16777215));
        MidLayerIntensity->setFont(font2);

        gridLayout_45->addWidget(MidLayerIntensity, 1, 1, 1, 1);


        gridLayout_14->addWidget(groupBox_8, 0, 5, 3, 1);

        groupBox_7 = new QGroupBox(groupBox_LEDDriver);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayoutWidget = new QWidget(groupBox_7);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, -1, 204, 111));
        gridLayout_21 = new QGridLayout(gridLayoutWidget);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        gridLayout_44 = new QGridLayout();
        gridLayout_44->setSpacing(9);
        gridLayout_44->setObjectName(QStringLiteral("gridLayout_44"));
        gridLayout_44->setContentsMargins(0, 9, -1, 9);
        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font3);
        label_6->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_44->addWidget(label_6, 0, 0, 1, 1);

        BaseLayerCount = new QLineEdit(gridLayoutWidget);
        BaseLayerCount->setObjectName(QStringLiteral("BaseLayerCount"));
        sizePolicy5.setHeightForWidth(BaseLayerCount->sizePolicy().hasHeightForWidth());
        BaseLayerCount->setSizePolicy(sizePolicy5);
        BaseLayerCount->setMinimumSize(QSize(30, 0));
        BaseLayerCount->setMaximumSize(QSize(100, 16777215));
        BaseLayerCount->setFont(font2);

        gridLayout_44->addWidget(BaseLayerCount, 0, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(60, 16777215));
        label_7->setFont(font3);
        label_7->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_44->addWidget(label_7, 1, 0, 1, 1);

        BaseLayerIntensity = new QLineEdit(gridLayoutWidget);
        BaseLayerIntensity->setObjectName(QStringLiteral("BaseLayerIntensity"));
        sizePolicy5.setHeightForWidth(BaseLayerIntensity->sizePolicy().hasHeightForWidth());
        BaseLayerIntensity->setSizePolicy(sizePolicy5);
        BaseLayerIntensity->setMinimumSize(QSize(100, 0));
        BaseLayerIntensity->setMaximumSize(QSize(100, 16777215));
        BaseLayerIntensity->setFont(font2);

        gridLayout_44->addWidget(BaseLayerIntensity, 1, 1, 1, 1);


        gridLayout_21->addLayout(gridLayout_44, 0, 0, 1, 1);


        gridLayout_14->addWidget(groupBox_7, 0, 4, 3, 1);


        verticalLayout_17->addLayout(gridLayout_14);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_7);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setSpacing(6);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        label_LEDCurrent2 = new QLabel(groupBox_LEDDriver);
        label_LEDCurrent2->setObjectName(QStringLiteral("label_LEDCurrent2"));
        label_LEDCurrent2->setMinimumSize(QSize(0, 25));
        label_LEDCurrent2->setFont(font2);
        label_LEDCurrent2->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        label_LEDCurrent2->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_LEDCurrent2, 0, 0, 1, 1);

        pushButton_SetLEDCurrent = new QPushButton(groupBox_LEDDriver);
        pushButton_SetLEDCurrent->setObjectName(QStringLiteral("pushButton_SetLEDCurrent"));
        QSizePolicy sizePolicy9(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(pushButton_SetLEDCurrent->sizePolicy().hasHeightForWidth());
        pushButton_SetLEDCurrent->setSizePolicy(sizePolicy9);
        pushButton_SetLEDCurrent->setMaximumSize(QSize(16777215, 45));
        pushButton_SetLEDCurrent->setFont(font11);

        gridLayout_15->addWidget(pushButton_SetLEDCurrent, 1, 1, 1, 1);

        pushButton_LEDPWMON_OFF = new QPushButton(groupBox_LEDDriver);
        pushButton_LEDPWMON_OFF->setObjectName(QStringLiteral("pushButton_LEDPWMON_OFF"));
        sizePolicy5.setHeightForWidth(pushButton_LEDPWMON_OFF->sizePolicy().hasHeightForWidth());
        pushButton_LEDPWMON_OFF->setSizePolicy(sizePolicy5);
        pushButton_LEDPWMON_OFF->setMinimumSize(QSize(0, 35));
        pushButton_LEDPWMON_OFF->setFont(font7);

        gridLayout_15->addWidget(pushButton_LEDPWMON_OFF, 3, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_14, 1, 5, 1, 1);

        LEDCurrent_lineEdit = new QLineEdit(groupBox_LEDDriver);
        LEDCurrent_lineEdit->setObjectName(QStringLiteral("LEDCurrent_lineEdit"));
        sizePolicy5.setHeightForWidth(LEDCurrent_lineEdit->sizePolicy().hasHeightForWidth());
        LEDCurrent_lineEdit->setSizePolicy(sizePolicy5);
        LEDCurrent_lineEdit->setMinimumSize(QSize(180, 0));
        LEDCurrent_lineEdit->setMaximumSize(QSize(150, 35));
        LEDCurrent_lineEdit->setFont(font3);
        LEDCurrent_lineEdit->setStyleSheet(QStringLiteral(""));

        gridLayout_15->addWidget(LEDCurrent_lineEdit, 1, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_13, 1, 2, 1, 1);

        checkBox_IntensityRegEnable = new QCheckBox(groupBox_LEDDriver);
        checkBox_IntensityRegEnable->setObjectName(QStringLiteral("checkBox_IntensityRegEnable"));
        sizePolicy5.setHeightForWidth(checkBox_IntensityRegEnable->sizePolicy().hasHeightForWidth());
        checkBox_IntensityRegEnable->setSizePolicy(sizePolicy5);
        checkBox_IntensityRegEnable->setFont(font2);
        checkBox_IntensityRegEnable->setChecked(false);

        gridLayout_15->addWidget(checkBox_IntensityRegEnable, 0, 3, 1, 1);

        pushButton_EnableIntensityReg = new QPushButton(groupBox_LEDDriver);
        pushButton_EnableIntensityReg->setObjectName(QStringLiteral("pushButton_EnableIntensityReg"));
        sizePolicy5.setHeightForWidth(pushButton_EnableIntensityReg->sizePolicy().hasHeightForWidth());
        pushButton_EnableIntensityReg->setSizePolicy(sizePolicy5);
        pushButton_EnableIntensityReg->setMinimumSize(QSize(0, 35));
        pushButton_EnableIntensityReg->setMaximumSize(QSize(16777215, 45));
        pushButton_EnableIntensityReg->setFont(font11);

        gridLayout_15->addWidget(pushButton_EnableIntensityReg, 1, 3, 1, 1);


        verticalLayout_17->addLayout(gridLayout_15);


        horizontalLayout->addWidget(groupBox_LEDDriver);


        gridLayout_9->addWidget(frame_LedDriver, 0, 0, 1, 1);

        stackedWidget->addWidget(LEDDriverPage);
        ZMachineControl = new QWidget();
        ZMachineControl->setObjectName(QStringLiteral("ZMachineControl"));
        gridLayout_2 = new QGridLayout(ZMachineControl);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_ZMavhineControl = new QFrame(ZMachineControl);
        frame_ZMavhineControl->setObjectName(QStringLiteral("frame_ZMavhineControl"));
        sizePolicy5.setHeightForWidth(frame_ZMavhineControl->sizePolicy().hasHeightForWidth());
        frame_ZMavhineControl->setSizePolicy(sizePolicy5);
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
        groupBox_ZMachineControl->setFont(font6);
        groupBox_ZMachineControl->setAutoFillBackground(false);
        groupBox_ZMachineControl->setStyleSheet(QLatin1String("QGroupBox{ border: 1.5px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}\n"
"QLabel{border:0px}"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_ZMachineControl);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 16, -1, -1);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_3 = new QGroupBox(groupBox_ZMachineControl);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        groupBox_3->setMinimumSize(QSize(250, 0));
        groupBox_3->setMaximumSize(QSize(260, 16777215));
        groupBox_3->setFont(font);
        groupBox_3->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout_37 = new QGridLayout();
        gridLayout_37->setSpacing(6);
        gridLayout_37->setObjectName(QStringLiteral("gridLayout_37"));
        verticalSpacer_25 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_37->addItem(verticalSpacer_25, 0, 0, 1, 2);

        SerialPort = new QComboBox(groupBox_3);
        SerialPort->setObjectName(QStringLiteral("SerialPort"));
        SerialPort->setEnabled(false);
        sizePolicy1.setHeightForWidth(SerialPort->sizePolicy().hasHeightForWidth());
        SerialPort->setSizePolicy(sizePolicy1);
        SerialPort->setMinimumSize(QSize(0, 30));
        SerialPort->setFont(font2);

        gridLayout_37->addWidget(SerialPort, 1, 1, 1, 1);

        ComPort = new QLabel(groupBox_3);
        ComPort->setObjectName(QStringLiteral("ComPort"));
        sizePolicy5.setHeightForWidth(ComPort->sizePolicy().hasHeightForWidth());
        ComPort->setSizePolicy(sizePolicy5);
        ComPort->setMinimumSize(QSize(80, 30));
        ComPort->setMaximumSize(QSize(80, 16777215));
        ComPort->setFont(font3);
        ComPort->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        gridLayout_37->addWidget(ComPort, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font3);

        gridLayout_37->addWidget(label_5, 5, 0, 1, 1);

        BoardStatus = new QLabel(groupBox_3);
        BoardStatus->setObjectName(QStringLiteral("BoardStatus"));
        BoardStatus->setMinimumSize(QSize(0, 30));
        BoardStatus->setMaximumSize(QSize(16777215, 30));
        BoardStatus->setFont(font3);
        BoardStatus->setStyleSheet(QStringLiteral("QLabel{border:0px}"));

        gridLayout_37->addWidget(BoardStatus, 6, 0, 1, 2);

        Baudrate = new QComboBox(groupBox_3);
        Baudrate->addItem(QString());
        Baudrate->addItem(QString());
        Baudrate->addItem(QString());
        Baudrate->addItem(QString());
        Baudrate->addItem(QString());
        Baudrate->addItem(QString());
        Baudrate->setObjectName(QStringLiteral("Baudrate"));
        sizePolicy5.setHeightForWidth(Baudrate->sizePolicy().hasHeightForWidth());
        Baudrate->setSizePolicy(sizePolicy5);
        Baudrate->setMinimumSize(QSize(0, 30));
        Baudrate->setFont(font3);

        gridLayout_37->addWidget(Baudrate, 5, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_37->addItem(verticalSpacer_4, 7, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_37->addItem(verticalSpacer_5, 2, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_37);

        gridLayout_38 = new QGridLayout();
        gridLayout_38->setSpacing(6);
        gridLayout_38->setObjectName(QStringLiteral("gridLayout_38"));
        LoadMacProfile = new QPushButton(groupBox_3);
        LoadMacProfile->setObjectName(QStringLiteral("LoadMacProfile"));
        sizePolicy5.setHeightForWidth(LoadMacProfile->sizePolicy().hasHeightForWidth());
        LoadMacProfile->setSizePolicy(sizePolicy5);
        LoadMacProfile->setMinimumSize(QSize(95, 0));
        LoadMacProfile->setMaximumSize(QSize(105, 16777215));
        LoadMacProfile->setFont(font2);

        gridLayout_38->addWidget(LoadMacProfile, 2, 2, 1, 2);

        ProfileName = new QTextBrowser(groupBox_3);
        ProfileName->setObjectName(QStringLiteral("ProfileName"));
        ProfileName->setMaximumSize(QSize(250, 30));
        ProfileName->setFont(font3);
        ProfileName->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));

        gridLayout_38->addWidget(ProfileName, 1, 0, 1, 4);

        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMaximumSize(QSize(250, 25));
        label_21->setFont(font3);
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_38->addWidget(label_21, 0, 0, 1, 4);

        SaveMacProfile = new QPushButton(groupBox_3);
        SaveMacProfile->setObjectName(QStringLiteral("SaveMacProfile"));
        sizePolicy5.setHeightForWidth(SaveMacProfile->sizePolicy().hasHeightForWidth());
        SaveMacProfile->setSizePolicy(sizePolicy5);
        SaveMacProfile->setMinimumSize(QSize(95, 35));
        SaveMacProfile->setMaximumSize(QSize(115, 16777215));
        SaveMacProfile->setFont(font2);

        gridLayout_38->addWidget(SaveMacProfile, 2, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_38);


        verticalLayout->addWidget(groupBox_3);

        groupBox_6 = new QGroupBox(groupBox_ZMachineControl);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setFont(font);
        groupBox_6->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        gridLayout_10 = new QGridLayout(groupBox_6);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_41 = new QGridLayout();
        gridLayout_41->setSpacing(6);
        gridLayout_41->setObjectName(QStringLiteral("gridLayout_41"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(50, -1, 50, -1);
        AutoHome = new QPushButton(groupBox_6);
        AutoHome->setObjectName(QStringLiteral("AutoHome"));
        sizePolicy5.setHeightForWidth(AutoHome->sizePolicy().hasHeightForWidth());
        AutoHome->setSizePolicy(sizePolicy5);
        AutoHome->setMinimumSize(QSize(0, 26));
        AutoHome->setFont(font2);

        verticalLayout_4->addWidget(AutoHome);


        gridLayout_41->addLayout(verticalLayout_4, 0, 0, 1, 2);

        Moveup01 = new QPushButton(groupBox_6);
        Moveup01->setObjectName(QStringLiteral("Moveup01"));
        sizePolicy5.setHeightForWidth(Moveup01->sizePolicy().hasHeightForWidth());
        Moveup01->setSizePolicy(sizePolicy5);
        Moveup01->setMinimumSize(QSize(0, 30));
        Moveup01->setFont(font2);

        gridLayout_41->addWidget(Moveup01, 6, 0, 1, 1);

        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QStringLiteral("label_22"));
        sizePolicy1.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy1);
        label_22->setMinimumSize(QSize(0, 29));
        label_22->setMaximumSize(QSize(16777215, 16777215));
        label_22->setFont(font7);
        label_22->setLayoutDirection(Qt::LeftToRight);
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_41->addWidget(label_22, 7, 0, 1, 1);

        Moveup100 = new QPushButton(groupBox_6);
        Moveup100->setObjectName(QStringLiteral("Moveup100"));
        sizePolicy5.setHeightForWidth(Moveup100->sizePolicy().hasHeightForWidth());
        Moveup100->setSizePolicy(sizePolicy5);
        Moveup100->setMinimumSize(QSize(0, 30));
        Moveup100->setFont(font2);

        gridLayout_41->addWidget(Moveup100, 1, 0, 1, 1);

        Moveup10 = new QPushButton(groupBox_6);
        Moveup10->setObjectName(QStringLiteral("Moveup10"));
        sizePolicy5.setHeightForWidth(Moveup10->sizePolicy().hasHeightForWidth());
        Moveup10->setSizePolicy(sizePolicy5);
        Moveup10->setMinimumSize(QSize(0, 30));
        Moveup10->setMaximumSize(QSize(16777215, 16777215));
        Moveup10->setFont(font2);

        gridLayout_41->addWidget(Moveup10, 4, 0, 1, 1);

        Moveup1 = new QPushButton(groupBox_6);
        Moveup1->setObjectName(QStringLiteral("Moveup1"));
        sizePolicy9.setHeightForWidth(Moveup1->sizePolicy().hasHeightForWidth());
        Moveup1->setSizePolicy(sizePolicy9);
        Moveup1->setMinimumSize(QSize(0, 30));
        Moveup1->setFont(font2);

        gridLayout_41->addWidget(Moveup1, 5, 0, 1, 1);

        Movedown10 = new QPushButton(groupBox_6);
        Movedown10->setObjectName(QStringLiteral("Movedown10"));
        sizePolicy9.setHeightForWidth(Movedown10->sizePolicy().hasHeightForWidth());
        Movedown10->setSizePolicy(sizePolicy9);
        Movedown10->setMinimumSize(QSize(0, 30));
        Movedown10->setMaximumSize(QSize(16777215, 16777215));
        Movedown10->setFont(font2);

        gridLayout_41->addWidget(Movedown10, 4, 1, 1, 1);

        Movedown01 = new QPushButton(groupBox_6);
        Movedown01->setObjectName(QStringLiteral("Movedown01"));
        sizePolicy9.setHeightForWidth(Movedown01->sizePolicy().hasHeightForWidth());
        Movedown01->setSizePolicy(sizePolicy9);
        Movedown01->setMinimumSize(QSize(0, 30));
        Movedown01->setFont(font2);

        gridLayout_41->addWidget(Movedown01, 6, 1, 1, 1);

        Movedown1 = new QPushButton(groupBox_6);
        Movedown1->setObjectName(QStringLiteral("Movedown1"));
        sizePolicy9.setHeightForWidth(Movedown1->sizePolicy().hasHeightForWidth());
        Movedown1->setSizePolicy(sizePolicy9);
        Movedown1->setMinimumSize(QSize(0, 30));
        Movedown1->setMaximumSize(QSize(16777215, 16777215));
        Movedown1->setFont(font2);

        gridLayout_41->addWidget(Movedown1, 5, 1, 1, 1);

        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font7);
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_41->addWidget(label_23, 7, 1, 1, 1);

        Movedown100 = new QPushButton(groupBox_6);
        Movedown100->setObjectName(QStringLiteral("Movedown100"));
        sizePolicy5.setHeightForWidth(Movedown100->sizePolicy().hasHeightForWidth());
        Movedown100->setSizePolicy(sizePolicy5);
        Movedown100->setMinimumSize(QSize(0, 30));
        Movedown100->setFont(font2);

        gridLayout_41->addWidget(Movedown100, 1, 1, 1, 1);

        Moveup50 = new QPushButton(groupBox_6);
        Moveup50->setObjectName(QStringLiteral("Moveup50"));
        sizePolicy9.setHeightForWidth(Moveup50->sizePolicy().hasHeightForWidth());
        Moveup50->setSizePolicy(sizePolicy9);
        Moveup50->setMinimumSize(QSize(0, 30));
        Moveup50->setMaximumSize(QSize(16777215, 16777215));
        Moveup50->setFont(font2);

        gridLayout_41->addWidget(Moveup50, 2, 0, 1, 1);

        Movedown50 = new QPushButton(groupBox_6);
        Movedown50->setObjectName(QStringLiteral("Movedown50"));
        sizePolicy5.setHeightForWidth(Movedown50->sizePolicy().hasHeightForWidth());
        Movedown50->setSizePolicy(sizePolicy5);
        Movedown50->setMinimumSize(QSize(0, 30));
        Movedown50->setMaximumSize(QSize(16777215, 16777215));
        Movedown50->setFont(font2);

        gridLayout_41->addWidget(Movedown50, 2, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_41, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox_6);


        horizontalLayout_9->addLayout(verticalLayout);

        groupBox_5 = new QGroupBox(groupBox_ZMachineControl);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        sizePolicy5.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy5);
        groupBox_5->setMinimumSize(QSize(0, 0));
        groupBox_5->setMaximumSize(QSize(16777215, 16777215));
        groupBox_5->setFont(font);
        groupBox_5->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        horizontalLayout_11 = new QHBoxLayout(groupBox_5);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label = new QLabel(groupBox_5);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy5.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy5);
        QFont font12;
        font12.setFamily(QStringLiteral("Arial"));
        font12.setPointSize(12);
        label->setFont(font12);
        label->setWordWrap(true);

        verticalLayout_12->addWidget(label);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy5.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy5);
        label_2->setFont(font12);
        label_2->setWordWrap(true);

        verticalLayout_12->addWidget(label_2);

        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy5);
        label_3->setFont(font12);
        label_3->setWordWrap(true);

        verticalLayout_12->addWidget(label_3);

        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font12);
        label_4->setWordWrap(true);

        verticalLayout_12->addWidget(label_4);


        horizontalLayout_10->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        StartPrintGcode = new QTextEdit(groupBox_5);
        StartPrintGcode->setObjectName(QStringLiteral("StartPrintGcode"));
        sizePolicy5.setHeightForWidth(StartPrintGcode->sizePolicy().hasHeightForWidth());
        StartPrintGcode->setSizePolicy(sizePolicy5);
        StartPrintGcode->setMinimumSize(QSize(150, 30));
        StartPrintGcode->setMaximumSize(QSize(180, 140));
        StartPrintGcode->setFont(font);
        StartPrintGcode->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));

        verticalLayout_13->addWidget(StartPrintGcode);

        EndPrintGcode = new QTextEdit(groupBox_5);
        EndPrintGcode->setObjectName(QStringLiteral("EndPrintGcode"));
        sizePolicy6.setHeightForWidth(EndPrintGcode->sizePolicy().hasHeightForWidth());
        EndPrintGcode->setSizePolicy(sizePolicy6);
        EndPrintGcode->setMinimumSize(QSize(0, 30));
        EndPrintGcode->setMaximumSize(QSize(180, 140));
        EndPrintGcode->setFont(font);
        EndPrintGcode->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));

        verticalLayout_13->addWidget(EndPrintGcode);

        EndBaseLayerGcode = new QTextEdit(groupBox_5);
        EndBaseLayerGcode->setObjectName(QStringLiteral("EndBaseLayerGcode"));
        sizePolicy5.setHeightForWidth(EndBaseLayerGcode->sizePolicy().hasHeightForWidth());
        EndBaseLayerGcode->setSizePolicy(sizePolicy5);
        EndBaseLayerGcode->setMinimumSize(QSize(180, 30));
        EndBaseLayerGcode->setMaximumSize(QSize(0, 140));
        EndBaseLayerGcode->setFont(font);
        EndBaseLayerGcode->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));

        verticalLayout_13->addWidget(EndBaseLayerGcode);

        EndLayerGcode = new QTextEdit(groupBox_5);
        EndLayerGcode->setObjectName(QStringLiteral("EndLayerGcode"));
        sizePolicy6.setHeightForWidth(EndLayerGcode->sizePolicy().hasHeightForWidth());
        EndLayerGcode->setSizePolicy(sizePolicy6);
        EndLayerGcode->setMinimumSize(QSize(40, 30));
        EndLayerGcode->setMaximumSize(QSize(180, 140));
        EndLayerGcode->setFont(font);
        EndLayerGcode->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));

        verticalLayout_13->addWidget(EndLayerGcode);


        horizontalLayout_10->addLayout(verticalLayout_13);


        horizontalLayout_11->addLayout(horizontalLayout_10);


        horizontalLayout_9->addWidget(groupBox_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        MotorControl = new QGroupBox(groupBox_ZMachineControl);
        MotorControl->setObjectName(QStringLiteral("MotorControl"));
        sizePolicy5.setHeightForWidth(MotorControl->sizePolicy().hasHeightForWidth());
        MotorControl->setSizePolicy(sizePolicy5);
        MotorControl->setMinimumSize(QSize(0, 70));
        MotorControl->setMaximumSize(QSize(16777215, 16777215));
        MotorControl->setFont(font);
        MotorControl->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        verticalLayout_6 = new QVBoxLayout(MotorControl);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        MotorConDisable = new QPushButton(MotorControl);
        MotorConDisable->setObjectName(QStringLiteral("MotorConDisable"));
        sizePolicy5.setHeightForWidth(MotorConDisable->sizePolicy().hasHeightForWidth());
        MotorConDisable->setSizePolicy(sizePolicy5);
        MotorConDisable->setMaximumSize(QSize(115, 35));
        MotorConDisable->setFont(font7);

        verticalLayout_6->addWidget(MotorConDisable);


        verticalLayout_5->addWidget(MotorControl);

        LayerCount = new QGroupBox(groupBox_ZMachineControl);
        LayerCount->setObjectName(QStringLiteral("LayerCount"));
        sizePolicy1.setHeightForWidth(LayerCount->sizePolicy().hasHeightForWidth());
        LayerCount->setSizePolicy(sizePolicy1);
        LayerCount->setMinimumSize(QSize(0, 70));
        LayerCount->setMaximumSize(QSize(16777215, 16777215));
        LayerCount->setFont(font1);
        LayerCount->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        verticalLayout_9 = new QVBoxLayout(LayerCount);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        EnableLayer = new QCheckBox(LayerCount);
        EnableLayer->setObjectName(QStringLiteral("EnableLayer"));
        EnableLayer->setFont(font2);

        verticalLayout_9->addWidget(EnableLayer);

        gridLayout_42 = new QGridLayout();
        gridLayout_42->setSpacing(9);
        gridLayout_42->setObjectName(QStringLiteral("gridLayout_42"));
        gridLayout_42->setContentsMargins(0, 9, -1, 9);
        label_startlayer = new QLabel(LayerCount);
        label_startlayer->setObjectName(QStringLiteral("label_startlayer"));
        label_startlayer->setEnabled(false);
        label_startlayer->setFont(font4);
        label_startlayer->setStyleSheet(QLatin1String("QLabel{ border: 0px ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        label_startlayer->setWordWrap(true);

        gridLayout_42->addWidget(label_startlayer, 1, 0, 1, 1);

        EndLayerCount = new QLineEdit(LayerCount);
        EndLayerCount->setObjectName(QStringLiteral("EndLayerCount"));
        EndLayerCount->setEnabled(false);
        sizePolicy5.setHeightForWidth(EndLayerCount->sizePolicy().hasHeightForWidth());
        EndLayerCount->setSizePolicy(sizePolicy5);
        EndLayerCount->setMinimumSize(QSize(0, 35));
        EndLayerCount->setMaximumSize(QSize(16777215, 35));
        EndLayerCount->setFont(font3);

        gridLayout_42->addWidget(EndLayerCount, 2, 1, 1, 1);

        label_EndLayer = new QLabel(LayerCount);
        label_EndLayer->setObjectName(QStringLiteral("label_EndLayer"));
        label_EndLayer->setEnabled(false);
        label_EndLayer->setMinimumSize(QSize(80, 0));
        label_EndLayer->setMaximumSize(QSize(180, 16777215));
        label_EndLayer->setFont(font4);
        label_EndLayer->setStyleSheet(QLatin1String("QLabel{ border: 0px ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        label_EndLayer->setWordWrap(true);

        gridLayout_42->addWidget(label_EndLayer, 2, 0, 1, 1);

        StartLayerCount = new QLineEdit(LayerCount);
        StartLayerCount->setObjectName(QStringLiteral("StartLayerCount"));
        StartLayerCount->setEnabled(false);
        sizePolicy5.setHeightForWidth(StartLayerCount->sizePolicy().hasHeightForWidth());
        StartLayerCount->setSizePolicy(sizePolicy5);
        StartLayerCount->setMinimumSize(QSize(0, 35));
        StartLayerCount->setMaximumSize(QSize(16777215, 35));
        StartLayerCount->setFont(font3);

        gridLayout_42->addWidget(StartLayerCount, 1, 1, 1, 1);


        verticalLayout_9->addLayout(gridLayout_42);


        verticalLayout_5->addWidget(LayerCount);

        ManualGcode_GroupBox = new QGroupBox(groupBox_ZMachineControl);
        ManualGcode_GroupBox->setObjectName(QStringLiteral("ManualGcode_GroupBox"));
        sizePolicy5.setHeightForWidth(ManualGcode_GroupBox->sizePolicy().hasHeightForWidth());
        ManualGcode_GroupBox->setSizePolicy(sizePolicy5);
        ManualGcode_GroupBox->setMaximumSize(QSize(16777215, 16777215));
        ManualGcode_GroupBox->setFont(font1);
        ManualGcode_GroupBox->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        verticalLayout_10 = new QVBoxLayout(ManualGcode_GroupBox);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, 18, -1, -1);
        ManualGcode = new QTextEdit(ManualGcode_GroupBox);
        ManualGcode->setObjectName(QStringLiteral("ManualGcode"));
        ManualGcode->setMaximumSize(QSize(16777215, 16777215));
        ManualGcode->setFont(font);
        ManualGcode->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));

        verticalLayout_10->addWidget(ManualGcode);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        SendManualGcode = new QPushButton(ManualGcode_GroupBox);
        SendManualGcode->setObjectName(QStringLiteral("SendManualGcode"));
        SendManualGcode->setMinimumSize(QSize(0, 35));
        SendManualGcode->setFont(font7);

        horizontalLayout_4->addWidget(SendManualGcode);

        ClearManualGcode = new QPushButton(ManualGcode_GroupBox);
        ClearManualGcode->setObjectName(QStringLiteral("ClearManualGcode"));
        ClearManualGcode->setMinimumSize(QSize(0, 35));
        ClearManualGcode->setFont(font7);

        horizontalLayout_4->addWidget(ClearManualGcode);


        verticalLayout_10->addLayout(horizontalLayout_4);


        verticalLayout_5->addWidget(ManualGcode_GroupBox);


        horizontalLayout_9->addLayout(verticalLayout_5);


        horizontalLayout_8->addLayout(horizontalLayout_9);


        horizontalLayout_3->addLayout(horizontalLayout_8);


        gridLayout_12->addWidget(groupBox_ZMachineControl, 0, 1, 1, 1);


        gridLayout_2->addWidget(frame_ZMavhineControl, 0, 0, 1, 1);

        stackedWidget->addWidget(ZMachineControl);
        SLCFileControl = new QWidget();
        SLCFileControl->setObjectName(QStringLiteral("SLCFileControl"));
        sizePolicy5.setHeightForWidth(SLCFileControl->sizePolicy().hasHeightForWidth());
        SLCFileControl->setSizePolicy(sizePolicy5);
        gridLayout_18 = new QGridLayout(SLCFileControl);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        frame_SCLFileControl = new QFrame(SLCFileControl);
        frame_SCLFileControl->setObjectName(QStringLiteral("frame_SCLFileControl"));
        sizePolicy5.setHeightForWidth(frame_SCLFileControl->sizePolicy().hasHeightForWidth());
        frame_SCLFileControl->setSizePolicy(sizePolicy5);
        frame_SCLFileControl->setMinimumSize(QSize(0, 0));
        frame_SCLFileControl->setStyleSheet(QLatin1String("QFrame{background-image : url(:/images/img.jpg);\n"
"border:1px solid black}"));
        frame_SCLFileControl->setFrameShape(QFrame::StyledPanel);
        frame_SCLFileControl->setFrameShadow(QFrame::Raised);
        gridLayout_17 = new QGridLayout(frame_SCLFileControl);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setContentsMargins(9, -1, -1, -1);
        groupBox_SLCFileConrol = new QGroupBox(frame_SCLFileControl);
        groupBox_SLCFileConrol->setObjectName(QStringLiteral("groupBox_SLCFileConrol"));
        groupBox_SLCFileConrol->setFont(font6);
        groupBox_SLCFileConrol->setAutoFillBackground(false);
        groupBox_SLCFileConrol->setStyleSheet(QLatin1String("QGroupBox{ border: 1.5px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}\n"
"QLabel{border:0px}"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_SLCFileConrol);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 16, -1, -1);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        groupBox_4 = new QGroupBox(groupBox_SLCFileConrol);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        sizePolicy2.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy2);
        groupBox_4->setMinimumSize(QSize(0, 0));
        groupBox_4->setMaximumSize(QSize(160, 16777215));
        LoadSlcFile = new QPushButton(groupBox_4);
        LoadSlcFile->setObjectName(QStringLiteral("LoadSlcFile"));
        LoadSlcFile->setGeometry(QRect(10, 50, 107, 26));
        sizePolicy4.setHeightForWidth(LoadSlcFile->sizePolicy().hasHeightForWidth());
        LoadSlcFile->setSizePolicy(sizePolicy4);
        LoadSlcFile->setFont(font5);

        verticalLayout_8->addWidget(groupBox_4);


        horizontalLayout_6->addLayout(verticalLayout_8);


        gridLayout_17->addWidget(groupBox_SLCFileConrol, 0, 0, 1, 1);


        gridLayout_18->addWidget(frame_SCLFileControl, 0, 0, 1, 1);

        stackedWidget->addWidget(SLCFileControl);

        horizontalLayout_25->addWidget(stackedWidget);


        gridLayout->addLayout(horizontalLayout_25, 1, 0, 1, 1);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        horizontalLayout_24->setSizeConstraint(QLayout::SetNoConstraint);
        connectButton = new QPushButton(scrollAreaWidgetContents);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        sizePolicy5.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy5);
        connectButton->setMinimumSize(QSize(50, 40));
        connectButton->setMaximumSize(QSize(16777215, 16777215));
        connectButton->setFont(font5);
        connectButton->setStyleSheet(QLatin1String("#connectButton{\n"
"background-color: transparent;\n"
"border-image: url(:connected.png);\n"
"backgorund: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/images/connected.png"), QSize(), QIcon::Normal, QIcon::Off);
        connectButton->setIcon(icon4);
        connectButton->setIconSize(QSize(50, 40));
        connectButton->setCheckable(true);
        connectButton->setChecked(false);

        horizontalLayout_24->addWidget(connectButton);

        startPatSequence_Button = new QPushButton(scrollAreaWidgetContents);
        startPatSequence_Button->setObjectName(QStringLiteral("startPatSequence_Button"));
        sizePolicy5.setHeightForWidth(startPatSequence_Button->sizePolicy().hasHeightForWidth());
        startPatSequence_Button->setSizePolicy(sizePolicy5);
        startPatSequence_Button->setMinimumSize(QSize(50, 40));
        startPatSequence_Button->setStyleSheet(QLatin1String("#startPatSequence_Button{\n"
"background-color: transparent;\n"
"backgorund: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/Icons/my_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        startPatSequence_Button->setIcon(icon5);
        startPatSequence_Button->setIconSize(QSize(40, 40));

        horizontalLayout_24->addWidget(startPatSequence_Button);

        pausePatSequence_Button = new QPushButton(scrollAreaWidgetContents);
        pausePatSequence_Button->setObjectName(QStringLiteral("pausePatSequence_Button"));
        pausePatSequence_Button->setEnabled(false);
        sizePolicy5.setHeightForWidth(pausePatSequence_Button->sizePolicy().hasHeightForWidth());
        pausePatSequence_Button->setSizePolicy(sizePolicy5);
        pausePatSequence_Button->setMinimumSize(QSize(50, 40));
        pausePatSequence_Button->setStyleSheet(QLatin1String("#pausePatSequence_Button{\n"
"background-color: transparent;\n"
"backgorund: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/Icons/my_pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pausePatSequence_Button->setIcon(icon6);
        pausePatSequence_Button->setIconSize(QSize(40, 40));
        pausePatSequence_Button->setCheckable(false);
        pausePatSequence_Button->setChecked(false);

        horizontalLayout_24->addWidget(pausePatSequence_Button);

        stopPatSequence_Button = new QPushButton(scrollAreaWidgetContents);
        stopPatSequence_Button->setObjectName(QStringLiteral("stopPatSequence_Button"));
        stopPatSequence_Button->setEnabled(false);
        sizePolicy5.setHeightForWidth(stopPatSequence_Button->sizePolicy().hasHeightForWidth());
        stopPatSequence_Button->setSizePolicy(sizePolicy5);
        stopPatSequence_Button->setMinimumSize(QSize(50, 40));
        stopPatSequence_Button->setStyleSheet(QLatin1String("#stopPatSequence_Button{\n"
"background-color: transparent;\n"
"border-image: url(:connected.png);\n"
"backgorund: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/Icons/my_stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopPatSequence_Button->setIcon(icon7);
        stopPatSequence_Button->setIconSize(QSize(40, 40));

        horizontalLayout_24->addWidget(stopPatSequence_Button);

        pushButton_patternMode = new QPushButton(scrollAreaWidgetContents);
        pushButton_patternMode->setObjectName(QStringLiteral("pushButton_patternMode"));
        pushButton_patternMode->setEnabled(true);
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(pushButton_patternMode->sizePolicy().hasHeightForWidth());
        pushButton_patternMode->setSizePolicy(sizePolicy10);
        pushButton_patternMode->setMinimumSize(QSize(0, 40));
        pushButton_patternMode->setFont(font5);
        pushButton_patternMode->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"   }"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Images/images/pattern.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_patternMode->setIcon(icon8);
        pushButton_patternMode->setIconSize(QSize(40, 40));
        pushButton_patternMode->setCheckable(true);
        pushButton_patternMode->setChecked(true);

        horizontalLayout_24->addWidget(pushButton_patternMode);

        pushButton_LEDDriver = new QPushButton(scrollAreaWidgetContents);
        pushButton_LEDDriver->setObjectName(QStringLiteral("pushButton_LEDDriver"));
        sizePolicy10.setHeightForWidth(pushButton_LEDDriver->sizePolicy().hasHeightForWidth());
        pushButton_LEDDriver->setSizePolicy(sizePolicy10);
        pushButton_LEDDriver->setMinimumSize(QSize(0, 45));
        pushButton_LEDDriver->setFont(font5);
        pushButton_LEDDriver->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"   }"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Images/images/LEDDriver_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_LEDDriver->setIcon(icon9);
        pushButton_LEDDriver->setIconSize(QSize(40, 40));
        pushButton_LEDDriver->setCheckable(true);

        horizontalLayout_24->addWidget(pushButton_LEDDriver);

        pushButton_ZMachineControl = new QPushButton(scrollAreaWidgetContents);
        pushButton_ZMachineControl->setObjectName(QStringLiteral("pushButton_ZMachineControl"));
        sizePolicy10.setHeightForWidth(pushButton_ZMachineControl->sizePolicy().hasHeightForWidth());
        pushButton_ZMachineControl->setSizePolicy(sizePolicy10);
        pushButton_ZMachineControl->setMinimumSize(QSize(0, 0));
        pushButton_ZMachineControl->setFont(font5);
        pushButton_ZMachineControl->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"   }"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Images/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ZMachineControl->setIcon(icon10);
        pushButton_ZMachineControl->setIconSize(QSize(40, 40));
        pushButton_ZMachineControl->setCheckable(true);

        horizontalLayout_24->addWidget(pushButton_ZMachineControl);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy5.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy5);
        label_8->setFont(font6);
        label_8->setStyleSheet(QLatin1String("QLabel{\n"
"	color:rgb(0,150,150);\n"
"   }"));

        horizontalLayout_24->addWidget(label_8);

        StartTime = new QLabel(scrollAreaWidgetContents);
        StartTime->setObjectName(QStringLiteral("StartTime"));
        sizePolicy5.setHeightForWidth(StartTime->sizePolicy().hasHeightForWidth());
        StartTime->setSizePolicy(sizePolicy5);
        StartTime->setMinimumSize(QSize(70, 0));
        StartTime->setFont(font6);
        StartTime->setStyleSheet(QLatin1String("QLabel{\n"
"	color:rgb(0,150,150);\n"
"   }"));

        horizontalLayout_24->addWidget(StartTime);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy5.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy5);
        QFont font13;
        font13.setFamily(QStringLiteral("Arial"));
        font13.setPointSize(14);
        font13.setBold(true);
        font13.setWeight(75);
        label_12->setFont(font13);
        label_12->setStyleSheet(QLatin1String("QLabel{\n"
"	color:rgb(0,150,150);\n"
"   }"));

        horizontalLayout_24->addWidget(label_12);

        TotalTime = new QLabel(scrollAreaWidgetContents);
        TotalTime->setObjectName(QStringLiteral("TotalTime"));
        sizePolicy5.setHeightForWidth(TotalTime->sizePolicy().hasHeightForWidth());
        TotalTime->setSizePolicy(sizePolicy5);
        TotalTime->setMinimumSize(QSize(70, 0));
        TotalTime->setFont(font6);
        TotalTime->setStyleSheet(QLatin1String("QLabel{\n"
"	color:rgb(0,150,150);\n"
"   }"));

        horizontalLayout_24->addWidget(TotalTime);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy5.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy5);
        label_16->setFont(font6);
        label_16->setStyleSheet(QLatin1String("QLabel{\n"
"	color:rgb(0,150,150);\n"
"   }"));

        horizontalLayout_24->addWidget(label_16);

        PatternIndex = new QLabel(scrollAreaWidgetContents);
        PatternIndex->setObjectName(QStringLiteral("PatternIndex"));
        sizePolicy5.setHeightForWidth(PatternIndex->sizePolicy().hasHeightForWidth());
        PatternIndex->setSizePolicy(sizePolicy5);
        PatternIndex->setMinimumSize(QSize(100, 0));
        PatternIndex->setFont(font5);
        PatternIndex->setStyleSheet(QLatin1String("QLabel{border:0px;\n"
"color:rgb(0,150,150);}"));

        horizontalLayout_24->addWidget(PatternIndex);


        gridLayout->addLayout(horizontalLayout_24, 0, 0, 1, 1);

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
        Baudrate->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DLPJGroup", nullptr));
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
        LiftSeqTime->setTitle(QApplication::translate("MainWindow", "Lift / Sequence Time (ms)", nullptr));
        UpdateTotalTime->setText(QApplication::translate("MainWindow", "Update", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Z Lift Time Normal", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Print Start Delay", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Z Lift Time Base", nullptr));
        label_Exposure->setText(QApplication::translate("MainWindow", "Exposure Time ", nullptr));
#ifndef QT_NO_TOOLTIP
        exposure_lineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        exposure_lineEdit->setText(QString());
        label_Exposure_2->setText(QApplication::translate("MainWindow", "Before Z Time", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Auto Homing", nullptr));
        HomeDelay->setText(QApplication::translate("MainWindow", "Homing Delay", nullptr));
        ManualHoming->setText(QApplication::translate("MainWindow", "Manual Homing", nullptr));
        AutoHoming->setText(QApplication::translate("MainWindow", "Auto Homing", nullptr));
        groupBox_PatternMode->setTitle(QApplication::translate("MainWindow", "Pattern Mode", nullptr));
        groupBox_LEDDriver->setTitle(QApplication::translate("MainWindow", "LED Driver", nullptr));
        label_ReadBuffer->setText(QApplication::translate("MainWindow", "Read Buffer", nullptr));
        USBDevicePath->setText(QApplication::translate("MainWindow", "USB Device path", nullptr));
        pushButton_RestartLEDDriver->setText(QApplication::translate("MainWindow", "Restart LED Driver", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Status", nullptr));
        label_LEDDriverStatus->setText(QString());
        checkBox_InternalInitialization->setText(QApplication::translate("MainWindow", "Internal Initialization", nullptr));
        checkBox_LEDTempOK->setText(QApplication::translate("MainWindow", "LED Temp OK", nullptr));
        checkBox_DMDTempOK->setText(QApplication::translate("MainWindow", "DMD Temp OK", nullptr));
        checkBox_BoardTempOK->setText(QApplication::translate("MainWindow", "Board Temp OK", nullptr));
        checkBox_HardwareOK->setText(QApplication::translate("MainWindow", "Hardware OK", nullptr));
        checkBox_IntensityCalOK->setText(QApplication::translate("MainWindow", "Intensity Calibration", nullptr));
        checkBox_WriteProtection->setText(QApplication::translate("MainWindow", "Write Protection", nullptr));
        checkBox_IntensityModInstall->setText(QApplication::translate("MainWindow", "Intensity Modul Installed", nullptr));
        label_IntensityGain->setText(QApplication::translate("MainWindow", "Intensity Gain", nullptr));
        label_CycleTime->setText(QApplication::translate("MainWindow", "Cycle Time", nullptr));
        label_IntensityOffset->setText(QApplication::translate("MainWindow", "Intensity Offset", nullptr));
        label_LEDCurrent->setText(QApplication::translate("MainWindow", "LED Current [mA]", nullptr));
        label_BoardTemp->setText(QApplication::translate("MainWindow", "Board Temp [\302\260C]", nullptr));
        label_BoardTempMax->setText(QApplication::translate("MainWindow", "Board Temp Max", nullptr));
        label_LEDTempMax->setText(QApplication::translate("MainWindow", "LED Temp Max", nullptr));
        label_LEDCurrentMax->setText(QApplication::translate("MainWindow", "LED Current Max", nullptr));
        label_DMDTempMax->setText(QApplication::translate("MainWindow", "DMD Temp Max", nullptr));
        label_LEDSerial->setText(QApplication::translate("MainWindow", "LED Serial", nullptr));
        label_Intensity->setText(QApplication::translate("MainWindow", "Intensity [uW/cm2]", nullptr));
        label_LEDVoltage->setText(QApplication::translate("MainWindow", "<html><head/><body><p>LED Voltage [V]</p></body></html>", nullptr));
        Label_DMDTemp->setText(QApplication::translate("MainWindow", "DMD Temp [\302\260C]", nullptr));
        label_IntensityVoltage->setText(QApplication::translate("MainWindow", "Intensity Volt [mV]", nullptr));
        label_LEDTemp->setText(QApplication::translate("MainWindow", "LED Temp [\302\260C]", nullptr));
        label_LESerial->setText(QApplication::translate("MainWindow", "Light Engine Serial", nullptr));
        label_Intensity2->setText(QApplication::translate("MainWindow", "Normal Intensity", nullptr));
        label_DMDFanSpeed->setText(QApplication::translate("MainWindow", "DMD FAN Speed", nullptr));
        label_LEDFanSpeed->setText(QApplication::translate("MainWindow", "LED FAN Speed", nullptr));
        label_PCBFanSpeed->setText(QApplication::translate("MainWindow", "PCB FAN Speed", nullptr));
        pushButton_SetIntensity->setText(QApplication::translate("MainWindow", "Manually Set Intensity", nullptr));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Mid Layer", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Count", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Intensity", nullptr));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Base Layer", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Count", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Intensity", nullptr));
        label_LEDCurrent2->setText(QApplication::translate("MainWindow", "LED Current [mA]", nullptr));
        pushButton_SetLEDCurrent->setText(QApplication::translate("MainWindow", "Set LED Current", nullptr));
        pushButton_LEDPWMON_OFF->setText(QApplication::translate("MainWindow", "LED PWM OFF", nullptr));
        checkBox_IntensityRegEnable->setText(QApplication::translate("MainWindow", "Intensity Reg. Enable?", nullptr));
        pushButton_EnableIntensityReg->setText(QApplication::translate("MainWindow", "Enable Intensity Regulation", nullptr));
        groupBox_ZMachineControl->setTitle(QApplication::translate("MainWindow", "Z Machine Control", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Machine Settings", nullptr));
        ComPort->setText(QApplication::translate("MainWindow", "Com Port", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Baud Rate", nullptr));
        BoardStatus->setText(QString());
        Baudrate->setItemText(0, QApplication::translate("MainWindow", "9600", nullptr));
        Baudrate->setItemText(1, QApplication::translate("MainWindow", "56000", nullptr));
        Baudrate->setItemText(2, QApplication::translate("MainWindow", "76800", nullptr));
        Baudrate->setItemText(3, QApplication::translate("MainWindow", "115200", nullptr));
        Baudrate->setItemText(4, QApplication::translate("MainWindow", "250000", nullptr));
        Baudrate->setItemText(5, QApplication::translate("MainWindow", "256000", nullptr));

        LoadMacProfile->setText(QApplication::translate("MainWindow", "Load Profile", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "Machine Profile", nullptr));
        SaveMacProfile->setText(QApplication::translate("MainWindow", "Save Profile", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Z Axis Movement", nullptr));
        AutoHome->setText(QApplication::translate("MainWindow", "Auto Home", nullptr));
        Moveup01->setText(QApplication::translate("MainWindow", "0.1 mm", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "Move Up", nullptr));
        Moveup100->setText(QApplication::translate("MainWindow", "100 mm", nullptr));
        Moveup10->setText(QApplication::translate("MainWindow", "10 mm", nullptr));
        Moveup1->setText(QApplication::translate("MainWindow", "1 mm", nullptr));
        Movedown10->setText(QApplication::translate("MainWindow", "10 mm", nullptr));
        Movedown01->setText(QApplication::translate("MainWindow", "0.1 mm", nullptr));
        Movedown1->setText(QApplication::translate("MainWindow", "1 mm", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "Move Down", nullptr));
        Movedown100->setText(QApplication::translate("MainWindow", "100 mm", nullptr));
        Moveup50->setText(QApplication::translate("MainWindow", "50 mm", nullptr));
        Movedown50->setText(QApplication::translate("MainWindow", "50 mm", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "G-code", nullptr));
        label->setText(QApplication::translate("MainWindow", "Start Print", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "End print", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "End Base Layer", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "End Normal Layer", nullptr));
        MotorControl->setTitle(QApplication::translate("MainWindow", "Motor Control", nullptr));
        MotorConDisable->setText(QApplication::translate("MainWindow", "Disable", nullptr));
        LayerCount->setTitle(QApplication::translate("MainWindow", "Layer Count", nullptr));
        EnableLayer->setText(QApplication::translate("MainWindow", "Enable Base Layer Count", nullptr));
        label_startlayer->setText(QApplication::translate("MainWindow", "Start Layer Count", nullptr));
        label_EndLayer->setText(QApplication::translate("MainWindow", "End Layer Count", nullptr));
#ifndef QT_NO_TOOLTIP
        StartLayerCount->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        StartLayerCount->setText(QString());
        ManualGcode_GroupBox->setTitle(QApplication::translate("MainWindow", "Manual Gcode Command", nullptr));
        SendManualGcode->setText(QApplication::translate("MainWindow", "Send", nullptr));
        ClearManualGcode->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        groupBox_SLCFileConrol->setTitle(QApplication::translate("MainWindow", "SLC File Control", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "GroupBox", nullptr));
        LoadSlcFile->setText(QApplication::translate("MainWindow", "Load SLC File", nullptr));
#ifndef QT_NO_TOOLTIP
        connectButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
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
        label_16->setText(QApplication::translate("MainWindow", "Pattern -", nullptr));
        PatternIndex->setText(QApplication::translate("MainWindow", "Empty", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
