#ifndef CInterceptorAdapter_h__
#define CInterceptorAdapter_h__




#include <string>
#include "CData.h"

/**
  * ����� ������� ��� ������ CInterceptor � ���������������� ������ ���������
  */

class �InterceptorAdapter
{
public:
	�InterceptorAdapter();
	�InterceptorAdapter(CData* pd, CData*pProxy);
	~�InterceptorAdapter();
	
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
  CData* pDataDemo_Proxy;
};

#endif // CInterceptorAdapter_h__
