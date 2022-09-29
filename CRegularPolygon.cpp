
#include "CRegularPolygon.h"

CRegularPolygon::CRegularPolygon(int iCenterX, int iCenterY, int iApothem, int iGraphType) :m_iCenterX(iCenterX),
m_iCenterY(iCenterY), m_iApothem(iApothem),CGraph(iGraphType)
{

}

CRegularPolygon::CRegularPolygon() : m_iCenterX(0),
m_iCenterY(0), m_iApothem(0)
{

}


void CRegularPolygon::SetApothem(int iApothem)
{
	m_iApothem = iApothem;
}

void CRegularPolygon::SetCenterX(int iCenterX)
{
	m_iCenterX = iCenterX;
}

void CRegularPolygon::SetCenterY(int iCenterY)
{
	m_iCenterY = iCenterY;
}

int CRegularPolygon::GetCenterX()
{
	return m_iCenterX;
}

int CRegularPolygon::GetCenterY()
{
	return m_iCenterY;
}

int CRegularPolygon::GetApothem()
{
	return m_iApothem;
}

void CRegularPolygon::Move(int iOffsetX, int iOffsetY)
{
	m_iCenterX += iOffsetX;
	m_iCenterY += iOffsetY;
}
