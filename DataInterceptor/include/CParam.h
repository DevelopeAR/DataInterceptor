#ifndef CParam_h__
#define CParam_h__





#include <string>
#include <vector>
#include "DrawSettings.h"

//класс отслеживаемого параметра
class CParam
{
public:
	CParam();
	~CParam();

  QString name;// имя параметра
  double cur_value;// текущее значение
  double prev_value; //значение на предыдущем шаге
  bool bCorrectValue;// признак корректности данных
  DrawSettings ds;// структура с настройками отображений параметра

private:

  unsigned long int adress;// адресс параметра
  size_t size;  // размер переменной отслеживаемого значения
};

#endif // CParam_h__