/********************************************************************************
** Form generated from reading UI file 'DataInterceptor.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAINTERCEPTOR_H
#define UI_DATAINTERCEPTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataInterceptorClass
{
public:
    QAction *actionSet_source;
    QAction *actionExit;
    QAction *actionSave_plots_settings;
    QAction *actionLoad_plots_settings;
    QAction *actionAboutQt;
    QAction *actionDemoStart;
    QAction *actionDemoStop;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *centralWidgetVlLayout;
    QWidget *chartsWidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *chartsVLayout;
    QHBoxLayout *hL1;
    QWidget *settings1;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *settingVL;
    QLabel *chartLabel;
    QDoubleSpinBox *spinBox_Up;
    QLCDNumber *lcdNumber;
    QDoubleSpinBox *spinBox_Down;
    QComboBox *paramComboBox;
    QWidget *chart1;
    QHBoxLayout *hL2;
    QWidget *settings2;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *settingVL_2;
    QLabel *chartLabel_2;
    QDoubleSpinBox *spinBox_Up_2;
    QLCDNumber *lcdNumber_2;
    QDoubleSpinBox *spinBox_Down_2;
    QComboBox *paramComboBox2;
    QWidget *chart2;
    QHBoxLayout *hL3;
    QWidget *settings3;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *settingVL_3;
    QLabel *chartLabel_3;
    QDoubleSpinBox *spinBox_Up_3;
    QLCDNumber *lcdNumber_3;
    QDoubleSpinBox *spinBox_Down_3;
    QComboBox *paramComboBox3;
    QWidget *chart3;
    QHBoxLayout *hL4;
    QWidget *settings4;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *settingVL_4;
    QLabel *chartLabel_4;
    QDoubleSpinBox *spinBox_Up_4;
    QLCDNumber *lcdNumber_4;
    QDoubleSpinBox *spinBox_Down_4;
    QComboBox *paramComboBox4;
    QWidget *chart4;
    QHBoxLayout *hL5;
    QWidget *settings5;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *settingVL_5;
    QLabel *chartLabel_5;
    QDoubleSpinBox *spinBox_Up_5;
    QLCDNumber *lcdNumber_5;
    QDoubleSpinBox *spinBox_Down_5;
    QComboBox *paramComboBox5;
    QWidget *chart5;
    QSlider *timeSlider;
    QGroupBox *setReadGroupBox;
    QDial *readFreqDial;
    QLCDNumber *readRfeqLCD;
    QLabel *readFreqLabel;
    QGroupBox *controlGroupBox;
    QPushButton *startButton;
    QPushButton *stopButton;
    QGroupBox *setWriteGroupBox;
    QDial *writeFreqDial;
    QLCDNumber *writeFreqLCD;
    QPushButton *writeFNButton;
    QLabel *writeFreqLabel;
    QGroupBox *groupBox;
    QSpinBox *intervalSpinBox;
    QRadioButton *lineRadioButton;
    QRadioButton *splineRadioButton;
    QLabel *intervalLabel;
    QMenuBar *menuBar;
    QMenu *menuSet_source;
    QMenu *menuAbout;
    QToolBar *toolBar;

    void setupUi(QMainWindow *DataInterceptorClass)
    {
        if (DataInterceptorClass->objectName().isEmpty())
            DataInterceptorClass->setObjectName(QStringLiteral("DataInterceptorClass"));
        DataInterceptorClass->resize(1800, 1000);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DataInterceptorClass->sizePolicy().hasHeightForWidth());
        DataInterceptorClass->setSizePolicy(sizePolicy);
        DataInterceptorClass->setMinimumSize(QSize(1200, 1000));
        DataInterceptorClass->setMaximumSize(QSize(1920, 1000));
        DataInterceptorClass->setAutoFillBackground(true);
        DataInterceptorClass->setToolButtonStyle(Qt::ToolButtonIconOnly);
        actionSet_source = new QAction(DataInterceptorClass);
        actionSet_source->setObjectName(QStringLiteral("actionSet_source"));
        actionExit = new QAction(DataInterceptorClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionSave_plots_settings = new QAction(DataInterceptorClass);
        actionSave_plots_settings->setObjectName(QStringLiteral("actionSave_plots_settings"));
        actionLoad_plots_settings = new QAction(DataInterceptorClass);
        actionLoad_plots_settings->setObjectName(QStringLiteral("actionLoad_plots_settings"));
        actionAboutQt = new QAction(DataInterceptorClass);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionDemoStart = new QAction(DataInterceptorClass);
        actionDemoStart->setObjectName(QStringLiteral("actionDemoStart"));
        actionDemoStop = new QAction(DataInterceptorClass);
        actionDemoStop->setObjectName(QStringLiteral("actionDemoStop"));
        actionDemoStop->setEnabled(false);
        centralWidget = new QWidget(DataInterceptorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(true);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(180, 0, 1621, 941));
        centralWidgetVlLayout = new QVBoxLayout(verticalLayoutWidget);
        centralWidgetVlLayout->setSpacing(0);
        centralWidgetVlLayout->setContentsMargins(11, 11, 11, 11);
        centralWidgetVlLayout->setObjectName(QStringLiteral("centralWidgetVlLayout"));
        centralWidgetVlLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        centralWidgetVlLayout->setContentsMargins(0, 0, 0, 0);
        chartsWidget = new QWidget(verticalLayoutWidget);
        chartsWidget->setObjectName(QStringLiteral("chartsWidget"));
        chartsWidget->setAutoFillBackground(true);
        verticalLayoutWidget_2 = new QWidget(chartsWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 0, 1601, 941));
        chartsVLayout = new QVBoxLayout(verticalLayoutWidget_2);
        chartsVLayout->setSpacing(0);
        chartsVLayout->setContentsMargins(11, 11, 11, 11);
        chartsVLayout->setObjectName(QStringLiteral("chartsVLayout"));
        chartsVLayout->setContentsMargins(0, 0, 0, 0);
        hL1 = new QHBoxLayout();
        hL1->setSpacing(0);
        hL1->setObjectName(QStringLiteral("hL1"));
        settings1 = new QWidget(verticalLayoutWidget_2);
        settings1->setObjectName(QStringLiteral("settings1"));
        settings1->setMinimumSize(QSize(100, 0));
        settings1->setMaximumSize(QSize(100, 16777215));
        verticalLayoutWidget_3 = new QWidget(settings1);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, -1, 101, 181));
        settingVL = new QVBoxLayout(verticalLayoutWidget_3);
        settingVL->setSpacing(0);
        settingVL->setContentsMargins(11, 11, 11, 11);
        settingVL->setObjectName(QStringLiteral("settingVL"));
        settingVL->setSizeConstraint(QLayout::SetDefaultConstraint);
        settingVL->setContentsMargins(0, 0, 0, 0);
        chartLabel = new QLabel(verticalLayoutWidget_3);
        chartLabel->setObjectName(QStringLiteral("chartLabel"));

        settingVL->addWidget(chartLabel);

        spinBox_Up = new QDoubleSpinBox(verticalLayoutWidget_3);
        spinBox_Up->setObjectName(QStringLiteral("spinBox_Up"));
        spinBox_Up->setMinimum(-100000);
        spinBox_Up->setMaximum(100000);
        spinBox_Up->setValue(1);

        settingVL->addWidget(spinBox_Up);

        lcdNumber = new QLCDNumber(verticalLayoutWidget_3);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("value", QVariant(0));
        lcdNumber->setProperty("intValue", QVariant(0));

        settingVL->addWidget(lcdNumber);

        spinBox_Down = new QDoubleSpinBox(verticalLayoutWidget_3);
        spinBox_Down->setObjectName(QStringLiteral("spinBox_Down"));
        spinBox_Down->setMinimum(-100000);
        spinBox_Down->setMaximum(100000);
        spinBox_Down->setValue(-1);

        settingVL->addWidget(spinBox_Down);

        paramComboBox = new QComboBox(verticalLayoutWidget_3);
        paramComboBox->setObjectName(QStringLiteral("paramComboBox"));

        settingVL->addWidget(paramComboBox);


        hL1->addWidget(settings1);

        chart1 = new QWidget(verticalLayoutWidget_2);
        chart1->setObjectName(QStringLiteral("chart1"));
        chart1->setAutoFillBackground(true);

        hL1->addWidget(chart1);


        chartsVLayout->addLayout(hL1);

        hL2 = new QHBoxLayout();
        hL2->setSpacing(0);
        hL2->setObjectName(QStringLiteral("hL2"));
        settings2 = new QWidget(verticalLayoutWidget_2);
        settings2->setObjectName(QStringLiteral("settings2"));
        settings2->setMinimumSize(QSize(100, 0));
        settings2->setMaximumSize(QSize(100, 16777215));
        verticalLayoutWidget_4 = new QWidget(settings2);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(0, 0, 101, 181));
        settingVL_2 = new QVBoxLayout(verticalLayoutWidget_4);
        settingVL_2->setSpacing(0);
        settingVL_2->setContentsMargins(11, 11, 11, 11);
        settingVL_2->setObjectName(QStringLiteral("settingVL_2"));
        settingVL_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        settingVL_2->setContentsMargins(0, 0, 0, 0);
        chartLabel_2 = new QLabel(verticalLayoutWidget_4);
        chartLabel_2->setObjectName(QStringLiteral("chartLabel_2"));

        settingVL_2->addWidget(chartLabel_2);

        spinBox_Up_2 = new QDoubleSpinBox(verticalLayoutWidget_4);
        spinBox_Up_2->setObjectName(QStringLiteral("spinBox_Up_2"));
        spinBox_Up_2->setMinimum(-100000);
        spinBox_Up_2->setMaximum(100000);
        spinBox_Up_2->setValue(1);

        settingVL_2->addWidget(spinBox_Up_2);

        lcdNumber_2 = new QLCDNumber(verticalLayoutWidget_4);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_2->setProperty("value", QVariant(0));
        lcdNumber_2->setProperty("intValue", QVariant(0));

        settingVL_2->addWidget(lcdNumber_2);

        spinBox_Down_2 = new QDoubleSpinBox(verticalLayoutWidget_4);
        spinBox_Down_2->setObjectName(QStringLiteral("spinBox_Down_2"));
        spinBox_Down_2->setMinimum(-100000);
        spinBox_Down_2->setMaximum(100000);
        spinBox_Down_2->setValue(-1);

        settingVL_2->addWidget(spinBox_Down_2);

        paramComboBox2 = new QComboBox(verticalLayoutWidget_4);
        paramComboBox2->setObjectName(QStringLiteral("paramComboBox2"));

        settingVL_2->addWidget(paramComboBox2);


        hL2->addWidget(settings2);

        chart2 = new QWidget(verticalLayoutWidget_2);
        chart2->setObjectName(QStringLiteral("chart2"));

        hL2->addWidget(chart2);


        chartsVLayout->addLayout(hL2);

        hL3 = new QHBoxLayout();
        hL3->setSpacing(0);
        hL3->setObjectName(QStringLiteral("hL3"));
        settings3 = new QWidget(verticalLayoutWidget_2);
        settings3->setObjectName(QStringLiteral("settings3"));
        settings3->setMinimumSize(QSize(100, 0));
        settings3->setMaximumSize(QSize(100, 16777215));
        verticalLayoutWidget_5 = new QWidget(settings3);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(0, 0, 101, 181));
        settingVL_3 = new QVBoxLayout(verticalLayoutWidget_5);
        settingVL_3->setSpacing(0);
        settingVL_3->setContentsMargins(11, 11, 11, 11);
        settingVL_3->setObjectName(QStringLiteral("settingVL_3"));
        settingVL_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        settingVL_3->setContentsMargins(0, 0, 0, 0);
        chartLabel_3 = new QLabel(verticalLayoutWidget_5);
        chartLabel_3->setObjectName(QStringLiteral("chartLabel_3"));

        settingVL_3->addWidget(chartLabel_3);

        spinBox_Up_3 = new QDoubleSpinBox(verticalLayoutWidget_5);
        spinBox_Up_3->setObjectName(QStringLiteral("spinBox_Up_3"));
        spinBox_Up_3->setMinimum(-100000);
        spinBox_Up_3->setMaximum(100000);
        spinBox_Up_3->setValue(1);

        settingVL_3->addWidget(spinBox_Up_3);

        lcdNumber_3 = new QLCDNumber(verticalLayoutWidget_5);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_3->setProperty("value", QVariant(0));
        lcdNumber_3->setProperty("intValue", QVariant(0));

        settingVL_3->addWidget(lcdNumber_3);

        spinBox_Down_3 = new QDoubleSpinBox(verticalLayoutWidget_5);
        spinBox_Down_3->setObjectName(QStringLiteral("spinBox_Down_3"));
        spinBox_Down_3->setMinimum(-100000);
        spinBox_Down_3->setMaximum(100000);
        spinBox_Down_3->setValue(-1);

        settingVL_3->addWidget(spinBox_Down_3);

        paramComboBox3 = new QComboBox(verticalLayoutWidget_5);
        paramComboBox3->setObjectName(QStringLiteral("paramComboBox3"));

        settingVL_3->addWidget(paramComboBox3);


        hL3->addWidget(settings3);

        chart3 = new QWidget(verticalLayoutWidget_2);
        chart3->setObjectName(QStringLiteral("chart3"));

        hL3->addWidget(chart3);


        chartsVLayout->addLayout(hL3);

        hL4 = new QHBoxLayout();
        hL4->setSpacing(0);
        hL4->setObjectName(QStringLiteral("hL4"));
        settings4 = new QWidget(verticalLayoutWidget_2);
        settings4->setObjectName(QStringLiteral("settings4"));
        settings4->setMinimumSize(QSize(100, 0));
        settings4->setMaximumSize(QSize(100, 16777215));
        verticalLayoutWidget_6 = new QWidget(settings4);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(0, 0, 101, 181));
        settingVL_4 = new QVBoxLayout(verticalLayoutWidget_6);
        settingVL_4->setSpacing(0);
        settingVL_4->setContentsMargins(11, 11, 11, 11);
        settingVL_4->setObjectName(QStringLiteral("settingVL_4"));
        settingVL_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        settingVL_4->setContentsMargins(0, 0, 0, 0);
        chartLabel_4 = new QLabel(verticalLayoutWidget_6);
        chartLabel_4->setObjectName(QStringLiteral("chartLabel_4"));

        settingVL_4->addWidget(chartLabel_4);

        spinBox_Up_4 = new QDoubleSpinBox(verticalLayoutWidget_6);
        spinBox_Up_4->setObjectName(QStringLiteral("spinBox_Up_4"));
        spinBox_Up_4->setMinimum(-100000);
        spinBox_Up_4->setMaximum(100000);
        spinBox_Up_4->setValue(1);

        settingVL_4->addWidget(spinBox_Up_4);

        lcdNumber_4 = new QLCDNumber(verticalLayoutWidget_6);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_4->setProperty("value", QVariant(0));
        lcdNumber_4->setProperty("intValue", QVariant(0));

        settingVL_4->addWidget(lcdNumber_4);

        spinBox_Down_4 = new QDoubleSpinBox(verticalLayoutWidget_6);
        spinBox_Down_4->setObjectName(QStringLiteral("spinBox_Down_4"));
        spinBox_Down_4->setMinimum(-100000);
        spinBox_Down_4->setMaximum(100000);
        spinBox_Down_4->setValue(-1);

        settingVL_4->addWidget(spinBox_Down_4);

        paramComboBox4 = new QComboBox(verticalLayoutWidget_6);
        paramComboBox4->setObjectName(QStringLiteral("paramComboBox4"));

        settingVL_4->addWidget(paramComboBox4);


        hL4->addWidget(settings4);

        chart4 = new QWidget(verticalLayoutWidget_2);
        chart4->setObjectName(QStringLiteral("chart4"));

        hL4->addWidget(chart4);


        chartsVLayout->addLayout(hL4);

        hL5 = new QHBoxLayout();
        hL5->setSpacing(0);
        hL5->setObjectName(QStringLiteral("hL5"));
        settings5 = new QWidget(verticalLayoutWidget_2);
        settings5->setObjectName(QStringLiteral("settings5"));
        settings5->setMinimumSize(QSize(100, 0));
        settings5->setMaximumSize(QSize(100, 16777215));
        verticalLayoutWidget_7 = new QWidget(settings5);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(0, 0, 101, 181));
        settingVL_5 = new QVBoxLayout(verticalLayoutWidget_7);
        settingVL_5->setSpacing(0);
        settingVL_5->setContentsMargins(11, 11, 11, 11);
        settingVL_5->setObjectName(QStringLiteral("settingVL_5"));
        settingVL_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        settingVL_5->setContentsMargins(0, 0, 0, 0);
        chartLabel_5 = new QLabel(verticalLayoutWidget_7);
        chartLabel_5->setObjectName(QStringLiteral("chartLabel_5"));

        settingVL_5->addWidget(chartLabel_5);

        spinBox_Up_5 = new QDoubleSpinBox(verticalLayoutWidget_7);
        spinBox_Up_5->setObjectName(QStringLiteral("spinBox_Up_5"));
        spinBox_Up_5->setMinimum(-100000);
        spinBox_Up_5->setMaximum(100000);
        spinBox_Up_5->setValue(1);

        settingVL_5->addWidget(spinBox_Up_5);

        lcdNumber_5 = new QLCDNumber(verticalLayoutWidget_7);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));
        lcdNumber_5->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_5->setProperty("value", QVariant(0));
        lcdNumber_5->setProperty("intValue", QVariant(0));

        settingVL_5->addWidget(lcdNumber_5);

        spinBox_Down_5 = new QDoubleSpinBox(verticalLayoutWidget_7);
        spinBox_Down_5->setObjectName(QStringLiteral("spinBox_Down_5"));
        spinBox_Down_5->setMinimum(-100000);
        spinBox_Down_5->setMaximum(100000);
        spinBox_Down_5->setValue(-1);

        settingVL_5->addWidget(spinBox_Down_5);

        paramComboBox5 = new QComboBox(verticalLayoutWidget_7);
        paramComboBox5->setObjectName(QStringLiteral("paramComboBox5"));

        settingVL_5->addWidget(paramComboBox5);


        hL5->addWidget(settings5);

        chart5 = new QWidget(verticalLayoutWidget_2);
        chart5->setObjectName(QStringLiteral("chart5"));

        hL5->addWidget(chart5);


        chartsVLayout->addLayout(hL5);


        centralWidgetVlLayout->addWidget(chartsWidget);

        timeSlider = new QSlider(centralWidget);
        timeSlider->setObjectName(QStringLiteral("timeSlider"));
        timeSlider->setGeometry(QRect(288, 950, 1501, 20));
        timeSlider->setOrientation(Qt::Horizontal);
        setReadGroupBox = new QGroupBox(centralWidget);
        setReadGroupBox->setObjectName(QStringLiteral("setReadGroupBox"));
        setReadGroupBox->setGeometry(QRect(10, 10, 161, 251));
        setReadGroupBox->setAutoFillBackground(false);
        setReadGroupBox->setFlat(false);
        readFreqDial = new QDial(setReadGroupBox);
        readFreqDial->setObjectName(QStringLiteral("readFreqDial"));
        readFreqDial->setGeometry(QRect(20, 60, 101, 91));
        readFreqDial->setMinimum(1);
        readFreqDial->setMaximum(100);
        readFreqDial->setSingleStep(5);
        readFreqDial->setPageStep(10);
        readFreqDial->setValue(10);
        readFreqDial->setOrientation(Qt::Horizontal);
        readFreqDial->setWrapping(false);
        readFreqDial->setNotchesVisible(true);
        readRfeqLCD = new QLCDNumber(setReadGroupBox);
        readRfeqLCD->setObjectName(QStringLiteral("readRfeqLCD"));
        readRfeqLCD->setGeometry(QRect(20, 170, 91, 41));
        readRfeqLCD->setProperty("intValue", QVariant(10));
        readFreqLabel = new QLabel(setReadGroupBox);
        readFreqLabel->setObjectName(QStringLiteral("readFreqLabel"));
        readFreqLabel->setGeometry(QRect(10, 40, 141, 16));
        controlGroupBox = new QGroupBox(centralWidget);
        controlGroupBox->setObjectName(QStringLiteral("controlGroupBox"));
        controlGroupBox->setGeometry(QRect(10, 849, 161, 81));
        startButton = new QPushButton(controlGroupBox);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setEnabled(false);
        startButton->setGeometry(QRect(20, 20, 131, 23));
        stopButton = new QPushButton(controlGroupBox);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setEnabled(false);
        stopButton->setGeometry(QRect(20, 50, 131, 23));
        setWriteGroupBox = new QGroupBox(centralWidget);
        setWriteGroupBox->setObjectName(QStringLiteral("setWriteGroupBox"));
        setWriteGroupBox->setGeometry(QRect(10, 290, 161, 291));
        setWriteGroupBox->setBaseSize(QSize(0, 0));
        setWriteGroupBox->setFlat(false);
        writeFreqDial = new QDial(setWriteGroupBox);
        writeFreqDial->setObjectName(QStringLiteral("writeFreqDial"));
        writeFreqDial->setGeometry(QRect(30, 80, 91, 91));
        writeFreqDial->setMaximum(100);
        writeFreqDial->setSingleStep(5);
        writeFreqDial->setValue(10);
        writeFreqDial->setWrapping(false);
        writeFreqDial->setNotchesVisible(true);
        writeFreqLCD = new QLCDNumber(setWriteGroupBox);
        writeFreqLCD->setObjectName(QStringLiteral("writeFreqLCD"));
        writeFreqLCD->setGeometry(QRect(30, 180, 91, 41));
        writeFreqLCD->setProperty("intValue", QVariant(10));
        writeFNButton = new QPushButton(setWriteGroupBox);
        writeFNButton->setObjectName(QStringLiteral("writeFNButton"));
        writeFNButton->setGeometry(QRect(30, 230, 101, 23));
        writeFreqLabel = new QLabel(setWriteGroupBox);
        writeFreqLabel->setObjectName(QStringLiteral("writeFreqLabel"));
        writeFreqLabel->setGeometry(QRect(10, 50, 141, 20));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 620, 161, 181));
        intervalSpinBox = new QSpinBox(groupBox);
        intervalSpinBox->setObjectName(QStringLiteral("intervalSpinBox"));
        intervalSpinBox->setGeometry(QRect(10, 90, 141, 22));
        intervalSpinBox->setMinimum(1);
        intervalSpinBox->setMaximum(100);
        intervalSpinBox->setValue(10);
        lineRadioButton = new QRadioButton(groupBox);
        lineRadioButton->setObjectName(QStringLiteral("lineRadioButton"));
        lineRadioButton->setGeometry(QRect(40, 20, 82, 17));
        lineRadioButton->setChecked(true);
        splineRadioButton = new QRadioButton(groupBox);
        splineRadioButton->setObjectName(QStringLiteral("splineRadioButton"));
        splineRadioButton->setGeometry(QRect(40, 40, 82, 17));
        intervalLabel = new QLabel(groupBox);
        intervalLabel->setObjectName(QStringLiteral("intervalLabel"));
        intervalLabel->setGeometry(QRect(20, 70, 121, 16));
        DataInterceptorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DataInterceptorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1800, 21));
        menuSet_source = new QMenu(menuBar);
        menuSet_source->setObjectName(QStringLiteral("menuSet_source"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        DataInterceptorClass->setMenuBar(menuBar);
        toolBar = new QToolBar(DataInterceptorClass);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        DataInterceptorClass->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuSet_source->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuSet_source->addSeparator();
        menuSet_source->addAction(actionSet_source);
        menuSet_source->addSeparator();
        menuSet_source->addAction(actionSave_plots_settings);
        menuSet_source->addAction(actionLoad_plots_settings);
        menuSet_source->addSeparator();
        menuSet_source->addAction(actionExit);
        menuAbout->addAction(actionDemoStart);
        menuAbout->addAction(actionDemoStop);
        menuAbout->addSeparator();
        menuAbout->addAction(actionAboutQt);

        retranslateUi(DataInterceptorClass);
        QObject::connect(readFreqDial, SIGNAL(valueChanged(int)), readRfeqLCD, SLOT(display(int)));
        QObject::connect(writeFreqDial, SIGNAL(valueChanged(int)), writeFreqLCD, SLOT(display(int)));

        QMetaObject::connectSlotsByName(DataInterceptorClass);
    } // setupUi

    void retranslateUi(QMainWindow *DataInterceptorClass)
    {
        DataInterceptorClass->setWindowTitle(QApplication::translate("DataInterceptorClass", "DataInterceptor", Q_NULLPTR));
        actionSet_source->setText(QApplication::translate("DataInterceptorClass", "\320\243\320\272\320\260\320\267\320\260\321\202\321\214 \320\270\321\201\321\202\320\276\321\207\320\275\320\270\320\272 \320\264\320\260\320\275\320\275\321\213\321\205...", Q_NULLPTR));
        actionExit->setText(QApplication::translate("DataInterceptorClass", "\320\222\321\213\321\205\320\276\320\264", Q_NULLPTR));
        actionSave_plots_settings->setText(QApplication::translate("DataInterceptorClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\276\320\275\321\204\320\270\320\263\321\203\321\200\320\260\321\206\320\270\321\216...", Q_NULLPTR));
        actionLoad_plots_settings->setText(QApplication::translate("DataInterceptorClass", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\272\320\276\320\275\321\204\320\270\320\263\321\203\321\200\320\260\321\206\320\270\321\216...", Q_NULLPTR));
        actionAboutQt->setText(QApplication::translate("DataInterceptorClass", "AboutQt", Q_NULLPTR));
        actionDemoStart->setText(QApplication::translate("DataInterceptorClass", "\320\224\320\265\320\274\320\276-\321\200\320\265\320\266\320\270\320\274->\320\241\321\202\320\260\321\200\321\202", Q_NULLPTR));
        actionDemoStop->setText(QApplication::translate("DataInterceptorClass", "\320\224\320\265\320\274\320\276-\321\200\320\265\320\266\320\270\320\274->\320\241\321\202\320\276\320\277", Q_NULLPTR));
        chartLabel->setText(QApplication::translate("DataInterceptorClass", "TextLabel", Q_NULLPTR));
        chartLabel_2->setText(QApplication::translate("DataInterceptorClass", "TextLabel", Q_NULLPTR));
        chartLabel_3->setText(QApplication::translate("DataInterceptorClass", "TextLabel", Q_NULLPTR));
        chartLabel_4->setText(QApplication::translate("DataInterceptorClass", "TextLabel", Q_NULLPTR));
        chartLabel_5->setText(QApplication::translate("DataInterceptorClass", "TextLabel", Q_NULLPTR));
        setReadGroupBox->setTitle(QApplication::translate("DataInterceptorClass", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\207\321\202\320\265\320\275\320\270\321\217", Q_NULLPTR));
        readFreqLabel->setText(QApplication::translate("DataInterceptorClass", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \321\207\321\202\320\265\320\275\320\270\321\217 \320\264\320\260\320\275\320\275\321\213\321\205 \320\223\321\206", Q_NULLPTR));
        controlGroupBox->setTitle(QApplication::translate("DataInterceptorClass", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", Q_NULLPTR));
        startButton->setText(QApplication::translate("DataInterceptorClass", "\320\241\321\202\320\260\321\200\321\202", Q_NULLPTR));
        stopButton->setText(QApplication::translate("DataInterceptorClass", "\320\241\321\202\320\276\320\277", Q_NULLPTR));
        setWriteGroupBox->setTitle(QApplication::translate("DataInterceptorClass", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \320\267\320\260\320\277\320\270\321\201\320\270", Q_NULLPTR));
        writeFNButton->setText(QApplication::translate("DataInterceptorClass", "\320\244\320\260\320\271\320\273 \320\267\320\260\320\277\320\270\321\201\320\270...", Q_NULLPTR));
        writeFreqLabel->setText(QApplication::translate("DataInterceptorClass", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \320\267\320\260\320\277\320\270\321\201\320\270 \320\264\320\260\320\275\320\275\321\213\321\205 \320\223\321\206", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DataInterceptorClass", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217", Q_NULLPTR));
        intervalSpinBox->setSuffix(QApplication::translate("DataInterceptorClass", " c", Q_NULLPTR));
        intervalSpinBox->setPrefix(QApplication::translate("DataInterceptorClass", "\320\230\320\275\321\202\320\265\321\200\320\262\320\260\320\273 \320\263\321\200\320\260\321\204\320\270\320\272\320\260", Q_NULLPTR));
        lineRadioButton->setText(QApplication::translate("DataInterceptorClass", "\320\233\320\270\320\275\320\265\320\271\320\275\321\213\320\271", Q_NULLPTR));
        splineRadioButton->setText(QApplication::translate("DataInterceptorClass", "\320\241\320\277\320\273\320\260\320\271\320\275", Q_NULLPTR));
        intervalLabel->setText(QApplication::translate("DataInterceptorClass", "\320\230\320\275\321\202\320\265\321\200\320\262\320\260\320\273 \320\263\321\200\320\260\321\204\320\270\320\272\320\260 [c]", Q_NULLPTR));
        menuSet_source->setTitle(QApplication::translate("DataInterceptorClass", "\320\244\320\260\320\271\320\273", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("DataInterceptorClass", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("DataInterceptorClass", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DataInterceptorClass: public Ui_DataInterceptorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAINTERCEPTOR_H
