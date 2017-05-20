#include "include\CData.h"

CData::CData()
{

}

CData::~CData()
{

}

void CData::clearData()
{
	//TODO тут надо бы обнулить и params , тольк не мемсетом	
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