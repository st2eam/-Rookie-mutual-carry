#include "system_management.h"
#include "ui_system_management.h"

System_management::System_management(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::System_management)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    this->hide();
    this->setParent(parent);
}

System_management::~System_management()
{
    delete ui;
}
