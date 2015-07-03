#ifndef TABLEFORM_H
#define TABLEFORM_H

#include <QWidget>
#include <modelexample.h>

namespace Ui {
class TableForm;
}

class TableForm : public QWidget
{
    Q_OBJECT
    ModelExample *model;

public:
    explicit TableForm(QWidget *parent = 0);
    ~TableForm();

private:
    Ui::TableForm *ui;
};

#endif // TABLEFORM_H
