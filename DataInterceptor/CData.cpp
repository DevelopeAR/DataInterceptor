#include "include\CData.h"

CData::CData()
{

}

CData::~CData()
{

}

void CData::clearData()
{
	//TODO ��� ���� �� �������� � params , ����� �� ��������	
	pTimeParam = &params[0];
	paramsCount = 0;
}

void CData::setPTimeParam(CParam* p)
{
	this->pTimeParam = p;
}

void CData::findTimeParam(QString str)
{
	//TODO
}