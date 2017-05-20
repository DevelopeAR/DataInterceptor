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
		LOADED = 0,			// ��������� ���������, �� �� ���������
		READY_READ = 1,		// ������ � ������ ������ (�������� ������, �������� variable.dat)
		READY_READ_DEMO=2,	// ������ � ������ ������ (���� �����)
		READING_DATA = 3	// ��� ������ ������ � ��������� ���������
	}eAppState;				// ���������� ��������� ���������

	QPointF *cur1, *prev1;
	
	UserSettings userSettings;	// ��������� ��������� �� ������������
	CData data;	// ������ �������� �������� �� ������������� ����������    
	CData data_demo_PROXY; // "�����������" ��� ����-������
	�InterceptorAdapter interceptorAdapter;
	
	
	

	bool readParamsFile (std::string str);		// ������ �������� ����������-�������� ���� � �������� ������������� ����������
	CParam createParam ();						// ������ ����� �������� ��� ������������  
	void setTimeParam (std::string nameTime);	// ������������� ��� "���������-�������"
	void setFrequency (unsigned int freq);		// ������������� ������� �����������
	void startInterception ();					// �������� ���������� ������������� ��������
	void stopInterception ();					// �������������  ���������� ������������� ��������
	bool setDrawSettings (std::string filename);// ������������� ��������� ��������� ������� ���������. ��������� ��������� ��
													// ����� ��� ��������� ���������� ����������
	void setUserSettings (UserSettings us);		//�������� ��������� ������������ (���� �������, ����� ����� �������� �� GUI)


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

		//TODO ����� ��� ��������� ������ ��������� � ������
		//paramComboBox->activated(QString) // ��� �� ������� � ������ activated(int)

protected:
  CTransmitter transmitter;// ������ ��������� ��������� ������ � ���� (� � ����������� �� ����)
  �Interceptor interceptor;// ������ ��������� ��������� ��������� ������� �������� ������������� ����������

private:
    Ui::DataInterceptorClass ui;
	QTime* modelTime;       // �����
	QTimer* readTimer;		// ������ ��� ������ ������
	//QTimer* seriesTimer;	
	QTimer* demoTimer;		// ������ ����������������� ������(��������� ��������� �������� ������ � �������� 100hz)

	QChart *chart1;	//������
	QChart *chart2;
	QChart *chart3;
	QChart *chart4;
	QChart *chart5;

	//QtCharts::QSplineSeries* series1; // ������ �������
	QtCharts::QLineSeries* series1demo; // ��������� ������ ��� ���� ������
	QtCharts::QLineSeries* series1; // ������ �������
	QtCharts::QLineSeries* series2;
	QtCharts::QLineSeries* series3;
	QtCharts::QLineSeries* series4;
	QtCharts::QLineSeries* series5;

	QMargins *margins;	// ������ ��������� ������� �������� �� ������� �������
	uint plotInterval;	// �������� ����������� ���� �������
	uint readFreq;		// ������� ��������� (������) ������    
	uint demoFreq;      // ������� �������� ����-������
	uint writeFreq;		// ������� �������� (������) ������

	// �������� ������ ��� �������� ������ ����������
	QTime* testTime; // ��������������� ����� ��� �����
	void generateDemoData();// ���������� �������� �������	
	void createDemoParams(); // ������ �������� ������
	void initSeries();		// ������������� ������ ��� �������� 
	void initCharts();		// ������������� ��������
	
private slots:
	void slotReadTimer();
	void slotDemoTimer();
	//void slotSeriesTimer1();	
};
