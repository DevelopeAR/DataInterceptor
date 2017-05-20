
#ifndef CDataProxy_h__
#define CDataProxy_h__


#include "include/CData.h"
#include "..\\DataInterceptor.h"


#include <string>
#include <vector>
#include "CParam.h"

#define MAX_PARAMS_COUNT 100// максимальное число отслеживаемых параметров
	
class CDataProxy: public CData	// класс "Заместитель "содержит демо-данные или передаёт доступ к данным, получаемым от программы-клиента
{
public:
	CDataProxy(CData* p, DataInterceptor* pDI);
	~CDataProxy();
	CData dataDemo;
	CData* pData;
	DataInterceptor* pParent;

	void SetWorkData(); // устанавливает данные (демонстрациоонные CDataProxy или рабочие CData)
};

#endif // CDataProxy_h__
