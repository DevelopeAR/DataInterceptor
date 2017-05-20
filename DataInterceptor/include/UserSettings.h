
#ifndef USERSETTINGS_H
#define USERSETTINGS_H

#include <string>

  // ��������� �������� �� ������������
struct UserSettings
{ 
  std::string adressFilePath;// ���� � ����� � ������� � �������� ���������� (�� ��������� variable.dat)
  std::string timeParamName;// ��� ��������� "�������" (������ ���� ������� �������������)
  unsigned int reading_freq;// ������� ������� ���������� 
  unsigned int writing_freq;// ������� ��������(������) ����������
  bool bExportToFile; // �������������� �� ������������� ������ � ����
};

#endif // USERSETTINGS_H
