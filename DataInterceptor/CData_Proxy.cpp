#ifndef CData_Proxy_h__
#define CData_Proxy_h__

#include "include/CDataProxy.h"
#include "..\\DataInterceptor.h"

CDataProxy::CDataProxy(CData* p, DataInterceptor* pDI)
{
	pData = p; //��������� �� ������ ������
	pParent = pDI; // ��������� �� ������������ ����� ��� ������� � �������� ������ ������ ���������
}

CDataProxy::~CDataProxy()
{

}

void CDataProxy::SetWorkData()
{
	if (pParent->eAppState != DataInterceptor::E_APP_STATE::READY_READ_DEMO )
	{
		pData = &pParent->data;
	}

}

#endif // CData_Proxy_h__