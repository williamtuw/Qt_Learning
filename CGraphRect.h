#pragma once
#include "CRegularPolygon.h"
class CGraphRect :public CRegularPolygon
{
public:

	CGraphRect();
	CGraphRect(int iCenterX, int iCenterY, int iApothem);

	//重写基类的Draw函数
    virtual void Draw(QPainter* pPainter);
};

