
#ifndef CDATA_H
#define CDATA_H

#include <string>
#include <vector>
#include "CParam.h"

#define MAX_PARAMS_COUNT 100// максимальное число отслеживаемых параметров
	
class CData	// класс содержит данные, получаемые от программы-клиента
{
public:
	CData();
	~CData();
	
	CParam params[MAX_PARAMS_COUNT];// массив отслеживаемых параметров (CParam)
	unsigned int paramsCount; // текущее число отслеживаемых параметров
	CParam* pTimeParam;// указатель на параметр "время"
	
	void findTimeParam(QString str);// ищет параметр "время" по переданному имени и устанавливает указатель pTimeParam
	void setPTimeParam(CParam* p); //установить указатель на параметр время
	void clearData(); // очистить данные
};

#endif // CDATA_H
