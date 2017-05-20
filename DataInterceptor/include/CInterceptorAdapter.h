#ifndef CInterceptorAdapter_h__
#define CInterceptorAdapter_h__




#include <string>
#include "CData.h"

/**
  * класс адаптер для замены CInterceptor в демонстрационном режиме программы
  */

class СInterceptorAdapter
{
public:
	СInterceptorAdapter();
	СInterceptorAdapter(CData* pd, CData*pProxy);
	~СInterceptorAdapter();
	
  //читает текущие значения отслеживаемых параметров из памяти
	void readStepFromMem();
  
  // установливает указатель на данные
  void setPData (CData* new_var)   {
      pData = new_var;
  }

  // передаёт указатель на данные
  CData* getPData ()   {
    return pData;
  }
  
private:
  CData* pData;
  CData* pDataDemo_Proxy;
};

#endif // CInterceptorAdapter_h__
