
#ifndef CDataProxy_h__
#define CDataProxy_h__


#include "include/CData.h"
#include "..\\DataInterceptor.h"


#include <string>
#include <vector>
#include "CParam.h"

#define MAX_PARAMS_COUNT 100// ������������ ����� ������������� ����������
	
class CDataProxy: public CData	// ����� "����������� "�������� ����-������ ��� ������� ������ � ������, ���������� �� ���������-�������
{
public:
	CDataProxy(CData* p, DataInterceptor* pDI);
	~CDataProxy();
	CData dataDemo;
	CData* pData;
	DataInterceptor* pParent;

	void SetWorkData(); // ������������� ������ (����������������� CDataProxy ��� ������� CData)
};

#endif // CDataProxy_h__
