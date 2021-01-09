#include "consumption_management.h"
#include "ui_consumption_management.h"

Consumption_management::Consumption_management(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Consumption_management)
{
    ui->setupUi(this);
}

Consumption_management::~Consumption_management()
{
    delete ui;
}
