#include "CGraphRect.h"

void CGraphRect::Draw(QPainter* pPainter)
{
    //Set pen.
    pPainter->setPen(Qt::blue);

	//���ñ�ˢ
//	CGdiObject* oldBrush = pDC->SelectStockObject(NULL_BRUSH);

    //����������
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



