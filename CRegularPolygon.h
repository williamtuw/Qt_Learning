#pragma once
#include "CGraph.h"
class CRegularPolygon :
    public CGraph
{
public:
	//构造函数
	CRegularPolygon();

	CRegularPolygon(int iCenterX, int iCenterY, int iApothem,int iGraphType);

	void SetApothem(int iApothem);//设置边心距离

	void SetCenterX(int iCenterX);//设置中心点横坐标

	void SetCenterY(int iCenterY);//设置中心点纵坐标

	int GetCenterX();//获取中心点横坐标

	int GetCenterY();//获取中心点纵坐标

	int GetApothem();//获取边心距离

	virtual void Move(int iOffsetX, int iOffsetY);//重写Move方法

protected:
	int m_iCenterX;
	int m_iCenterY;
	int m_iApothem;//边心距离
};

