#include "CGraphRect.h"

void CGraphRect::Draw(QPainter* pPainter)
{
    //Set pen.
    pPainter->setPen(Qt::blue);

	//设置笔刷
//	CGdiObject* oldBrush = pDC->SelectStockObject(NULL_BRUSH);

    //绘制正方形
//    pPainter->drawRect(m_iCenterX - m_iApothem, m_iCenterY - m_iApothem, m_iCenterX + m_iApothem, m_iCenterY + m_iApothem);
    pPainter->drawRect(m_iCenterX - m_iApothem, m_iCenterY - m_iApothem,m_iApothem*2,m_iApothem*2);
}


CGraphRect::CGraphRect(int iCenterX, int iCenterY, int iApothem) :
	CRegularPolygon(iCenterX, iCenterY, iApothem, CGraph::GRAPH_RECTANGLE)
{
}

CGraphRect::CGraphRect() :
	CRegularPolygon()
{
    m_iGraphType = CGraph::GRAPH_RECTANGLE;
}



