#include "include\CInterceptorAdapter.h"

�InterceptorAdapter::�InterceptorAdapter()
{

}

�InterceptorAdapter::�InterceptorAdapter(CData* pd, CData*pProxy)
{
	pData = pd;
	pDataDemo_Proxy = pProxy;

}

�InterceptorAdapter::~�InterceptorAdapter()
{

}

void �InterceptorAdapter::readStepFromMem()
{
	pData->paramsCount = 5;
	
	pData->params[0] = pDataDemo_Proxy->params[0];
	pData->params[1] = pDataDemo_Proxy->params[1];
	pData->params[2] = pDataDemo_Proxy->params[2];
	pData->params[3] = pDataDemo_Proxy->params[3];
	pData->params[4] = pDataDemo_Proxy->params[4];

	pData->pTimeParam = &pDataDemo_Proxy->params[0];
}