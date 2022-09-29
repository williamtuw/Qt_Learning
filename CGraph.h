#pragma once
#include <QObject>
#include <QPainter>

class CGraph:public QObject
{
    Q_OBJECT
public:
	//�����޲εĹ��캯��
    CGraph();

	////���캯��
	CGraph(int iGraphType);

public:

	//ö��
	enum
	{
        GRAPH_DEFAULT=0,
        GRAPH_TRIANGLE,
		GRAPH_RECTANGLE,
		GRAPH_ELLIPSE,
	};



	int GetGraphType();//��ȡͼ������

    virtual void Draw(QPainter* pPainter)=0;

	//CGraph* CreateGraphObj(int m_iCenterX, int m_iCenterY, int m_iRadius, int iType);
	virtual void Move(int iOffsetX,int iOffsetY)=0; //�ƶ�ͼ��

protected:
	int m_iGraphType;

//public:
//	//void SetShape(int iGraphType);//������״

};

