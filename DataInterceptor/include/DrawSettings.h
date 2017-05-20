
#ifndef DrawSettings_h__
#define DrawSettings_h__




#include <string>
#include <QString>

  // ��������� �������� ������������ ����������� ���������
struct DrawSettings
{ 
  long int min;// ��������� ��������: ����������� ��������
  long int max; // ��������� ��������: ������������ ��������
  long int baseValue; // ������� ����� �����(������� ��������)
  QString dimension;// ����������� �� �������
  QString description;  // �������� �� �������
  //unsigned char colorRed;// ���������� ����� �������: �������
  //unsigned char colorGreen; // ���������� ����� �������: �������
  //unsigned char colorBlue; // ���������� ����� �������: �����
};


#endif // DrawSettings_h__