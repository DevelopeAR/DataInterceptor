
#ifndef �INTERCEPTOR_H
#define �INTERCEPTOR_H

#include <string>
#include "CData.h"

/**
  * ����� ��������� ������� ������������� ������ �� ������ (����� ����� �����������
  * ����������� ������ ������ �� TCP ��� UDP ���������� � ����� �� COM �����)
  */

class �Interceptor
{
public:
	�Interceptor();
	~�Interceptor();
	
  //������ ������� �������� ������������� ���������� �� ������
	void readStepFromMem();
  
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
};

#endif // �INTERCEPTOR_H
