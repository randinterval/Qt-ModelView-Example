#include "modelexample.h"

ModelExample::ModelExample(QObject *parent) :
    QAbstractTableModel(parent)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            this->array[i][j] = i+j;
        }
    }
}

int ModelExample::rowCount(const QModelIndex &parent) const
{
    return 3;
}

int ModelExample::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant ModelExample::data(const QModelIndex &index, int role) const
{
    int row = index.row();
    int col = index.column();
    if(role==Qt::DisplayRole)
    {
       return this->array[row][col];
    }
    return QVariant();

}
