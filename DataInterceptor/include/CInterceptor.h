
#ifndef СINTERCEPTOR_H
#define СINTERCEPTOR_H

#include <string>
#include "CData.h"

/**
  * класс управляет чтением отслеживаемых данных из памяти (позже будет реализована
  * возможность читать данные по TCP или UDP протоколам а также по COM порту)
  */

class СInterceptor
{
public:
	СInterceptor();
	~СInterceptor();
	
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
};

#endif // СINTERCEPTOR_H
