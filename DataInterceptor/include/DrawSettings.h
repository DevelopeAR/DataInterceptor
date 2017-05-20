
#ifndef DrawSettings_h__
#define DrawSettings_h__




#include <string>
#include <QString>

  // структура настроек графического отображения параметра
struct DrawSettings
{ 
  long int min;// настройки масштаба: минимальное значение
  long int max; // настройки масштаба: максимальное значение
  long int baseValue; // базовая линия шкалы(нулевой значение)
  QString dimension;// размерность на графике
  QString description;  // описание на графике
  //unsigned char colorRed;// компоненты цвета графика: красная
  //unsigned char colorGreen; // компоненты цвета графика: зеленая
  //unsigned char colorBlue; // компоненты цвета графика: синяя
};


#endif // DrawSettings_h__