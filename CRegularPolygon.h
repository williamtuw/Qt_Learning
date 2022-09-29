#pragma once
#include "CGraph.h"
class CRegularPolygon :
    public CGraph
{
public:
	//���캯��
	CRegularPolygon();

	CRegularPolygon(int iCenterX, int iCenterY, int iApothem,int iGraphType);

	void SetApothem(int iApothem);//���ñ��ľ���

	void SetCenterX(int iCenterX);//�������ĵ������

	void SetCenterY(int iCenterY);//�������ĵ�������

	int GetCenterX();//��ȡ���ĵ������

	int GetCenterY();//��ȡ���ĵ�������

	int GetApothem();//��ȡ���ľ���

	virtual void Move(int iOffsetX, int iOffsetY);//��дMove����

protected:
	int m_iCenterX;
	int m_iCenterY;
	int m_iApothem;//���ľ���
};

