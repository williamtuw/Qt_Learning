#pragma once
#include "CRegularPolygon.h"
class CGraphEllipse :public CRegularPolygon
{
public:

	CGraphEllipse();
    CGraphEllipse(int iCenterX, int iCenterY, int iApothem);

	//重写基类的Draw函数
    virtual void Draw(QPainter* pPainter);
};

