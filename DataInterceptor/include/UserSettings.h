
#ifndef USERSETTINGS_H
#define USERSETTINGS_H

#include <string>

  // структура настроек от пользователя
struct UserSettings
{ 
  std::string adressFilePath;// путь к файлу с именами и адресами параметров (по умолчанию variable.dat)
  std::string timeParamName;// имя параметра "Времени" (должно быть указано пользователем)
  unsigned int reading_freq;// частота захвата параметров 
  unsigned int writing_freq;// частота передачи(записи) параметров
  bool bExportToFile; // экспортировать ли отслеживаемые данные в файл
};

#endif // USERSETTINGS_H
