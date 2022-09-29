#ifndef QGRAPHMODEL_H
#define QGRAPHMODEL_H

#include <QAbstractListModel>
#include "CRegularPolygon.h"

class QGraphModel : public QAbstractListModel
{
    Q_OBJECT

public:
    explicit QGraphModel(QObject *parent = nullptr);

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    bool appendGraph( CRegularPolygon* pGraph);
private:
    QList<CRegularPolygon*> m_lsGraphs;
};

#endif // QGRAPHMODEL_H
