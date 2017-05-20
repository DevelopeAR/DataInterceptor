#ifndef CParam_h__
#define CParam_h__





#include <string>
#include <vector>
#include "DrawSettings.h"

//����� �������������� ���������
class CParam
{
public:
	CParam();
	~CParam();

  QString name;// ��� ���������
  double cur_value;// ������� ��������
  double prev_value; //�������� �� ���������� ����
  bool bCorrectValue;// ������� ������������ ������
  DrawSettings ds;// ��������� � ����������� ����������� ���������

private:

  unsigned long int adress;// ������ ���������
  size_t size;  // ������ ���������� �������������� ��������
};

#endif // CParam_h__