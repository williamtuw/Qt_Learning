#pragma once
#include "CRegularPolygon.h"
class CGraphTriangle :
    public CRegularPolygon
{
public:

	CGraphTriangle();
	CGraphTriangle(int iCenterX, int iCenterY, int iApothem);

	//��д�����Draw����
    virtual void Draw(QPainter* pPainter);
};

