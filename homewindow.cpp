#include "homewindow.h"
#include "ui_homewindow.h"

HomeWindow::HomeWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomeWindow)
{
    ui->setupUi(this);
    form = new TableForm();
}


void HomeWindow::on_opentable_clicked()
{
  form->show();
}


HomeWindow::~HomeWindow()
{
    delete form;
    delete ui;
}
