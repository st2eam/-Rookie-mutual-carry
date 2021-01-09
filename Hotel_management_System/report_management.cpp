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
    QIcon myicon1(tr(":/littlebutton/Print.png")); //新建QIcon对象
    ui->pushButton_10->setIcon(myicon1);
    ui->pushButton_10->setIconSize(QSize(110,70));
    QIcon myicon2(tr(":/littlebutton/Print.png")); //新建QIcon对象
    ui->pushButton_11->setIcon(myicon2);
    ui->pushButton_11->setIconSize(QSize(110,70));
    QIcon myicon3(tr(":/littlebutton/Print.png")); //新建QIcon对象
    ui->pushButton_12->setIcon(myicon3);
    ui->pushButton_12->setIconSize(QSize(110,70));
    QIcon myicon4(tr(":/littlebutton/Print.png")); //新建QIcon对象
    ui->pushButton_13->setIcon(myicon4);
    ui->pushButton_13->setIconSize(QSize(110,70));
    QIcon myicon5(tr(":/littlebutton/Print.png")); //新建QIcon对象
    ui->pushButton_14->setIcon(myicon5);
    ui->pushButton_14->setIconSize(QSize(110,70));
    QIcon myicon6(tr(":/littlebutton/Print.png")); //新建QIcon对象
    ui->pushButton_15->setIcon(myicon6);
    ui->pushButton_15->setIconSize(QSize(110,70));
}

Report_management::~Report_management()
{
    delete ui;
}
