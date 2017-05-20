#pragma once

#include <QtWidgets/QMainWindow>
#include <QtCharts>
#include <QMargins>
#include <QAction>
#include <QMenuBar>
#include "ui_DataInterceptor.h"

#include "include/UserSettings.h"
#include "include/CData.h"
#include "include/CParam.h"
#include "include/CTransmitter.h"
#include "include/CInterceptor.h"
#include "include/CInterceptorAdapter.h"

class DataInterceptor : public QMainWindow
{
    Q_OBJECT

public:
    DataInterceptor(QWidget *parent = Q_NULLPTR);


	enum E_APP_STATE
	{
		LOADED = 0,			// программа загружена, но не настроена
		READY_READ = 1,		// готова к чтению данных (загружен конфиг, прочитан variable.dat)
		READY_READ_DEMO=2,	// готова к чтению данных (демо режим)
		READING_DATA = 3	// идёт чтение данных и отрисовка выбранных
	}eAppState;				// глобальное состояние программы

	QPointF *cur1, *prev1;
	
	UserSettings userSettings;	// настройки программы от пользователя
	CData data;	// объект содержит сведения об отслеживаемых параметрах    
	CData data_demo_PROXY; // "заместитель" для демо-режима
	СInterceptorAdapter interceptorAdapter;
	
	
	

	bool readParamsFile (std::string str);		// читает созданый программой-клиентом файл с адресами отслеживаемых переменных
	CParam createParam ();						// создаёт новый параметр для отслеживания  
	void setTimeParam (std::string nameTime);	// установливает имя "параметра-времени"
	void setFrequency (unsigned int freq);		// устанавливает частоту регистрации
	void startInterception ();					// начинает считывание отслеживаемых значений
	void stopInterception ();					// останавливает  считывание отслеживаемых значений
	bool setDrawSettings (std::string filename);// устанавливает настройки отрисовка графика параметра. Настройки загружает из
													// файла или заполняет дефолтными значениями
	void setUserSettings (UserSettings us);		//получает настройки пользователя (пока консоль, похже будет получать от GUI)


public slots:
		void slotSetInterval(int value);	
		void slotSetReadFreq(int value);
		void slotSetWriteFreq(int value);
		void slotSetChartMin(double value);
		void slotSetChartMax(double value);
		void slotSetChartMin2(double value);
		void slotSetChartMax2(double value);
		void slotSetChartMin3(double value);
		void slotSetChartMax3(double value);
		void slotSetChartMin4(double value);
		void slotSetChartMax4(double value);
		void slotSetChartMin5(double value);
		void slotSetChartMax5(double value);		
		void slotMenuDemoStart();
		void slotMenuDemoStop();
		void slotButtonStart();
		void slotButtonStop();

		//TODO слоты для обработки выбора параметра в списке
		//paramComboBox->activated(QString) // или по индексу в списке activated(int)

protected:
  CTransmitter transmitter;// объект управляет передачей данных в файл (и в перспективе по сети)
  СInterceptor interceptor;// объект управляет процессом получения текущих значений отслеживаемых параметров

private:
    Ui::DataInterceptorClass ui;
	QTime* modelTime;       // время
	QTimer* readTimer;		// таймер для чтения данных
	//QTimer* seriesTimer;	
	QTimer* demoTimer;		// таймер демонстрационного режима(запускает генерацию тестовых данных с частотой 100hz)

	QChart *chart1;	//график
	QChart *chart2;
	QChart *chart3;
	QChart *chart4;
	QChart *chart5;

	//QtCharts::QSplineSeries* series1; // данные графика
	QtCharts::QLineSeries* series1demo; // эталонный сигнал для демо режима
	QtCharts::QLineSeries* series1; // данные графика
	QtCharts::QLineSeries* series2;
	QtCharts::QLineSeries* series3;
	QtCharts::QLineSeries* series4;
	QtCharts::QLineSeries* series5;

	QMargins *margins;	// хранит настройки отступа графиков от границы виджета
	uint plotInterval;	// интервал скользящего окна графика
	uint readFreq;		// частота получения (чтения) данных    
	uint demoFreq;      // частота создания демо-данных
	uint writeFreq;		// частота передачи (записи) данных

	// тестовые данные для проверки работы интерфейса
	QTime* testTime; // сгенерированное время для теста
	void generateDemoData();// генерирует тестовые сигналы	
	void createDemoParams(); // создаёт тестовые данные
	void initSeries();		// инициализация данных для графиков 
	void initCharts();		// инициализация графиков
	
private slots:
	void slotReadTimer();
	void slotDemoTimer();
	//void slotSeriesTimer1();	
};
