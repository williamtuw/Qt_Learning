
#include "CGraphTriangle.h"


void CGraphTriangle::Draw(QPainter* pPainter)
{
    //Set pen.
    pPainter->setPen(Qt::blue);

	//���ñ�ˢ
//	CGdiObject* oldBrush = pDC->SelectStockObject(NULL_BRUSH);

    //����������
    QPoint ptPoints[3];

    //������������
    ptPoints[0].rx() = int(m_iCenterX - sqrt(3)*m_iApothem);
    ptPoints[0].ry() = m_iCenterY+m_iApothem;
    
  
    ptPoints[1].rx() = int(m_iCenterX + sqrt(3) * m_iApothem);
    ptPoints[1].ry() = m_iCenterY + m_iApothem;

    ptPoints[2].rx() = m_iCenterX;
    ptPoints[2].ry() = m_iCenterY - m_iApothem * 2;

    pPainter->drawPolygon(ptPoints, 3);
}

CGraphTriangle::CGraphTriangle(int iCenterX, int iCenterY, int iApothem) :
	CRegularPolygon(iCenterX, iCenterY, iApothem, CGraph::GRAPH_TRIANGLE)
{
}

CGraphTriangle::CGraphTriangle() :
	CRegularPolygon()
{
    m_iGraphType = CGraph::GRAPH_TRIANGLE;
}
