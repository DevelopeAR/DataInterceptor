#ifndef CData_Proxy_h__
#define CData_Proxy_h__

#include "include/CDataProxy.h"
#include "..\\DataInterceptor.h"

CDataProxy::CDataProxy(CData* p, DataInterceptor* pDI)
{
	pData = p; //указатель на объект данных
	pParent = pDI; // указатель на родительский класс для доступа к текущему режиму работы программы
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