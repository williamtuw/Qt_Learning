#pragma once
#include "CRegularPolygon.h"
class CGraphRect :public CRegularPolygon
{
public:

	CGraphRect();
	CGraphRect(int iCenterX, int iCenterY, int iApothem);

	//��д�����Draw����
    virtual void Draw(QPainter* pPainter);
};

