#ifndef MYMODEL_H
#define MYMODEL_H

#include "CGraph.h"
#include "qobject.h"


class MyModel:public QObject
{
    Q_OBJECT
public:
    MyModel();
    ~MyModel();
    void addGraph( CGraph* pGraph);
    void addGraph(int iCenterX, int iCenterY, int iCenterR, int iGraphType);
    void moveGraphs(int iOffestX, int iOffestY,int iType);
    const QList<CGraph*>& getList();
private:
    QList<CGraph*> m_lsGraphs;

public slots:
    void clear();
signals:
    void update();
};

#endif // MYMODEL_H
