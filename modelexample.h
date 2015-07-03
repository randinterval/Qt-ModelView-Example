#ifndef MODELEXAMPLE_H
#define MODELEXAMPLE_H

#include <QAbstractTableModel>

class ModelExample : public QAbstractTableModel
{
    int array[3][3];

    Q_OBJECT
public:
    explicit ModelExample(QObject *parent = 0);

signals:

public slots:


    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
};

#endif // MODELEXAMPLE_H
