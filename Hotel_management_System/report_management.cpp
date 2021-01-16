#include "dialogbaobiao.h"
#include "dialogbaobiao1.h"
#include "dialogbaobiao2.h"
#include "dialogbaobiao3.h"
#include "dialogbaobiao4.h"
#include "dialogbaobiao5.h"
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

void Report_management::on_tabWidget_currentChanged(int index)
{
    if(index==0)
    {
    //创建模型

        model = new QSqlTableModel(this);
        model->setTable("Guest");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
        model->select(); //选取整个表的所有行
        model->setHeaderData(0,Qt::Horizontal,"顾客名字");
        model->setHeaderData(1,Qt::Horizontal,"个人ID");
        model->setHeaderData(2,Qt::Horizontal,"电话号码");
        model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
        model->setHeaderData(4,Qt::Horizontal,"VIP号码");
        model->setHeaderData(5,Qt::Horizontal,"入住房间");
        model->setHeaderData(6,Qt::Horizontal,"预定入住");
        model->setHeaderData(7,Qt::Horizontal,"预定离开");
        model->setHeaderData(8,Qt::Horizontal,"入住时间");
        model->setHeaderData(9,Qt::Horizontal,"离开时间");
        model->setHeaderData(10,Qt::Horizontal,"应缴金额");

//           QString str = "";
//           model->setFilter(tr("startdate like '%1'").arg("%"+str+"%"));
        ui->tableView_2->setModel(model);
        ui->tableView_2->show();
    }
    if(index==1)
    {
        //创建模型
        model = new QSqlTableModel(this);
        model->setTable("Guest");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
        model->select(); //选取整个表的所有行
        model->setHeaderData(0,Qt::Horizontal,"顾客名字");
        model->setHeaderData(1,Qt::Horizontal,"个人ID");
        model->setHeaderData(2,Qt::Horizontal,"电话号码");
        model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
        model->setHeaderData(4,Qt::Horizontal,"VIP号码");
        model->setHeaderData(5,Qt::Horizontal,"入住房间");
        model->setHeaderData(6,Qt::Horizontal,"预定入住");
        model->setHeaderData(7,Qt::Horizontal,"预定离开");
        model->setHeaderData(8,Qt::Horizontal,"入住时间");
        model->setHeaderData(9,Qt::Horizontal,"离开时间");
        model->setHeaderData(10,Qt::Horizontal,"应缴金额");
        ui->tableView_3->setModel(model);
        ui->tableView_3->show();
    }
    if(index==2)
    {
        //创建模型
        model = new QSqlTableModel(this);
        model->setTable("Guest");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
        model->select(); //选取整个表的所有行
        model->setHeaderData(0,Qt::Horizontal,"顾客名字");
        model->setHeaderData(1,Qt::Horizontal,"个人ID");
        model->setHeaderData(2,Qt::Horizontal,"电话号码");
        model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
        model->setHeaderData(4,Qt::Horizontal,"VIP号码");
        model->setHeaderData(5,Qt::Horizontal,"入住房间");
        model->setHeaderData(6,Qt::Horizontal,"预定入住");
        model->setHeaderData(7,Qt::Horizontal,"预定离开");
        model->setHeaderData(8,Qt::Horizontal,"入住时间");
        model->setHeaderData(9,Qt::Horizontal,"离开时间");
        model->setHeaderData(10,Qt::Horizontal,"应缴金额");

        ui->tableView_4->setModel(model);
        ui->tableView_4->show();
    }
    if(index==3)
    {
        //创建模型
        model = new QSqlTableModel(this);
        model->setTable("Guest");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
        model->select(); //选取整个表的所有行
        model->setHeaderData(0,Qt::Horizontal,"顾客名字");
        model->setHeaderData(1,Qt::Horizontal,"个人ID");
        model->setHeaderData(2,Qt::Horizontal,"电话号码");
        model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
        model->setHeaderData(4,Qt::Horizontal,"VIP号码");
        model->setHeaderData(5,Qt::Horizontal,"入住房间");
        model->setHeaderData(6,Qt::Horizontal,"预定入住");
        model->setHeaderData(7,Qt::Horizontal,"预定离开");
        model->setHeaderData(8,Qt::Horizontal,"入住时间");
        model->setHeaderData(9,Qt::Horizontal,"离开时间");
        model->setHeaderData(10,Qt::Horizontal,"应缴金额");

        ui->tableView_5->setModel(model);
        ui->tableView_5->show();
    }
    if(index==4)
    {
        //创建模型
        model = new QSqlTableModel(this);
        model->setTable("Guest");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
        model->select(); //选取整个表的所有行
        model->setHeaderData(0,Qt::Horizontal,"顾客名字");
        model->setHeaderData(1,Qt::Horizontal,"个人ID");
        model->setHeaderData(2,Qt::Horizontal,"电话号码");
        model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
        model->setHeaderData(4,Qt::Horizontal,"VIP号码");
        model->setHeaderData(5,Qt::Horizontal,"入住房间");
        model->setHeaderData(6,Qt::Horizontal,"预定入住");
        model->setHeaderData(7,Qt::Horizontal,"预定离开");
        model->setHeaderData(8,Qt::Horizontal,"入住时间");
        model->setHeaderData(9,Qt::Horizontal,"离开时间");
        model->setHeaderData(10,Qt::Horizontal,"应缴金额");

        ui->tableView_6->setModel(model);
        ui->tableView_6->show();
    }
    if(index==5)
    {
        //创建模型
        model = new QSqlTableModel(this);
        model->setTable("Guest");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
        model->select(); //选取整个表的所有行
        model->setHeaderData(0,Qt::Horizontal,"顾客名字");
        model->setHeaderData(1,Qt::Horizontal,"个人ID");
        model->setHeaderData(2,Qt::Horizontal,"电话号码");
        model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
        model->setHeaderData(4,Qt::Horizontal,"VIP号码");
        model->setHeaderData(5,Qt::Horizontal,"入住房间");
        model->setHeaderData(6,Qt::Horizontal,"预定入住");
        model->setHeaderData(7,Qt::Horizontal,"预定离开");
        model->setHeaderData(8,Qt::Horizontal,"入住时间");
        model->setHeaderData(9,Qt::Horizontal,"离开时间");
        model->setHeaderData(10,Qt::Horizontal,"应缴金额");

        ui->tableView_7->setModel(model);
        ui->tableView_7->show();
    }
}

void Report_management::on_pushButton_10_clicked()
{
    Dialogbaobiao d;
    d.exec();
    model->select();
}

void Report_management::on_pushButton_11_clicked()
{
    Dialogbaobiao1 d;
    d.exec();
    model->select();
}

void Report_management::on_pushButton_12_clicked()
{
    Dialogbaobiao2 d;
    d.exec();
    model->select();
}

void Report_management::on_pushButton_13_clicked()
{
    Dialogbaobiao3 d;
    d.exec();
    model->select();
}

void Report_management::on_pushButton_14_clicked()
{
    Dialogbaobiao4 d;
    d.exec();
    model->select();
}

void Report_management::on_pushButton_15_clicked()
{
    Dialogbaobiao5 d;
    d.exec();
    model->select();
}
