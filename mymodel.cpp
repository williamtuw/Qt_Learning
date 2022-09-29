#include "mymodel.h"
#include "CGraphTriangle.h"
#include "CGraphRect.h"
#include "CGraphEllipse.h"

MyModel::MyModel()
{

}

MyModel::~MyModel()
{
    foreach (CGraph* pGraph, m_lsGraphs) {
        delete pGraph;
    }
    m_lsGraphs.clear();
}

void MyModel::addGraph( CGraph* pGraph)
{
    if(!pGraph)
        return;

    m_lsGraphs.append(pGraph);

    emit update();
}

const QList<CGraph*>& MyModel::getList()
{
    return m_lsGraphs;
}

void MyModel::moveGraphs(int iOffsetX, int iOffsetY, int iGraphType)
{
    //移动指定图形
    int i = int(m_lsGraphs.count())-1;
    for (; i >= 0; i--)
    {
        if (iGraphType ==CGraph::GRAPH_DEFAULT || m_lsGraphs[i]->GetGraphType() == iGraphType)
        {
            m_lsGraphs[i]->Move(iOffsetX, iOffsetY);
        }
    }

    emit update();
}

void MyModel::addGraph(int iCenterX, int iCenterY, int iRadius, int iGraphType)
{
    CGraph* pGraph=NULL;
    //创建指定对象并插入至model.
    switch (iGraphType)
        {
        case CGraph::GRAPH_TRIANGLE:
            pGraph = new CGraphTriangle(iCenterX, iCenterY, iRadius);
            addGraph(pGraph);
            break;
        case CGraph::GRAPH_RECTANGLE:
            pGraph = new CGraphRect(iCenterX, iCenterY, iRadius);
            addGraph(pGraph);
            break;
        case CGraph::GRAPH_ELLIPSE:
            pGraph = new CGraphEllipse(iCenterX, iCenterY, iRadius);
            addGraph(pGraph);
            break;
        default:
            break;
        }

    emit update();
}

void MyModel::clear()
{
    // TODO: 在此处添加实现代码.
    int i = int(m_lsGraphs.count()) - 1;
    for (; i >= 0; i--)
    {
        //释放对象
        delete m_lsGraphs[i];
        m_lsGraphs[i] = NULL;

    }
    m_lsGraphs.clear(); //清空元素


    emit update();
}
