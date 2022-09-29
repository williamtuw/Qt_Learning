#pragma once
#include "CRegularPolygon.h"
class CGraphTriangle :
    public CRegularPolygon
{
public:

	CGraphTriangle();
	CGraphTriangle(int iCenterX, int iCenterY, int iApothem);

	//重写基类的Draw函数
    virtual void Draw(QPainter* pPainter);
};

