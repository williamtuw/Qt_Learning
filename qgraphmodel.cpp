#include "qgraphmodel.h"

QGraphModel::QGraphModel(QObject *parent)
    : QAbstractListModel(parent)
{
}

QVariant QGraphModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
    return "";
}

int QGraphModel::rowCount(const QModelIndex &parent) const
{
    // For list models only the root node (an invalid parent) should return the list's size. For all
    // other (valid) parents, rowCount() should return 0 so that it does not become a tree model.
    if (parent.isValid())
        return 0;

    // FIXME: Implement me!
    return m_lsGraphs.count();
}

QVariant QGraphModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    if(index.row()>=m_lsGraphs.size())
        return QVariant();

    switch (role) {
    case Qt::DisplayRole:
        return m_lsGraphs.at(index.row())->GetGraphType();
    default:
        return QVariant();
    }
}

bool QGraphModel::appendGraph( CRegularPolygon* pGraph)
{
    if(!pGraph)
        return false;

    m_lsGraphs.append(pGraph);
}
