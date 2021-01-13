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

    QIcon myicon1(tr(":/littlebutton/Add_users.png")); //新建QIcon对象
    ui->pushButton_4->setIcon(myicon1);
    ui->pushButton_4->setIconSize(QSize(110,70));
    QIcon myicon2(tr(":/littlebutton/Modify_user_information.png")); //新建QIcon对象
    ui->pushButton_5->setIcon(myicon2);
    ui->pushButton_5->setIconSize(QSize(110,70));
    QIcon myicon3(tr(":/littlebutton/Delete_user.png")); //新建QIcon对象
    ui->pushButton_6->setIcon(myicon3);
    ui->pushButton_6->setIconSize(QSize(110,70));

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    bool ok = db.open();
    if(ok)
    {
    qDebug()<<"connect normal";
    }
    else
    {
    qDebug()<<"connect error!";
    }

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
    ui->tableView->setModel(model);
    ui->tableView->show();
}

System_management::~System_management()
{
    delete ui;
}

//添加
void System_management::on_pushButton_4_clicked()
{
    Dialog_add d;
    d.exec();
    model->select();
//    int rowindex = model->rowCount();
//    model->insertRow(rowindex);
}

void System_management::on_pushButton_5_clicked()
{
    model->database().transaction();
    if(model->submitAll()){
        model->database().commit(); //提交
    }
    else{
        model->database().rollback();// 撤回
        QMessageBox::warning(this,"数据库错误",tr("数据库错误: %1").arg(model->lastError().text()));
    }
}

void System_management::on_pushButton_6_clicked()
{
    int rowIndex = ui->tableView->currentIndex().row();
    //qDebug() << rowIndex;
    model->removeRow(rowIndex);
    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定删除当前行吗？"),
                                 QMessageBox::Yes,QMessageBox::No);

    if(ok == QMessageBox::No)
      {
        model->revertAll(); //如果不删除，则撤销
      }
    else model->submitAll(); //否则提交，在数据库中删除该行
}
