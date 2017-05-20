
#ifndef CTRANSMITTER_H
#define CTRANSMITTER_H

#include <string>
#include "CData.h"

/*
  ����� ��������� ��������� ������������� ������ � ���� (����� ����� �����������
  ����������� ���������� ������ �� TCP � UDP,  � ����� ������ � COM ����)
*/

class CTransmitter
{
public:
	CTransmitter();
	~CTransmitter();
  
  // ������������� ��� ����� ��� �������� ������
  void setExportFileName(std::string filename);

  //c�������� �������� �������� ���� � �����
  void saveStepToFile();

  // ��������� ���� ��� ������ � ����� ������ ����������
  void startRecordToFile();

  //��������� ����
  void stopRecordToFile();

   // ������������� ��������� �� ������
  void setPData (CData* new_var)   {
      pData = new_var;
  }

  // ������� ��������� �� ������
  CData* getPData ()   {
    return pData;
  }

private:
  CData* pData;
  std::string exportFileName;
};

#endif // CTRANSMITTER_H
