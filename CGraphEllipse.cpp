#include "CGraphEllipse.h"
#include <QPen>

CGraphEllipse::CGraphEllipse(int iCenterX, int iCenterY, int iApothem) :
	CRegularPolygon(iCenterX,iCenterY,iApothem,CGraph::GRAPH_ELLIPSE)
{
}

CGraphEllipse::CGraphEllipse() : 
    CRegularPolygon()
{
    m_iGraphType = CGraph::GRAPH_ELLIPSE;
}

void CGraphEllipse::Draw(QPainter* pPainter)
{ 
    //Set pen.
    pPainter->setPen(Qt::blue);

	//ÉèÖÃ±ÊË¢
//	CGdiObject* oldBrush = pDC->SelectStockObject(NULL_BRUSH);

    //»æÖÆÔ²ÐÎ
//    pPainter->drawEllipse(GetCenterX() - GetApothem(), m_iCenterY - m_iApothem,
//        m_iCenterX + m_iApothem, m_iCenterY + m_iApothem);
    pPainter->drawEllipse(m_iCenterX - m_iApothem, m_iCenterY - m_iApothem,m_iApothem*2,m_iApothem*2);

}


