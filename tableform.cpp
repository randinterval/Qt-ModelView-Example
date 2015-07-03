#include "tableform.h"
#include "ui_tableform.h"
#include "modelexample.h"

TableForm::TableForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableForm)
{
    ui->setupUi(this);
    this->model = new ModelExample();
    ui->tableView->setModel(model);
    this->setWindowTitle("QTableView Example");

}

TableForm::~TableForm()
{
    delete model;
    delete ui;
}
