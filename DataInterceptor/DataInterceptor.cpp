#include "DataInterceptor.h"
#include <QtCharts>
#include <QString>
#include <QAction>
#include <QMenuBar>
#include <QMargins>

DataInterceptor::DataInterceptor(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	eAppState = E_APP_STATE::LOADED;
	
	margins = new QMargins(0, 0, 0, 0);	
	
	//cur1 = new QPointF(0, 0);
	//prev1 = new QPointF(0, 0);

	demoFreq = 50; 
	readFreq = 10;
	plotInterval = 10;


	initSeries();
	initCharts();	

	// адовый вариант связывания через указатели
	//connect(ui.intervalSpinBox, static_cast<void(QSpinBox::*)(int)>(&QSpinBox::valueChanged), this, SLOT(slotSetInterval(int)) );
	connect(ui.intervalSpinBox, SIGNAL(valueChanged(int)), this, SLOT(slotSetInterval(int)));	
	connect(ui.readFreqDial,	SIGNAL(valueChanged(int)), this, SLOT(slotSetReadFreq(int)));
	connect(ui.writeFreqDial,	SIGNAL(valueChanged(int)), this, SLOT(slotSetWriteFreq(int)));

	readTimer = new QTimer();
	connect(readTimer, SIGNAL(timeout()), this, SLOT(slotReadTimer()) );
	readTimer->setInterval(1000/readFreq); 
	
	demoTimer = new QTimer();
	connect(demoTimer, SIGNAL(timeout()), this, SLOT(slotDemoTimer()));
	demoTimer->setInterval(1000 / demoFreq); 

	//сигналы установки масштаба графиков
	connect(ui.spinBox_Down,	SIGNAL(valueChanged(double)),	this, SLOT(slotSetChartMin(double)) );
	connect(ui.spinBox_Up,		SIGNAL(valueChanged(double)),	this, SLOT(slotSetChartMax(double)) );
	connect(ui.spinBox_Down_2,	SIGNAL(valueChanged(double)),	this, SLOT(slotSetChartMin2(double)) );
	connect(ui.spinBox_Up_2,	SIGNAL(valueChanged(double)),	this, SLOT(slotSetChartMax2(double)) );
	connect(ui.spinBox_Down_3,	SIGNAL(valueChanged(double)),	this, SLOT(slotSetChartMin3(double)) );
	connect(ui.spinBox_Up_3,	SIGNAL(valueChanged(double)),	this, SLOT(slotSetChartMax3(double)) );
	connect(ui.spinBox_Down_4,	SIGNAL(valueChanged(double)),	this, SLOT(slotSetChartMin4(double)) );
	connect(ui.spinBox_Up_4,	SIGNAL(valueChanged(double)),	this, SLOT(slotSetChartMax4(double)) );
	connect(ui.spinBox_Down_5,	SIGNAL(valueChanged(double)),	this, SLOT(slotSetChartMin5(double)));
	connect(ui.spinBox_Up_5,	SIGNAL(valueChanged(double)),	this, SLOT(slotSetChartMax5(double)) );

	connect(ui.actionDemoStart, SIGNAL(triggered()), this, SLOT(slotMenuDemoStart()) );
	connect(ui.actionDemoStop,  SIGNAL(triggered()), this, SLOT(slotMenuDemoStop())  );

	connect(ui.startButton, SIGNAL(clicked()), this, SLOT(slotButtonStart()) );
	connect(ui.stopButton,  SIGNAL(clicked()), this, SLOT(slotButtonStop()) );


	interceptorAdapter = СInterceptorAdapter(&data, &data_demo_PROXY);
}

void DataInterceptor::initSeries()
{
	// настройка параметров на графиках
	//series1 = new QtCharts::QSplineSeries();
	series1 = new QtCharts::QLineSeries();
	series1->setName("spline1");
	series1->setColor(Qt::blue);
	QPen pen1;
	pen1.setWidth(2);
	pen1.setColor(Qt::blue);
	series1->setPen(pen1);
	//TODO тестить производительность с включенным GL
	series1->setUseOpenGL(true);



	series2 = new QtCharts::QLineSeries();
	series2->setName("splin2");
	series2->setColor(Qt::blue);

	series3 = new QtCharts::QSplineSeries();
	series3->setName("spline3");
	series3->setColor(Qt::blue);

	series4 = new QtCharts::QLineSeries();
	series4->setName("spline4");
	series4->setColor(Qt::blue);


	series5 = new QtCharts::QLineSeries();
	series5->setName("spline5");
	series5->setColor(Qt::blue);
}

