#include "guest_management.h"
#include "ui_guest_management.h"

Guest_management::Guest_management(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Guest_management)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    this->hide();
    this->setParent(parent);
}

Guest_management::~Guest_management()
{
    delete ui;
}
