#include "report_management.h"
#include "ui_report_management.h"

Report_management::Report_management(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Report_management)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    this->hide();
    this->setParent(parent);
}

Report_management::~Report_management()
{
    delete ui;
}