void DataInterceptor::initCharts()
{
	// настройки отображения графиков
	chart1 = new QChart();
	chart1->legend()->hide();
	//chart1->setAnimationOptions(QChart::AllAnimations); 
	chart1->addSeries(series1);
	//chart1->setTitle("Simple spline chart example");
	chart1->createDefaultAxes();
	chart1->setMargins(*margins);
	chart1->axisY()->setRange(-1, 1);
	chart1->axisX()->setRange(-10, 10);
	


	chart2 = new QChart();
	chart2->legend()->hide();
	chart2->addSeries(series2);
	chart2->createDefaultAxes();
	chart2->setMargins(*margins);
	chart2->axisY()->setRange(-1, 1);	
	chart2->axisX()->setRange(10, 10);

	chart3 = new QChart();
	chart3->legend()->hide();
	chart3->addSeries(series3);
	chart3->createDefaultAxes();
	chart3->setMargins(*margins);
	chart3->axisY()->setRange(-1, 1);
	chart3->axisX()->setRange(-10, 10);

	chart4 = new QChart();
	chart4->legend()->hide();
	chart4->addSeries(series4);
	chart4->createDefaultAxes();
	chart4->setMargins(*margins);
	chart4->axisY()->setRange(-1, 1);
	chart4->axisX()->setRange(-10, 10);

	chart5 = new QChart();
	chart5->legend()->hide();
	chart5->addSeries(series5);
	chart5->createDefaultAxes();
	chart5->setMargins(*margins);
	chart5->axisY()->setRange(-1, 1);
	chart5->axisX()->setRange(-10, 10);

	// создание View 
	QChartView *view1;   // Библиотечный класс для отображения графиков
	view1 = new QChartView(chart1, this);
	view1->setRenderHint(QPainter::Antialiasing);
	QChartView *view2;
	view2 = new QChartView(chart2, this);
	QChartView *view3;
	view3 = new QChartView(chart3, this);
	QChartView *view4;
	view4 = new QChartView(chart4, this);
	QChartView *view5;
	view5 = new QChartView(chart5, this);

	// привязка к лайаутам 
	QHBoxLayout *chartLayout1 = new QHBoxLayout;
	chartLayout1->setMargin(0);
	chartLayout1->setSpacing(0);
	ui.chart1->setLayout(chartLayout1);
	//chartLayout1->addWidget(view);
	chartLayout1->addWidget(view1);

	QHBoxLayout *chartLayout2 = new QHBoxLayout;
	chartLayout2->setMargin(0);
	chartLayout2->setSpacing(0);
	ui.chart2->setLayout(chartLayout2);
	chartLayout2->addWidget(view2);

	QHBoxLayout *chartLayout3 = new QHBoxLayout;
	chartLayout3->setMargin(0);
	chartLayout3->setSpacing(0);
	ui.chart3->setLayout(chartLayout3);
	chartLayout3->addWidget(view3);

	QHBoxLayout *chartLayout4 = new QHBoxLayout;
	chartLayout4->setMargin(0);
	chartLayout4->setSpacing(0);
	ui.chart4->setLayout(chartLayout4);
	chartLayout4->addWidget(view4);

	QHBoxLayout *chartLayout5 = new QHBoxLayout;
	chartLayout5->setMargin(0);
	chartLayout5->setSpacing(0);
	ui.chart5->setLayout(chartLayout5);
	chartLayout5->addWidget(view5);
}

void DataInterceptor::slotReadTimer()
{
	//interceptor.readStepFromMem();
	interceptorAdapter.readStepFromMem();

	//data.paramsCount = 5;
	//data.params[0] = data_demo_PROXY.params[0];
	//data.params[1] = data_demo_PROXY.params[1];
	//data.params[2] = data_demo_PROXY.params[2];
	//data.params[3] = data_demo_PROXY.params[3];
	//data.params[4] = data_demo_PROXY.params[4];

	//data.pTimeParam = &data.params[0];
	



	//series1->append(data.params[0].cur_value, data.params[1].cur_value);
	//chart1->scroll(10 * (data.pTimeParam->cur_value - data.pTimeParam->prev_value), 0);
	//ui.lcdNumber->display(data.params[1].cur_value);

	series1->append(data.params[0].cur_value, data.params[1].cur_value);

	//TODO скрол нужно отлаживать(график убегает) - пока заменил выставкой масштаба, посмотрим на быстродействие
	//chart1->scroll(10, 0);
	chart1->axisX()->setMax(data.params[0].cur_value);
	chart1->axisX()->setMin(data.params[0].cur_value-plotInterval);

	ui.lcdNumber->display(data.params[1].cur_value);
}

	//TODO потом вынести демо режим в CInterceptor
void DataInterceptor::slotDemoTimer()
{
	generateDemoData(); // сгенерировать тестовые данные на текущем шаге

	//эталонный сигнал для демо режима
	series1demo->append(data_demo_PROXY.params[0].cur_value, data_demo_PROXY.params[1].cur_value);
	chart1->axisX()->setMax(data_demo_PROXY.params[0].cur_value);
	chart1->axisX()->setMin(data_demo_PROXY.params[0].cur_value - plotInterval);
}



