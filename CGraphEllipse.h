#pragma once
#include "CRegularPolygon.h"
class CGraphEllipse :public CRegularPolygon
{
public:

	CGraphEllipse();
    CGraphEllipse(int iCenterX, int iCenterY, int iApothem);

	//��д�����Draw����
    virtual void Draw(QPainter* pPainter);
};

