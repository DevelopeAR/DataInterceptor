
#ifndef CTRANSMITTER_H
#define CTRANSMITTER_H

#include <string>
#include "CData.h"

/*
  класс управляет передачей отслеживаемых данных в файл (позже будет реализована
  возможность пересылать данные по TCP и UDP,  а также запись в COM порт)
*/

class CTransmitter
{
public:
	CTransmitter();
	~CTransmitter();
  
  // устанавливант имя файла для экспорта данных
  void setExportFileName(std::string filename);

  //cохраняет значения текущего шага в файле
  void saveStepToFile();

  // открывает файл для записи и пишет строку заголовков
  void startRecordToFile();

  //закрывает файл
  void stopRecordToFile();

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
  std::string exportFileName;
};

#endif // CTRANSMITTER_H