void DataInterceptor::generateDemoData()
{
	data_demo_PROXY.params[0].cur_value = data_demo_PROXY.params[0].cur_value + 0.001*(double)(demoTimer->remainingTime()); // время
	double t = data_demo_PROXY.pTimeParam->cur_value;
	data_demo_PROXY.params[1].cur_value = sin(5 * t);
	data_demo_PROXY.params[2].cur_value = cos(5 * t);
	data_demo_PROXY.params[3].cur_value = data_demo_PROXY.params[3].prev_value + 0.001;
	data_demo_PROXY.params[4].cur_value = 2;

	data_demo_PROXY.params[0].prev_value = data_demo_PROXY.params[0].cur_value;
	data_demo_PROXY.params[1].prev_value = data_demo_PROXY.params[1].cur_value;
	data_demo_PROXY.params[2].prev_value = data_demo_PROXY.params[2].cur_value;
	data_demo_PROXY.params[3].prev_value = data_demo_PROXY.params[3].cur_value;
	data_demo_PROXY.params[4].prev_value = data_demo_PROXY.params[4].cur_value;
}

void DataInterceptor::createDemoParams()
{
	data_demo_PROXY.clearData();
	data_demo_PROXY.paramsCount = 5;
	data_demo_PROXY.params[0].name = QString("time");
	data_demo_PROXY.params[1].name = QString("sin");
	data_demo_PROXY.params[2].name = QString("cos");
	data_demo_PROXY.params[3].name = QString("line");
	data_demo_PROXY.params[4].name = QString("const2");

	for (uint i = 0; i < data_demo_PROXY.paramsCount; i++)
	{
		data_demo_PROXY.params[i].cur_value = 0;
		data_demo_PROXY.params[i].prev_value = 0;
	}

	data_demo_PROXY.pTimeParam = &data_demo_PROXY.params[0];


	for (uint i = 0; i < data_demo_PROXY.paramsCount; i++)
	{
		ui.paramComboBox->addItem(data_demo_PROXY.params[i].name);
	}

	//добавление эталонного сигнала на график для демо режима
	series1demo = new QtCharts::QLineSeries();
	series1demo->setName("spline1Source");
	series1demo->setColor(Qt::black);
	series1demo->setUseOpenGL(true);
	QPen demoPen;
	demoPen.setWidthF(0.5f);           
	series1demo->setPen(demoPen);
	chart1->addSeries(series1demo);

	chart1->createDefaultAxes();
	chart1->setMargins(*margins);
	chart1->axisY()->setRange(ui.spinBox_Down->value(), ui.spinBox_Up->value());
	chart1->axisX()->setRange(-10, 10);
}




void DataInterceptor::slotSetInterval(int value)
{
	this->plotInterval = value;	
	chart1->axisX()->setRange(0, plotInterval);
	chart2->axisX()->setRange(0, plotInterval);
	chart3->axisX()->setRange(0, plotInterval);
	chart4->axisX()->setRange(0, plotInterval);
	chart5->axisX()->setRange(0, plotInterval);
}

void DataInterceptor::slotSetReadFreq(int value)
{
	this->readFreq = value;
	readTimer->setInterval(1000/readFreq);
}

void DataInterceptor::slotSetWriteFreq(int value)
{
	this->writeFreq = value;
	
}

void DataInterceptor::slotSetChartMin(double value)
{
	chart1->axisY()->setMin(value);
}

void DataInterceptor::slotSetChartMax(double value)
{
	chart1->axisY()->setMax(value);
}

void DataInterceptor::slotSetChartMin2(double value)
{
	chart2->axisY()->setMin(value);
}

void DataInterceptor::slotSetChartMax2(double value)
{
	chart2->axisY()->setMax(value);
}

void DataInterceptor::slotSetChartMin3(double value)
{
	chart3->axisY()->setMin(value);
}

void DataInterceptor::slotSetChartMax3(double value)
{
	chart3->axisY()->setMax(value);
}

void DataInterceptor::slotSetChartMin4(double value)
{
	chart4->axisY()->setMin(value);
}

void DataInterceptor::slotSetChartMax4(double value)
{
	chart4->axisY()->setMax(value);
}

void DataInterceptor::slotSetChartMin5(double value)
{
	chart5->axisY()->setMin(value);
}

void DataInterceptor::slotSetChartMax5(double value)
{
	chart5->axisY()->setMax(value);
}

void DataInterceptor::slotMenuDemoStart()
{
	createDemoParams();
	ui.startButton->setEnabled(true);
	ui.actionDemoStop->setEnabled(true);
	eAppState = E_APP_STATE::READY_READ_DEMO;
	demoTimer->start();
	
}

void DataInterceptor::slotMenuDemoStop()
{
	eAppState = E_APP_STATE::LOADED;	
}

void DataInterceptor::slotButtonStart()
{
	ui.stopButton->setEnabled(true);
	readTimer->start();
}

void DataInterceptor::slotButtonStop()
{
	ui.startButton->setEnabled(true);
	readTimer->stop();
}


