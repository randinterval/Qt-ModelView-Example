#ifndef HOMEWINDOW_H
#define HOMEWINDOW_H

#include <QMainWindow>
#include "tableform.h"

namespace Ui {
class HomeWindow;
}

class HomeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomeWindow(QWidget *parent = 0);
    ~HomeWindow();

private slots:
    void on_opentable_clicked();

private:
    Ui::HomeWindow *ui;
    TableForm *form;
};

#endif // HOMEWINDOW_H
