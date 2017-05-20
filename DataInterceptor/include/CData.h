
#ifndef CDATA_H
#define CDATA_H

#include <string>
#include <vector>
#include "CParam.h"

#define MAX_PARAMS_COUNT 100// ������������ ����� ������������� ����������
	
class CData	// ����� �������� ������, ���������� �� ���������-�������
{
public:
	CData();
	~CData();
	
	CParam params[MAX_PARAMS_COUNT];// ������ ������������� ���������� (CParam)
	unsigned int paramsCount; // ������� ����� ������������� ����������
	CParam* pTimeParam;// ��������� �� �������� "�����"
	
	void findTimeParam(QString str);// ���� �������� "�����" �� ����������� ����� � ������������� ��������� pTimeParam
	void setPTimeParam(CParam* p); //���������� ��������� �� �������� �����
	void clearData(); // �������� ������
};

#endif // CDATA_H
