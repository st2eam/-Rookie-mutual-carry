#include "dialogbaobiao1.h"
#include "ui_dialogbaobiao1.h"

Dialogbaobiao1::Dialogbaobiao1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogbaobiao1)
{//入住客人报表
    ui->setupUi(this);
    model = new QSqlTableModel(this);
    model->setTable("Guest");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
    model->select(); //选取整个表的所有行
    QString str = "";
       model->setFilter(tr("startdate like '%1' ").arg("%"+str+"%"));
    model->setHeaderData(0,Qt::Horizontal,"顾客名字");
//    model->setHeaderData(1,Qt::Horizontal,"个人ID");
//    model->setHeaderData(2,Qt::Horizontal,"电话号码");
//    model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
//    model->setHeaderData(4,Qt::Horizontal,"VIP号码");
    model->setHeaderData(1,Qt::Horizontal,"入住房间");
//    model->setHeaderData(6,Qt::Horizontal,"预定入住");
//    model->setHeaderData(7,Qt::Horizontal,"预定离开");
     model->setHeaderData(2,Qt::Horizontal,"入住时间");
     model->setHeaderData(3,Qt::Horizontal,"离开时间");
//    model->setHeaderData(10,Qt::Horizontal,"应缴金额");
      model->removeColumn(10);
       model->removeColumn(7);
        model->removeColumn(6);
         model->removeColumn(4);
          model->removeColumn(3);
           model->removeColumn(2);
            model->removeColumn(1);
    ui->tableView->setModel(model);
    ui->tableView->show();
}

Dialogbaobiao1::~Dialogbaobiao1()
{
    delete ui;
}
