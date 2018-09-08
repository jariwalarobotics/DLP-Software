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
    QGroupBox *groupBox;
    QPushButton *addPatternsButton;
    QPushButton *removePatternsButton;
    QPushButton *selectAllButton;
    QPushButton *saveButton_patternSettings;
    QPushButton *loadButton_patternSettings;
    QGroupBox *LiftSeqTime;
    QLineEdit *ZLiftdelay;
    QLabel *label_9;
    QLineEdit *PrintingDelay;
    QLabel *label_10;
    QLabel *label_13;
    QPushButton *UpdateTotalTime;
    QCheckBox *triggerIn_checkBox;
    QLabel *label_TrigOut1;
    QCheckBox *triggerOut2_checkBox;
    QLabel *label_Exposure;
    QLabel *label_14;
    QLineEdit *darkPeriod_lineEdit;
    QLineEdit *exposure_lineEdit;
    QLabel *label_17;
    QLabel *label_Exposure_2;
    QGroupBox *groupBox_2;
    QRadioButton *AutoHoming;
    QRadioButton *ManualHoming;
    QLabel *HomeDelay;
    QLineEdit *HomingDelay;
    QStackedWidget *stackedWidget;
    QWidget *patternModePage;
    QGridLayout *gridLayout_3;
    QFrame *frame_patternMode;
    QGridLayout *gridLayout_11;
    QGroupBox *groupBox_PatternMode;
    QHBoxLayout *horizontalLayout_26;
    QSpacerItem *horizontalSpacer_5;
    QStackedWidget *patternMode_stackedWidget;
    QWidget *patternDesignPage;
    QGridLayout *gridLayout_31;
    QVBoxLayout *verticalLayout_37;
    QSpacerItem *verticalSpacer;
    QScrollArea *waveFormArea;
    QWidget *scrollAreaWidgetContents_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
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
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *StartPrintGcode;
    QTextEdit *EndPrintGcode;
    QTextEdit *StartLayerGcode;
    QTextEdit *EndLayerGcode;
    QGroupBox *ManualGcode_GroupBox;
    QPushButton *SendManualGcode;
    QPushButton *ClearManualGcode;
    QTextEdit *ManualGcode;
    QGroupBox *MotorControl;
    QPushButton *MotorConDisable;
    QGroupBox *AutoBed;
    QPushButton *AutoBedLevel;
    QLabel *ComPort;
    QComboBox *SerialPort;
    QLabel *BoardStatus;
    QLabel *label_3;
    QPushButton *SaveMacProfile;
    QPushButton *LoadMacProfile;
    QTextBrowser *ProfileName;
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
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_16;
    QLabel *PatternIndex;
    QSpacerItem *horizontalSpacer;
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
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        frame_common = new QFrame(scrollAreaWidgetContents);
        frame_common->setObjectName(QStringLiteral("frame_common"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_common->sizePolicy().hasHeightForWidth());
        frame_common->setSizePolicy(sizePolicy);
        frame_common->setMinimumSize(QSize(245, 581));
        frame_common->setStyleSheet(QLatin1String("QFrame{background-image : url(:/images/img.jpg);\n"
"border:1px solid black}"));
        frame_common->setFrameShape(QFrame::StyledPanel);
        frame_common->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame_common);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 221, 111));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(9);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        addPatternsButton = new QPushButton(groupBox);
        addPatternsButton->setObjectName(QStringLiteral("addPatternsButton"));
        addPatternsButton->setGeometry(QRect(20, 65, 40, 35));
        sizePolicy1.setHeightForWidth(addPatternsButton->sizePolicy().hasHeightForWidth());
        addPatternsButton->setSizePolicy(sizePolicy1);
        addPatternsButton->setMinimumSize(QSize(40, 35));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/Icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addPatternsButton->setIcon(icon1);
        removePatternsButton = new QPushButton(groupBox);
        removePatternsButton->setObjectName(QStringLiteral("removePatternsButton"));
        removePatternsButton->setEnabled(false);
        removePatternsButton->setGeometry(QRect(85, 65, 40, 35));
        sizePolicy1.setHeightForWidth(removePatternsButton->sizePolicy().hasHeightForWidth());
        removePatternsButton->setSizePolicy(sizePolicy1);
        removePatternsButton->setMinimumSize(QSize(40, 35));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        removePatternsButton->setIcon(icon2);
        selectAllButton = new QPushButton(groupBox);
        selectAllButton->setObjectName(QStringLiteral("selectAllButton"));
        selectAllButton->setEnabled(false);
        selectAllButton->setGeometry(QRect(150, 65, 40, 35));
        sizePolicy1.setHeightForWidth(selectAllButton->sizePolicy().hasHeightForWidth());
        selectAllButton->setSizePolicy(sizePolicy1);
        selectAllButton->setMinimumSize(QSize(40, 35));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/Icons/select.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectAllButton->setIcon(icon3);
        saveButton_patternSettings = new QPushButton(groupBox);
        saveButton_patternSettings->setObjectName(QStringLiteral("saveButton_patternSettings"));
        saveButton_patternSettings->setEnabled(true);
        saveButton_patternSettings->setGeometry(QRect(20, 20, 75, 35));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(saveButton_patternSettings->sizePolicy().hasHeightForWidth());
        saveButton_patternSettings->setSizePolicy(sizePolicy2);
        saveButton_patternSettings->setMinimumSize(QSize(70, 35));
        saveButton_patternSettings->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/Icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton_patternSettings->setIcon(icon4);
        loadButton_patternSettings = new QPushButton(groupBox);
        loadButton_patternSettings->setObjectName(QStringLiteral("loadButton_patternSettings"));
        loadButton_patternSettings->setGeometry(QRect(115, 20, 75, 35));
        loadButton_patternSettings->setMinimumSize(QSize(70, 35));
        loadButton_patternSettings->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/Icons/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        loadButton_patternSettings->setIcon(icon5);
        LiftSeqTime = new QGroupBox(frame_common);
        LiftSeqTime->setObjectName(QStringLiteral("LiftSeqTime"));
        LiftSeqTime->setGeometry(QRect(10, 128, 221, 341));
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
        ZLiftdelay = new QLineEdit(LiftSeqTime);
        ZLiftdelay->setObjectName(QStringLiteral("ZLiftdelay"));
        ZLiftdelay->setGeometry(QRect(115, 155, 95, 35));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(11);
        ZLiftdelay->setFont(font2);
        label_9 = new QLabel(LiftSeqTime);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(135, 125, 71, 20));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(10);
        label_9->setFont(font3);
        label_9->setStyleSheet(QLatin1String("QLabel{ border: 0px ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        PrintingDelay = new QLineEdit(LiftSeqTime);
        PrintingDelay->setObjectName(QStringLiteral("PrintingDelay"));
        PrintingDelay->setGeometry(QRect(10, 155, 95, 35));
        PrintingDelay->setFont(font2);
        label_10 = new QLabel(LiftSeqTime);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 105, 51, 31));
        label_10->setFont(font3);
        label_10->setStyleSheet(QLatin1String("QLabel{ border: 0px ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        label_13 = new QLabel(LiftSeqTime);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 125, 81, 31));
        label_13->setFont(font3);
        label_13->setStyleSheet(QLatin1String("QLabel{ border: 0px ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        UpdateTotalTime = new QPushButton(LiftSeqTime);
        UpdateTotalTime->setObjectName(QStringLiteral("UpdateTotalTime"));
        UpdateTotalTime->setEnabled(true);
        UpdateTotalTime->setGeometry(QRect(50, 200, 111, 35));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(UpdateTotalTime->sizePolicy().hasHeightForWidth());
        UpdateTotalTime->setSizePolicy(sizePolicy3);
        UpdateTotalTime->setMinimumSize(QSize(0, 35));
        UpdateTotalTime->setFont(font3);
        UpdateTotalTime->setMouseTracking(true);
        UpdateTotalTime->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"}"));
        UpdateTotalTime->setCheckable(false);
        triggerIn_checkBox = new QCheckBox(LiftSeqTime);
        triggerIn_checkBox->setObjectName(QStringLiteral("triggerIn_checkBox"));
        triggerIn_checkBox->setEnabled(true);
        triggerIn_checkBox->setGeometry(QRect(10, 250, 111, 17));
        triggerIn_checkBox->setStyleSheet(QLatin1String("QCheckBox{\n"
"	color:rgb(0,150,150);\n"
"}"));
        label_TrigOut1 = new QLabel(LiftSeqTime);
        label_TrigOut1->setObjectName(QStringLiteral("label_TrigOut1"));
        label_TrigOut1->setEnabled(true);
        label_TrigOut1->setGeometry(QRect(10, 280, 111, 13));
        label_TrigOut1->setStyleSheet(QLatin1String("QLabel{border:0px;\n"
"	color:rgb(0,150,150);\n"
"}"));
        label_TrigOut1->setLineWidth(1);
        triggerOut2_checkBox = new QCheckBox(LiftSeqTime);
        triggerOut2_checkBox->setObjectName(QStringLiteral("triggerOut2_checkBox"));
        triggerOut2_checkBox->setEnabled(true);
        triggerOut2_checkBox->setGeometry(QRect(10, 310, 111, 17));
        triggerOut2_checkBox->setStyleSheet(QLatin1String("QCheckBox{\n"
"	color:rgb(0,150,150);\n"
"}"));
        label_Exposure = new QLabel(LiftSeqTime);
        label_Exposure->setObjectName(QStringLiteral("label_Exposure"));
        label_Exposure->setGeometry(QRect(25, 11, 61, 40));
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
        label_14 = new QLabel(LiftSeqTime);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(40, 26, 41, 50));
        label_14->setFont(font3);
        label_14->setStyleSheet(QLatin1String("QLabel{ border: 0px ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        darkPeriod_lineEdit = new QLineEdit(LiftSeqTime);
        darkPeriod_lineEdit->setObjectName(QStringLiteral("darkPeriod_lineEdit"));
        darkPeriod_lineEdit->setGeometry(QRect(115, 67, 95, 35));
        darkPeriod_lineEdit->setFont(font2);
        exposure_lineEdit = new QLineEdit(LiftSeqTime);
        exposure_lineEdit->setObjectName(QStringLiteral("exposure_lineEdit"));
        exposure_lineEdit->setGeometry(QRect(10, 67, 95, 35));
        exposure_lineEdit->setFont(font2);
        label_17 = new QLabel(LiftSeqTime);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(140, 25, 61, 50));
        label_17->setFont(font3);
        label_17->setStyleSheet(QLatin1String("QLabel{ border: 0px ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        label_Exposure_2 = new QLabel(LiftSeqTime);
        label_Exposure_2->setObjectName(QStringLiteral("label_Exposure_2"));
        label_Exposure_2->setGeometry(QRect(140, 10, 61, 40));
        label_Exposure_2->setFont(font4);
        label_Exposure_2->setStyleSheet(QLatin1String("QLabel{ border: 0px ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        label_Exposure_2->setWordWrap(true);
        groupBox_2 = new QGroupBox(frame_common);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 480, 221, 151));
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        AutoHoming = new QRadioButton(groupBox_2);
        AutoHoming->setObjectName(QStringLiteral("AutoHoming"));
        AutoHoming->setGeometry(QRect(50, 20, 100, 20));
        AutoHoming->setFont(font3);
        AutoHoming->setStyleSheet(QLatin1String("QRadioButton{\n"
"	color:rgb(0,150,150);\n"
"}"));
        AutoHoming->setChecked(true);
        ManualHoming = new QRadioButton(groupBox_2);
        ManualHoming->setObjectName(QStringLiteral("ManualHoming"));
        ManualHoming->setGeometry(QRect(50, 50, 110, 20));
        ManualHoming->setFont(font);
        ManualHoming->setStyleSheet(QLatin1String("QRadioButton{\n"
"	color:rgb(0,150,150);\n"
"}"));
        HomeDelay = new QLabel(groupBox_2);
        HomeDelay->setObjectName(QStringLiteral("HomeDelay"));
        HomeDelay->setEnabled(false);
        HomeDelay->setGeometry(QRect(52, 80, 91, 20));
        HomeDelay->setFont(font);
        HomeDelay->setStyleSheet(QLatin1String("QLabel{ border: 0px ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        HomingDelay = new QLineEdit(groupBox_2);
        HomingDelay->setObjectName(QStringLiteral("HomingDelay"));
        HomingDelay->setEnabled(false);
        HomingDelay->setGeometry(QRect(40, 110, 100, 30));
        HomingDelay->setFont(font2);

        horizontalLayout_25->addWidget(frame_common);

        stackedWidget = new QStackedWidget(scrollAreaWidgetContents);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy4);
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
        sizePolicy4.setHeightForWidth(frame_patternMode->sizePolicy().hasHeightForWidth());
        frame_patternMode->setSizePolicy(sizePolicy4);
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
        sizePolicy4.setHeightForWidth(groupBox_PatternMode->sizePolicy().hasHeightForWidth());
        groupBox_PatternMode->setSizePolicy(sizePolicy4);
        QFont font5;
        font5.setFamily(QStringLiteral("Arial"));
        font5.setPointSize(12);
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
        horizontalSpacer_5 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_5);

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
        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_37->addItem(verticalSpacer);

        waveFormArea = new QScrollArea(patternDesignPage);
        waveFormArea->setObjectName(QStringLiteral("waveFormArea"));
        sizePolicy4.setHeightForWidth(waveFormArea->sizePolicy().hasHeightForWidth());
        waveFormArea->setSizePolicy(sizePolicy4);
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
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 880, 554));
        waveFormArea->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_37->addWidget(waveFormArea);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_37->addItem(verticalSpacer_2);


        gridLayout_31->addLayout(verticalLayout_37, 0, 0, 1, 1);

        patternMode_stackedWidget->addWidget(patternDesignPage);

        horizontalLayout_26->addWidget(patternMode_stackedWidget);

        horizontalSpacer_6 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_6);


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
        sizePolicy4.setHeightForWidth(frame_LedDriver->sizePolicy().hasHeightForWidth());
        frame_LedDriver->setSizePolicy(sizePolicy4);
        frame_LedDriver->setStyleSheet(QLatin1String("QFrame{background-image : url(:/images/img.jpg);\n"
"border:1px solid black}"));
        frame_LedDriver->setFrameShape(QFrame::StyledPanel);
        frame_LedDriver->setFrameShadow(QFrame::Raised);
        groupBox_LEDDriver = new QGroupBox(frame_LedDriver);
        groupBox_LEDDriver->setObjectName(QStringLiteral("groupBox_LEDDriver"));
        groupBox_LEDDriver->setGeometry(QRect(9, 9, 1081, 621));
        sizePolicy4.setHeightForWidth(groupBox_LEDDriver->sizePolicy().hasHeightForWidth());
        groupBox_LEDDriver->setSizePolicy(sizePolicy4);
        groupBox_LEDDriver->setFont(font5);
        groupBox_LEDDriver->setStyleSheet(QLatin1String("QGroupBox{ border: 1.5px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        groupBox_LEDDriverStatus = new QGroupBox(groupBox_LEDDriver);
        groupBox_LEDDriverStatus->setObjectName(QStringLiteral("groupBox_LEDDriverStatus"));
        groupBox_LEDDriverStatus->setGeometry(QRect(9, 19, 1061, 581));
        QFont font6;
        font6.setPointSize(9);
        groupBox_LEDDriverStatus->setFont(font6);
        groupBox_LEDDriverStatus->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        USBDevicePath_TextEdit = new QTextEdit(groupBox_LEDDriverStatus);
        USBDevicePath_TextEdit->setObjectName(QStringLiteral("USBDevicePath_TextEdit"));
        USBDevicePath_TextEdit->setEnabled(true);
        USBDevicePath_TextEdit->setGeometry(QRect(135, 23, 540, 31));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(50);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(USBDevicePath_TextEdit->sizePolicy().hasHeightForWidth());
        USBDevicePath_TextEdit->setSizePolicy(sizePolicy5);
        USBDevicePath_TextEdit->setFont(font3);
        USBDevicePath_TextEdit->setStyleSheet(QLatin1String("QTextEdit{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        USBDevicePath = new QLabel(groupBox_LEDDriverStatus);
        USBDevicePath->setObjectName(QStringLiteral("USBDevicePath"));
        USBDevicePath->setGeometry(QRect(10, 23, 121, 31));
        USBDevicePath->setFont(font2);
        USBDevicePath->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        label_ReadBuffer = new QLabel(groupBox_LEDDriverStatus);
        label_ReadBuffer->setObjectName(QStringLiteral("label_ReadBuffer"));
        label_ReadBuffer->setGeometry(QRect(10, 65, 85, 31));
        label_ReadBuffer->setFont(font2);
        label_ReadBuffer->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        pushButton_RestartLEDDriver = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_RestartLEDDriver->setObjectName(QStringLiteral("pushButton_RestartLEDDriver"));
        pushButton_RestartLEDDriver->setGeometry(QRect(915, 65, 130, 31));
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
        checkBox_InternalInitialization = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_InternalInitialization->setObjectName(QStringLiteral("checkBox_InternalInitialization"));
        checkBox_InternalInitialization->setEnabled(false);
        checkBox_InternalInitialization->setGeometry(QRect(10, 110, 130, 20));
        checkBox_InternalInitialization->setFont(font);
        checkBox_LEDTempOK = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_LEDTempOK->setObjectName(QStringLiteral("checkBox_LEDTempOK"));
        checkBox_LEDTempOK->setEnabled(false);
        checkBox_LEDTempOK->setGeometry(QRect(10, 135, 130, 20));
        checkBox_LEDTempOK->setFont(font);
        checkBox_DMDTempOK = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_DMDTempOK->setObjectName(QStringLiteral("checkBox_DMDTempOK"));
        checkBox_DMDTempOK->setEnabled(false);
        checkBox_DMDTempOK->setGeometry(QRect(10, 160, 130, 20));
        checkBox_DMDTempOK->setFont(font);
        checkBox_BoardTempOK = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_BoardTempOK->setObjectName(QStringLiteral("checkBox_BoardTempOK"));
        checkBox_BoardTempOK->setEnabled(false);
        checkBox_BoardTempOK->setGeometry(QRect(10, 185, 130, 20));
        checkBox_BoardTempOK->setFont(font);
        checkBox_HardwareOK = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_HardwareOK->setObjectName(QStringLiteral("checkBox_HardwareOK"));
        checkBox_HardwareOK->setEnabled(false);
        checkBox_HardwareOK->setGeometry(QRect(10, 208, 130, 20));
        checkBox_HardwareOK->setFont(font);
        checkBox_IntensityCalOK = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_IntensityCalOK->setObjectName(QStringLiteral("checkBox_IntensityCalOK"));
        checkBox_IntensityCalOK->setEnabled(false);
        checkBox_IntensityCalOK->setGeometry(QRect(10, 233, 150, 20));
        checkBox_IntensityCalOK->setFont(font);
        checkBox_WriteProtection = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_WriteProtection->setObjectName(QStringLiteral("checkBox_WriteProtection"));
        checkBox_WriteProtection->setEnabled(false);
        checkBox_WriteProtection->setGeometry(QRect(10, 258, 130, 20));
        checkBox_WriteProtection->setFont(font);
        checkBox_IntensityModInstall = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_IntensityModInstall->setObjectName(QStringLiteral("checkBox_IntensityModInstall"));
        checkBox_IntensityModInstall->setEnabled(false);
        checkBox_IntensityModInstall->setGeometry(QRect(10, 282, 150, 20));
        checkBox_IntensityModInstall->setFont(font);
        label_DMDTempMax = new QLabel(groupBox_LEDDriverStatus);
        label_DMDTempMax->setObjectName(QStringLiteral("label_DMDTempMax"));
        label_DMDTempMax->setGeometry(QRect(200, 110, 95, 25));
        label_DMDTempMax->setFont(font);
        label_DMDTempMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        DMDTempMax_text = new QTextBrowser(groupBox_LEDDriverStatus);
        DMDTempMax_text->setObjectName(QStringLiteral("DMDTempMax_text"));
        DMDTempMax_text->setEnabled(false);
        DMDTempMax_text->setGeometry(QRect(300, 110, 75, 25));
        DMDTempMax_text->setFont(font);
        DMDTempMax_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LEDTempMax = new QLabel(groupBox_LEDDriverStatus);
        label_LEDTempMax->setObjectName(QStringLiteral("label_LEDTempMax"));
        label_LEDTempMax->setGeometry(QRect(200, 146, 90, 25));
        label_LEDTempMax->setFont(font);
        label_LEDTempMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        LEDTempMax_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDTempMax_text->setObjectName(QStringLiteral("LEDTempMax_text"));
        LEDTempMax_text->setEnabled(false);
        LEDTempMax_text->setGeometry(QRect(300, 146, 75, 25));
        LEDTempMax_text->setFont(font);
        LEDTempMax_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_BoardTempMax = new QLabel(groupBox_LEDDriverStatus);
        label_BoardTempMax->setObjectName(QStringLiteral("label_BoardTempMax"));
        label_BoardTempMax->setGeometry(QRect(200, 185, 95, 25));
        label_BoardTempMax->setFont(font);
        label_BoardTempMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        BoardTempMax_text = new QTextBrowser(groupBox_LEDDriverStatus);
        BoardTempMax_text->setObjectName(QStringLiteral("BoardTempMax_text"));
        BoardTempMax_text->setEnabled(false);
        BoardTempMax_text->setGeometry(QRect(300, 185, 75, 25));
        BoardTempMax_text->setFont(font);
        BoardTempMax_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LEDCurrentMax = new QLabel(groupBox_LEDDriverStatus);
        label_LEDCurrentMax->setObjectName(QStringLiteral("label_LEDCurrentMax"));
        label_LEDCurrentMax->setGeometry(QRect(200, 220, 100, 25));
        label_LEDCurrentMax->setFont(font);
        label_LEDCurrentMax->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        LEDCurrentMax_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDCurrentMax_text->setObjectName(QStringLiteral("LEDCurrentMax_text"));
        LEDCurrentMax_text->setEnabled(false);
        LEDCurrentMax_text->setGeometry(QRect(300, 220, 75, 25));
        LEDCurrentMax_text->setFont(font);
        LEDCurrentMax_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_IntensityOffset = new QLabel(groupBox_LEDDriverStatus);
        label_IntensityOffset->setObjectName(QStringLiteral("label_IntensityOffset"));
        label_IntensityOffset->setGeometry(QRect(200, 260, 90, 25));
        label_IntensityOffset->setFont(font3);
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
        label_IntensityGain->setFont(font3);
        label_IntensityGain->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        IntensityGain_text = new QTextBrowser(groupBox_LEDDriverStatus);
        IntensityGain_text->setObjectName(QStringLiteral("IntensityGain_text"));
        IntensityGain_text->setEnabled(false);
        IntensityGain_text->setGeometry(QRect(300, 300, 75, 25));
        IntensityGain_text->setFont(font);
        IntensityGain_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        Label_DMDTemp = new QLabel(groupBox_LEDDriverStatus);
        Label_DMDTemp->setObjectName(QStringLiteral("Label_DMDTemp"));
        Label_DMDTemp->setGeometry(QRect(400, 110, 90, 25));
        Label_DMDTemp->setFont(font);
        Label_DMDTemp->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        DMDTemp_text = new QTextBrowser(groupBox_LEDDriverStatus);
        DMDTemp_text->setObjectName(QStringLiteral("DMDTemp_text"));
        DMDTemp_text->setEnabled(false);
        DMDTemp_text->setGeometry(QRect(520, 110, 75, 25));
        DMDTemp_text->setFont(font);
        DMDTemp_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LEDTemp = new QLabel(groupBox_LEDDriverStatus);
        label_LEDTemp->setObjectName(QStringLiteral("label_LEDTemp"));
        label_LEDTemp->setGeometry(QRect(400, 146, 95, 25));
        label_LEDTemp->setFont(font);
        label_LEDTemp->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LEDTemp_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDTemp_text->setObjectName(QStringLiteral("LEDTemp_text"));
        LEDTemp_text->setEnabled(false);
        LEDTemp_text->setGeometry(QRect(520, 146, 75, 25));
        LEDTemp_text->setFont(font);
        LEDTemp_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_BoardTemp = new QLabel(groupBox_LEDDriverStatus);
        label_BoardTemp->setObjectName(QStringLiteral("label_BoardTemp"));
        label_BoardTemp->setGeometry(QRect(400, 185, 95, 25));
        label_BoardTemp->setFont(font3);
        label_BoardTemp->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        BoardTemp_text = new QTextBrowser(groupBox_LEDDriverStatus);
        BoardTemp_text->setObjectName(QStringLiteral("BoardTemp_text"));
        BoardTemp_text->setEnabled(false);
        BoardTemp_text->setGeometry(QRect(520, 185, 75, 25));
        BoardTemp_text->setFont(font);
        BoardTemp_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LEDVoltage = new QLabel(groupBox_LEDDriverStatus);
        label_LEDVoltage->setObjectName(QStringLiteral("label_LEDVoltage"));
        label_LEDVoltage->setGeometry(QRect(400, 220, 95, 25));
        label_LEDVoltage->setFont(font3);
        label_LEDVoltage->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LEDVoltage_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDVoltage_text->setObjectName(QStringLiteral("LEDVoltage_text"));
        LEDVoltage_text->setEnabled(false);
        LEDVoltage_text->setGeometry(QRect(520, 220, 75, 25));
        LEDVoltage_text->setFont(font);
        LEDVoltage_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LEDCurrent = new QLabel(groupBox_LEDDriverStatus);
        label_LEDCurrent->setObjectName(QStringLiteral("label_LEDCurrent"));
        label_LEDCurrent->setGeometry(QRect(400, 260, 105, 25));
        label_LEDCurrent->setFont(font3);
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
        label_CycleTime->setFont(font3);
        label_CycleTime->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        CycleTime_Text = new QTextBrowser(groupBox_LEDDriverStatus);
        CycleTime_Text->setObjectName(QStringLiteral("CycleTime_Text"));
        CycleTime_Text->setEnabled(false);
        CycleTime_Text->setGeometry(QRect(520, 300, 75, 25));
        CycleTime_Text->setFont(font);
        CycleTime_Text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_IntensityVoltage = new QLabel(groupBox_LEDDriverStatus);
        label_IntensityVoltage->setObjectName(QStringLiteral("label_IntensityVoltage"));
        label_IntensityVoltage->setGeometry(QRect(620, 110, 150, 25));
        label_IntensityVoltage->setFont(font2);
        label_IntensityVoltage->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        IntensityVoltage_text = new QTextBrowser(groupBox_LEDDriverStatus);
        IntensityVoltage_text->setObjectName(QStringLiteral("IntensityVoltage_text"));
        IntensityVoltage_text->setEnabled(false);
        IntensityVoltage_text->setGeometry(QRect(770, 110, 150, 25));
        IntensityVoltage_text->setFont(font);
        IntensityVoltage_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_Intensity = new QLabel(groupBox_LEDDriverStatus);
        label_Intensity->setObjectName(QStringLiteral("label_Intensity"));
        label_Intensity->setGeometry(QRect(620, 146, 120, 25));
        label_Intensity->setFont(font2);
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
        label_LEDSerial->setFont(font3);
        label_LEDSerial->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LEDSerial_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDSerial_text->setObjectName(QStringLiteral("LEDSerial_text"));
        LEDSerial_text->setEnabled(false);
        LEDSerial_text->setGeometry(QRect(770, 185, 200, 25));
        sizePolicy1.setHeightForWidth(LEDSerial_text->sizePolicy().hasHeightForWidth());
        LEDSerial_text->setSizePolicy(sizePolicy1);
        LEDSerial_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LESerial = new QLabel(groupBox_LEDDriverStatus);
        label_LESerial->setObjectName(QStringLiteral("label_LESerial"));
        label_LESerial->setGeometry(QRect(620, 220, 120, 25));
        QFont font8;
        font8.setFamily(QStringLiteral("Arial"));
        font8.setPointSize(10);
        font8.setItalic(false);
        label_LESerial->setFont(font8);
        label_LESerial->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LESerial_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LESerial_text->setObjectName(QStringLiteral("LESerial_text"));
        LESerial_text->setEnabled(false);
        LESerial_text->setGeometry(QRect(770, 220, 200, 25));
        sizePolicy1.setHeightForWidth(LESerial_text->sizePolicy().hasHeightForWidth());
        LESerial_text->setSizePolicy(sizePolicy1);
        LESerial_text->setFont(font);
        LESerial_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_PCBFanSpeed = new QLabel(groupBox_LEDDriverStatus);
        label_PCBFanSpeed->setObjectName(QStringLiteral("label_PCBFanSpeed"));
        label_PCBFanSpeed->setGeometry(QRect(10, 350, 150, 25));
        label_PCBFanSpeed->setFont(font3);
        label_PCBFanSpeed->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        PCBFanSpeed_text = new QTextBrowser(groupBox_LEDDriverStatus);
        PCBFanSpeed_text->setObjectName(QStringLiteral("PCBFanSpeed_text"));
        PCBFanSpeed_text->setGeometry(QRect(160, 350, 95, 25));
        PCBFanSpeed_text->setFont(font);
        PCBFanSpeed_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_DMDFanSpeed = new QLabel(groupBox_LEDDriverStatus);
        label_DMDFanSpeed->setObjectName(QStringLiteral("label_DMDFanSpeed"));
        label_DMDFanSpeed->setGeometry(QRect(10, 385, 150, 25));
        label_DMDFanSpeed->setFont(font3);
        label_DMDFanSpeed->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        DMDFanSpeed_text = new QTextBrowser(groupBox_LEDDriverStatus);
        DMDFanSpeed_text->setObjectName(QStringLiteral("DMDFanSpeed_text"));
        DMDFanSpeed_text->setGeometry(QRect(160, 385, 95, 25));
        DMDFanSpeed_text->setFont(font);
        DMDFanSpeed_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LEDFanSpeed = new QLabel(groupBox_LEDDriverStatus);
        label_LEDFanSpeed->setObjectName(QStringLiteral("label_LEDFanSpeed"));
        label_LEDFanSpeed->setGeometry(QRect(10, 420, 150, 25));
        label_LEDFanSpeed->setFont(font3);
        label_LEDFanSpeed->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        LEDFanSpeed_text = new QTextBrowser(groupBox_LEDDriverStatus);
        LEDFanSpeed_text->setObjectName(QStringLiteral("LEDFanSpeed_text"));
        LEDFanSpeed_text->setGeometry(QRect(160, 420, 95, 25));
        LEDFanSpeed_text->setFont(font);
        LEDFanSpeed_text->setStyleSheet(QLatin1String("QTextBrowser{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        label_LEDCurrent2 = new QLabel(groupBox_LEDDriverStatus);
        label_LEDCurrent2->setObjectName(QStringLiteral("label_LEDCurrent2"));
        label_LEDCurrent2->setGeometry(QRect(10, 470, 150, 25));
        label_LEDCurrent2->setFont(font3);
        label_LEDCurrent2->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        pushButton_SetLEDCurrent = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_SetLEDCurrent->setObjectName(QStringLiteral("pushButton_SetLEDCurrent"));
        pushButton_SetLEDCurrent->setGeometry(QRect(170, 495, 115, 25));
        QFont font9;
        font9.setFamily(QStringLiteral("Arial"));
        font9.setPointSize(9);
        font9.setBold(true);
        font9.setWeight(75);
        pushButton_SetLEDCurrent->setFont(font9);
        pushButton_LEDPWMON_OFF = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_LEDPWMON_OFF->setObjectName(QStringLiteral("pushButton_LEDPWMON_OFF"));
        pushButton_LEDPWMON_OFF->setGeometry(QRect(10, 530, 150, 30));
        pushButton_LEDPWMON_OFF->setFont(font7);
        label_Intensity2 = new QLabel(groupBox_LEDDriverStatus);
        label_Intensity2->setObjectName(QStringLiteral("label_Intensity2"));
        label_Intensity2->setGeometry(QRect(330, 470, 150, 25));
        label_Intensity2->setFont(font2);
        label_Intensity2->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        pushButton_SetIntensity = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_SetIntensity->setObjectName(QStringLiteral("pushButton_SetIntensity"));
        pushButton_SetIntensity->setGeometry(QRect(495, 495, 115, 25));
        pushButton_SetIntensity->setFont(font9);
        checkBox_IntensityRegEnable = new QCheckBox(groupBox_LEDDriverStatus);
        checkBox_IntensityRegEnable->setObjectName(QStringLiteral("checkBox_IntensityRegEnable"));
        checkBox_IntensityRegEnable->setGeometry(QRect(420, 350, 160, 25));
        checkBox_IntensityRegEnable->setFont(font3);
        checkBox_IntensityRegEnable->setChecked(false);
        pushButton_EnableIntensityReg = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_EnableIntensityReg->setObjectName(QStringLiteral("pushButton_EnableIntensityReg"));
        pushButton_EnableIntensityReg->setGeometry(QRect(410, 380, 175, 25));
        pushButton_EnableIntensityReg->setFont(font9);
        pushButton_ExTrigger = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_ExTrigger->setObjectName(QStringLiteral("pushButton_ExTrigger"));
        pushButton_ExTrigger->setGeometry(QRect(650, 495, 120, 35));
        pushButton_ExTrigger->setFont(font7);
        pushButton_SwTrigger = new QPushButton(groupBox_LEDDriverStatus);
        pushButton_SwTrigger->setObjectName(QStringLiteral("pushButton_SwTrigger"));
        pushButton_SwTrigger->setGeometry(QRect(790, 495, 120, 35));
        pushButton_SwTrigger->setFont(font7);
        Text_Readbuffer = new QTextEdit(groupBox_LEDDriverStatus);
        Text_Readbuffer->setObjectName(QStringLiteral("Text_Readbuffer"));
        Text_Readbuffer->setGeometry(QRect(100, 65, 801, 35));
        sizePolicy5.setHeightForWidth(Text_Readbuffer->sizePolicy().hasHeightForWidth());
        Text_Readbuffer->setSizePolicy(sizePolicy5);
        Text_Readbuffer->setFont(font);
        Text_Readbuffer->setStyleSheet(QLatin1String("QTextEdit{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
";}"));
        LEDCurrent_lineEdit = new QLineEdit(groupBox_LEDDriverStatus);
        LEDCurrent_lineEdit->setObjectName(QStringLiteral("LEDCurrent_lineEdit"));
        LEDCurrent_lineEdit->setGeometry(QRect(10, 495, 150, 25));
        LEDCurrent_lineEdit->setFont(font);
        LEDCurrent_lineEdit->setStyleSheet(QStringLiteral(""));
        Intensity_lineEdit = new QLineEdit(groupBox_LEDDriverStatus);
        Intensity_lineEdit->setObjectName(QStringLiteral("Intensity_lineEdit"));
        Intensity_lineEdit->setGeometry(QRect(330, 495, 150, 25));
        Intensity_lineEdit->setFont(font);
        label_LEDDriverStatus = new QLabel(groupBox_LEDDriverStatus);
        label_LEDDriverStatus->setObjectName(QStringLiteral("label_LEDDriverStatus"));
        label_LEDDriverStatus->setGeometry(QRect(795, 23, 240, 31));
        label_LEDDriverStatus->setFont(font2);
        label_LEDDriverStatus->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));
        label_11 = new QLabel(groupBox_LEDDriverStatus);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(720, 23, 65, 31));
        label_11->setFont(font2);
        label_11->setStyleSheet(QStringLiteral("QLabel{Border:0px}"));

        gridLayout_9->addWidget(frame_LedDriver, 0, 0, 1, 1);

        stackedWidget->addWidget(LEDDriverPage);
        ZMachineControl = new QWidget();
        ZMachineControl->setObjectName(QStringLiteral("ZMachineControl"));
        frame_ZMavhineControl = new QFrame(ZMachineControl);
        frame_ZMavhineControl->setObjectName(QStringLiteral("frame_ZMavhineControl"));
        frame_ZMavhineControl->setGeometry(QRect(0, 0, 1098, 641));
        sizePolicy4.setHeightForWidth(frame_ZMavhineControl->sizePolicy().hasHeightForWidth());
        frame_ZMavhineControl->setSizePolicy(sizePolicy4);
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
        groupBox_ZMachineControl->setFont(font5);
        groupBox_ZMachineControl->setAutoFillBackground(false);
        groupBox_ZMachineControl->setStyleSheet(QLatin1String("QGroupBox{ border: 1.5px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}\n"
"QLabel{border:0px}"));
        PrinterBoard = new QGroupBox(groupBox_ZMachineControl);
        PrinterBoard->setObjectName(QStringLiteral("PrinterBoard"));
        PrinterBoard->setGeometry(QRect(10, 320, 221, 291));
        sizePolicy1.setHeightForWidth(PrinterBoard->sizePolicy().hasHeightForWidth());
        PrinterBoard->setSizePolicy(sizePolicy1);
        PrinterBoard->setMinimumSize(QSize(0, 0));
        PrinterBoard->setFont(font9);
        PrinterBoard->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        Moveup50 = new QPushButton(PrinterBoard);
        Moveup50->setObjectName(QStringLiteral("Moveup50"));
        Moveup50->setGeometry(QRect(10, 110, 95, 30));
        Moveup50->setFont(font3);
        AutoHome = new QPushButton(PrinterBoard);
        AutoHome->setObjectName(QStringLiteral("AutoHome"));
        AutoHome->setGeometry(QRect(60, 30, 95, 30));
        AutoHome->setFont(font3);
        Movedown1 = new QPushButton(PrinterBoard);
        Movedown1->setObjectName(QStringLiteral("Movedown1"));
        Movedown1->setGeometry(QRect(120, 190, 95, 30));
        Movedown1->setFont(font3);
        Movedown100 = new QPushButton(PrinterBoard);
        Movedown100->setObjectName(QStringLiteral("Movedown100"));
        Movedown100->setGeometry(QRect(120, 70, 95, 30));
        Movedown100->setFont(font3);
        Moveup100 = new QPushButton(PrinterBoard);
        Moveup100->setObjectName(QStringLiteral("Moveup100"));
        Moveup100->setGeometry(QRect(10, 70, 95, 30));
        Moveup100->setFont(font3);
        Moveup1 = new QPushButton(PrinterBoard);
        Moveup1->setObjectName(QStringLiteral("Moveup1"));
        Moveup1->setGeometry(QRect(10, 190, 95, 30));
        Moveup1->setFont(font3);
        Moveup01 = new QPushButton(PrinterBoard);
        Moveup01->setObjectName(QStringLiteral("Moveup01"));
        Moveup01->setGeometry(QRect(10, 230, 95, 30));
        Moveup01->setFont(font3);
        Movedown10 = new QPushButton(PrinterBoard);
        Movedown10->setObjectName(QStringLiteral("Movedown10"));
        Movedown10->setGeometry(QRect(120, 150, 95, 30));
        Movedown10->setFont(font3);
        Moveup10 = new QPushButton(PrinterBoard);
        Moveup10->setObjectName(QStringLiteral("Moveup10"));
        Moveup10->setGeometry(QRect(10, 150, 95, 30));
        Moveup10->setFont(font3);
        label = new QLabel(PrinterBoard);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(29, 260, 60, 25));
        label->setFont(font7);
        Movedown50 = new QPushButton(PrinterBoard);
        Movedown50->setObjectName(QStringLiteral("Movedown50"));
        Movedown50->setGeometry(QRect(120, 110, 95, 30));
        Movedown50->setFont(font3);
        label_2 = new QLabel(PrinterBoard);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(127, 260, 80, 25));
        label_2->setFont(font7);
        Movedown01 = new QPushButton(PrinterBoard);
        Movedown01->setObjectName(QStringLiteral("Movedown01"));
        Movedown01->setGeometry(QRect(120, 230, 95, 30));
        Movedown01->setFont(font3);
        Gcode = new QGroupBox(groupBox_ZMachineControl);
        Gcode->setObjectName(QStringLiteral("Gcode"));
        Gcode->setGeometry(QRect(240, 10, 548, 601));
        sizePolicy3.setHeightForWidth(Gcode->sizePolicy().hasHeightForWidth());
        Gcode->setSizePolicy(sizePolicy3);
        Gcode->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        verticalLayoutWidget_2 = new QWidget(Gcode);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(9, 10, 121, 581));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font10;
        font10.setFamily(QStringLiteral("Arial"));
        font10.setPointSize(12);
        label_7->setFont(font10);

        verticalLayout_4->addWidget(label_7);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font10);

        verticalLayout_4->addWidget(label_6);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font10);

        verticalLayout_4->addWidget(label_5);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font10);

        verticalLayout_4->addWidget(label_4);

        verticalLayoutWidget = new QWidget(Gcode);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 10, 401, 581));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        StartPrintGcode = new QTextEdit(verticalLayoutWidget);
        StartPrintGcode->setObjectName(QStringLiteral("StartPrintGcode"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(StartPrintGcode->sizePolicy().hasHeightForWidth());
        StartPrintGcode->setSizePolicy(sizePolicy6);
        StartPrintGcode->setFont(font3);
        StartPrintGcode->setStyleSheet(QLatin1String("border-color: rgb(0,150,150);\n"
""));

        verticalLayout->addWidget(StartPrintGcode);

        EndPrintGcode = new QTextEdit(verticalLayoutWidget);
        EndPrintGcode->setObjectName(QStringLiteral("EndPrintGcode"));
        sizePolicy6.setHeightForWidth(EndPrintGcode->sizePolicy().hasHeightForWidth());
        EndPrintGcode->setSizePolicy(sizePolicy6);
        EndPrintGcode->setFont(font3);
        EndPrintGcode->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));

        verticalLayout->addWidget(EndPrintGcode);

        StartLayerGcode = new QTextEdit(verticalLayoutWidget);
        StartLayerGcode->setObjectName(QStringLiteral("StartLayerGcode"));
        sizePolicy6.setHeightForWidth(StartLayerGcode->sizePolicy().hasHeightForWidth());
        StartLayerGcode->setSizePolicy(sizePolicy6);
        StartLayerGcode->setFont(font3);
        StartLayerGcode->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));

        verticalLayout->addWidget(StartLayerGcode);

        EndLayerGcode = new QTextEdit(verticalLayoutWidget);
        EndLayerGcode->setObjectName(QStringLiteral("EndLayerGcode"));
        sizePolicy6.setHeightForWidth(EndLayerGcode->sizePolicy().hasHeightForWidth());
        EndLayerGcode->setSizePolicy(sizePolicy6);
        EndLayerGcode->setFont(font3);
        EndLayerGcode->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));

        verticalLayout->addWidget(EndLayerGcode);

        ManualGcode_GroupBox = new QGroupBox(groupBox_ZMachineControl);
        ManualGcode_GroupBox->setObjectName(QStringLiteral("ManualGcode_GroupBox"));
        ManualGcode_GroupBox->setGeometry(QRect(800, 280, 261, 331));
        ManualGcode_GroupBox->setFont(font9);
        ManualGcode_GroupBox->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        SendManualGcode = new QPushButton(ManualGcode_GroupBox);
        SendManualGcode->setObjectName(QStringLiteral("SendManualGcode"));
        SendManualGcode->setGeometry(QRect(20, 280, 95, 35));
        SendManualGcode->setFont(font7);
        ClearManualGcode = new QPushButton(ManualGcode_GroupBox);
        ClearManualGcode->setObjectName(QStringLiteral("ClearManualGcode"));
        ClearManualGcode->setGeometry(QRect(150, 280, 95, 35));
        ClearManualGcode->setFont(font7);
        ManualGcode = new QTextEdit(ManualGcode_GroupBox);
        ManualGcode->setObjectName(QStringLiteral("ManualGcode"));
        ManualGcode->setGeometry(QRect(10, 20, 241, 251));
        ManualGcode->setFont(font3);
        ManualGcode->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));
        MotorControl = new QGroupBox(groupBox_ZMachineControl);
        MotorControl->setObjectName(QStringLiteral("MotorControl"));
        MotorControl->setGeometry(QRect(800, 20, 111, 61));
        MotorControl->setFont(font9);
        MotorControl->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        MotorConDisable = new QPushButton(MotorControl);
        MotorConDisable->setObjectName(QStringLiteral("MotorConDisable"));
        MotorConDisable->setGeometry(QRect(10, 20, 85, 30));
        MotorConDisable->setFont(font7);
        AutoBed = new QGroupBox(groupBox_ZMachineControl);
        AutoBed->setObjectName(QStringLiteral("AutoBed"));
        AutoBed->setGeometry(QRect(920, 20, 141, 61));
        AutoBed->setFont(font9);
        AutoBed->setStyleSheet(QLatin1String("QGroupBox{ border: 1px solid ;\n"
"background-color: transparent;\n"
"border-color: rgb(0,150,150);\n"
"color:rgb(0,120,120);\n"
";}"));
        AutoBedLevel = new QPushButton(AutoBed);
        AutoBedLevel->setObjectName(QStringLiteral("AutoBedLevel"));
        AutoBedLevel->setGeometry(QRect(15, 20, 110, 30));
        AutoBedLevel->setFont(font7);
        ComPort = new QLabel(groupBox_ZMachineControl);
        ComPort->setObjectName(QStringLiteral("ComPort"));
        ComPort->setGeometry(QRect(10, 16, 101, 50));
        sizePolicy3.setHeightForWidth(ComPort->sizePolicy().hasHeightForWidth());
        ComPort->setSizePolicy(sizePolicy3);
        ComPort->setMinimumSize(QSize(0, 30));
        ComPort->setFont(font2);
        ComPort->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        SerialPort = new QComboBox(groupBox_ZMachineControl);
        SerialPort->setObjectName(QStringLiteral("SerialPort"));
        SerialPort->setEnabled(false);
        SerialPort->setGeometry(QRect(80, 26, 141, 30));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(SerialPort->sizePolicy().hasHeightForWidth());
        SerialPort->setSizePolicy(sizePolicy7);
        SerialPort->setMinimumSize(QSize(0, 30));
        SerialPort->setFont(font3);
        BoardStatus = new QLabel(groupBox_ZMachineControl);
        BoardStatus->setObjectName(QStringLiteral("BoardStatus"));
        BoardStatus->setGeometry(QRect(10, 60, 211, 31));
        BoardStatus->setFont(font2);
        BoardStatus->setStyleSheet(QStringLiteral("QLabel{border:0px}"));
        label_3 = new QLabel(groupBox_ZMachineControl);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 125, 111, 31));
        label_3->setFont(font2);
        SaveMacProfile = new QPushButton(groupBox_ZMachineControl);
        SaveMacProfile->setObjectName(QStringLiteral("SaveMacProfile"));
        SaveMacProfile->setGeometry(QRect(10, 200, 95, 31));
        SaveMacProfile->setFont(font3);
        LoadMacProfile = new QPushButton(groupBox_ZMachineControl);
        LoadMacProfile->setObjectName(QStringLiteral("LoadMacProfile"));
        LoadMacProfile->setGeometry(QRect(136, 200, 95, 31));
        LoadMacProfile->setFont(font3);
        ProfileName = new QTextBrowser(groupBox_ZMachineControl);
        ProfileName->setObjectName(QStringLiteral("ProfileName"));
        ProfileName->setGeometry(QRect(10, 160, 221, 31));
        ProfileName->setFont(font2);
        ProfileName->setStyleSheet(QStringLiteral("border-color: rgb(0,150,150);"));

        gridLayout_12->addWidget(groupBox_ZMachineControl, 0, 1, 1, 1);

        stackedWidget->addWidget(ZMachineControl);

        horizontalLayout_25->addWidget(stackedWidget);


        gridLayout->addLayout(horizontalLayout_25, 1, 0, 1, 1);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        horizontalLayout_24->setSizeConstraint(QLayout::SetNoConstraint);
        connectButton = new QPushButton(scrollAreaWidgetContents);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        QSizePolicy sizePolicy8(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy8);
        connectButton->setMinimumSize(QSize(10, 48));
        connectButton->setMaximumSize(QSize(16777215, 16777215));
        QFont font11;
        font11.setFamily(QStringLiteral("Arial"));
        font11.setPointSize(11);
        font11.setBold(true);
        font11.setWeight(75);
        connectButton->setFont(font11);
        connectButton->setStyleSheet(QLatin1String("#connectButton{\n"
"background-color: transparent;\n"
"border-image: url(:connected.png);\n"
"backgorund: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Images/images/connected.png"), QSize(), QIcon::Normal, QIcon::Off);
        connectButton->setIcon(icon6);
        connectButton->setIconSize(QSize(50, 50));
        connectButton->setCheckable(true);
        connectButton->setChecked(false);

        horizontalLayout_24->addWidget(connectButton);

        startPatSequence_Button = new QPushButton(scrollAreaWidgetContents);
        startPatSequence_Button->setObjectName(QStringLiteral("startPatSequence_Button"));
        sizePolicy8.setHeightForWidth(startPatSequence_Button->sizePolicy().hasHeightForWidth());
        startPatSequence_Button->setSizePolicy(sizePolicy8);
        startPatSequence_Button->setMinimumSize(QSize(50, 60));
        startPatSequence_Button->setStyleSheet(QLatin1String("#startPatSequence_Button{\n"
"background-color: transparent;\n"
"backgorund: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/Icons/my_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        startPatSequence_Button->setIcon(icon7);
        startPatSequence_Button->setIconSize(QSize(40, 40));

        horizontalLayout_24->addWidget(startPatSequence_Button);

        pausePatSequence_Button = new QPushButton(scrollAreaWidgetContents);
        pausePatSequence_Button->setObjectName(QStringLiteral("pausePatSequence_Button"));
        pausePatSequence_Button->setEnabled(false);
        sizePolicy8.setHeightForWidth(pausePatSequence_Button->sizePolicy().hasHeightForWidth());
        pausePatSequence_Button->setSizePolicy(sizePolicy8);
        pausePatSequence_Button->setMinimumSize(QSize(50, 60));
        pausePatSequence_Button->setStyleSheet(QLatin1String("#pausePatSequence_Button{\n"
"background-color: transparent;\n"
"backgorund: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/Icons/my_pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pausePatSequence_Button->setIcon(icon8);
        pausePatSequence_Button->setIconSize(QSize(40, 40));
        pausePatSequence_Button->setCheckable(false);
        pausePatSequence_Button->setChecked(false);

        horizontalLayout_24->addWidget(pausePatSequence_Button);

        stopPatSequence_Button = new QPushButton(scrollAreaWidgetContents);
        stopPatSequence_Button->setObjectName(QStringLiteral("stopPatSequence_Button"));
        stopPatSequence_Button->setEnabled(false);
        sizePolicy8.setHeightForWidth(stopPatSequence_Button->sizePolicy().hasHeightForWidth());
        stopPatSequence_Button->setSizePolicy(sizePolicy8);
        stopPatSequence_Button->setMinimumSize(QSize(50, 60));
        stopPatSequence_Button->setStyleSheet(QLatin1String("#stopPatSequence_Button{\n"
"background-color: transparent;\n"
"border-image: url(:connected.png);\n"
"backgorund: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/Icons/my_stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopPatSequence_Button->setIcon(icon9);
        stopPatSequence_Button->setIconSize(QSize(40, 40));

        horizontalLayout_24->addWidget(stopPatSequence_Button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_2);

        pushButton_patternMode = new QPushButton(scrollAreaWidgetContents);
        pushButton_patternMode->setObjectName(QStringLiteral("pushButton_patternMode"));
        pushButton_patternMode->setEnabled(true);
        sizePolicy8.setHeightForWidth(pushButton_patternMode->sizePolicy().hasHeightForWidth());
        pushButton_patternMode->setSizePolicy(sizePolicy8);
        pushButton_patternMode->setMinimumSize(QSize(0, 40));
        pushButton_patternMode->setFont(font11);
        pushButton_patternMode->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"   }"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Images/images/pattern.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_patternMode->setIcon(icon10);
        pushButton_patternMode->setIconSize(QSize(40, 40));
        pushButton_patternMode->setCheckable(true);
        pushButton_patternMode->setChecked(true);

        horizontalLayout_24->addWidget(pushButton_patternMode);

        pushButton_LEDDriver = new QPushButton(scrollAreaWidgetContents);
        pushButton_LEDDriver->setObjectName(QStringLiteral("pushButton_LEDDriver"));
        sizePolicy8.setHeightForWidth(pushButton_LEDDriver->sizePolicy().hasHeightForWidth());
        pushButton_LEDDriver->setSizePolicy(sizePolicy8);
        pushButton_LEDDriver->setMinimumSize(QSize(0, 45));
        pushButton_LEDDriver->setFont(font11);
        pushButton_LEDDriver->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"   }"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Images/images/LEDDriver_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_LEDDriver->setIcon(icon11);
        pushButton_LEDDriver->setIconSize(QSize(40, 40));
        pushButton_LEDDriver->setCheckable(true);

        horizontalLayout_24->addWidget(pushButton_LEDDriver);

        pushButton_ZMachineControl = new QPushButton(scrollAreaWidgetContents);
        pushButton_ZMachineControl->setObjectName(QStringLiteral("pushButton_ZMachineControl"));
        sizePolicy8.setHeightForWidth(pushButton_ZMachineControl->sizePolicy().hasHeightForWidth());
        pushButton_ZMachineControl->setSizePolicy(sizePolicy8);
        pushButton_ZMachineControl->setMinimumSize(QSize(0, 0));
        pushButton_ZMachineControl->setFont(font11);
        pushButton_ZMachineControl->setStyleSheet(QLatin1String("QPushButton{\n"
"	color:rgb(0,150,150);\n"
"   }"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/Images/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ZMachineControl->setIcon(icon12);
        pushButton_ZMachineControl->setIconSize(QSize(40, 40));
        pushButton_ZMachineControl->setCheckable(true);

        horizontalLayout_24->addWidget(pushButton_ZMachineControl);

        horizontalSpacer_3 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_3);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font5);
        label_8->setStyleSheet(QLatin1String("QLabel{\n"
"	color:rgb(0,150,150);\n"
"   }"));

        horizontalLayout_24->addWidget(label_8);

        StartTime = new QLabel(scrollAreaWidgetContents);
        StartTime->setObjectName(QStringLiteral("StartTime"));
        sizePolicy3.setHeightForWidth(StartTime->sizePolicy().hasHeightForWidth());
        StartTime->setSizePolicy(sizePolicy3);
        StartTime->setMinimumSize(QSize(70, 0));
        StartTime->setFont(font5);
        StartTime->setStyleSheet(QLatin1String("QLabel{\n"
"	color:rgb(0,150,150);\n"
"   }"));

        horizontalLayout_24->addWidget(StartTime);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QStringLiteral("label_12"));
        QFont font12;
        font12.setFamily(QStringLiteral("Arial"));
        font12.setPointSize(14);
        font12.setBold(true);
        font12.setWeight(75);
        label_12->setFont(font12);
        label_12->setStyleSheet(QLatin1String("QLabel{\n"
"	color:rgb(0,150,150);\n"
"   }"));

        horizontalLayout_24->addWidget(label_12);

        TotalTime = new QLabel(scrollAreaWidgetContents);
        TotalTime->setObjectName(QStringLiteral("TotalTime"));
        sizePolicy3.setHeightForWidth(TotalTime->sizePolicy().hasHeightForWidth());
        TotalTime->setSizePolicy(sizePolicy3);
        TotalTime->setMinimumSize(QSize(70, 0));
        TotalTime->setFont(font5);
        TotalTime->setStyleSheet(QLatin1String("QLabel{\n"
"	color:rgb(0,150,150);\n"
"   }"));

        horizontalLayout_24->addWidget(TotalTime);

        horizontalSpacer_4 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_4);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font5);
        label_16->setStyleSheet(QLatin1String("QLabel{\n"
"	color:rgb(0,150,150);\n"
"   }"));

        horizontalLayout_24->addWidget(label_16);

        PatternIndex = new QLabel(scrollAreaWidgetContents);
        PatternIndex->setObjectName(QStringLiteral("PatternIndex"));
        sizePolicy3.setHeightForWidth(PatternIndex->sizePolicy().hasHeightForWidth());
        PatternIndex->setSizePolicy(sizePolicy3);
        PatternIndex->setMinimumSize(QSize(100, 0));
        PatternIndex->setFont(font11);
        PatternIndex->setStyleSheet(QLatin1String("QLabel{border:0px;\n"
"color:rgb(0,150,150);}"));

        horizontalLayout_24->addWidget(PatternIndex);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer);


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
#ifndef QT_NO_TOOLTIP
        saveButton_patternSettings->setToolTip(QApplication::translate("MainWindow", "Save settings to a file", nullptr));
#endif // QT_NO_TOOLTIP
        saveButton_patternSettings->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_TOOLTIP
        loadButton_patternSettings->setToolTip(QApplication::translate("MainWindow", "Load settings from a file", nullptr));
#endif // QT_NO_TOOLTIP
        loadButton_patternSettings->setText(QApplication::translate("MainWindow", "Load", nullptr));
        LiftSeqTime->setTitle(QApplication::translate("MainWindow", "Lift / Sequence Time (ms)", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Z Lift Time", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Printing", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Start Delay", nullptr));
        UpdateTotalTime->setText(QApplication::translate("MainWindow", "Update", nullptr));
        triggerIn_checkBox->setText(QApplication::translate("MainWindow", "Trigger Input", nullptr));
        label_TrigOut1->setText(QApplication::translate("MainWindow", "      Trigger Out 1", nullptr));
        triggerOut2_checkBox->setText(QApplication::translate("MainWindow", "Trigger Out 2", nullptr));
        label_Exposure->setText(QApplication::translate("MainWindow", "Exposure", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Time", nullptr));
#ifndef QT_NO_TOOLTIP
        exposure_lineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        exposure_lineEdit->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "Lift Time", nullptr));
        label_Exposure_2->setText(QApplication::translate("MainWindow", "Before Z", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Auto Homing", nullptr));
        AutoHoming->setText(QApplication::translate("MainWindow", "Auto Homing", nullptr));
        ManualHoming->setText(QApplication::translate("MainWindow", "Manual Homing", nullptr));
        HomeDelay->setText(QApplication::translate("MainWindow", "Homing Delay", nullptr));
        groupBox_PatternMode->setTitle(QApplication::translate("MainWindow", "Pattern Mode", nullptr));
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
        ComPort->setText(QApplication::translate("MainWindow", "Com Port", nullptr));
        BoardStatus->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Machine Profile", nullptr));
        SaveMacProfile->setText(QApplication::translate("MainWindow", "Save Profile", nullptr));
        LoadMacProfile->setText(QApplication::translate("MainWindow", "Load Profile", nullptr));
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
