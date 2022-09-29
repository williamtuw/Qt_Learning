#pragma once
#include <QObject>
#include <QPainter>

class CGraph:public QObject
{
    Q_OBJECT
public:
	//定义无参的构造函数
    CGraph();

	////构造函数
	CGraph(int iGraphType);

public:

	//枚举
	enum
	{
        GRAPH_DEFAULT=0,
        GRAPH_TRIANGLE,
		GRAPH_RECTANGLE,
		GRAPH_ELLIPSE,
	};



	int GetGraphType();//获取图形类型

    virtual void Draw(QPainter* pPainter)=0;

	//CGraph* CreateGraphObj(int m_iCenterX, int m_iCenterY, int m_iRadius, int iType);
	virtual void Move(int iOffsetX,int iOffsetY)=0; //移动图形

protected:
	int m_iGraphType;

//public:
//	//void SetShape(int iGraphType);//设置形状

};

