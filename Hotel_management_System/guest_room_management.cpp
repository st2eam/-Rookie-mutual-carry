#include "guest_room_management.h"
#include "ui_guest_room_management.h"

Guest_room_management::Guest_room_management(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Guest_room_management)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    this->hide();
    this->setParent(parent);

    QIcon myicon1(tr(":/littlebutton/Increase_Room_information.png")); //新建QIcon对象
    ui->pushButton_7->setIcon(myicon1);
    ui->pushButton_7->setIconSize(QSize(110,70));
    QIcon myicon2(tr(":/littlebutton/Change_the_room_information.png")); //新建QIcon对象
    ui->pushButton_8->setIcon(myicon2);
    ui->pushButton_8->setIconSize(QSize(110,70));
    QIcon myicon3(tr(":/littlebutton/Delete_guest_room.png")); //新建QIcon对象
    ui->pushButton_9->setIcon(myicon3);
    ui->pushButton_9->setIconSize(QSize(110,70));

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
    model->setTable("Hotel_room");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
    model->select(); //选取整个表的所有行
    model->setHeaderData(0,Qt::Horizontal,"房间号");
    model->setHeaderData(1,Qt::Horizontal,"所在楼层");
    model->setHeaderData(2,Qt::Horizontal,"房间类型");
    model->setHeaderData(3,Qt::Horizontal,"所住顾客");
    model->setHeaderData(4,Qt::Horizontal,"开始日期");
    model->setHeaderData(5,Qt::Horizontal,"结束日期");
    model->setHeaderData(6,Qt::Horizontal,"预定日期");
    model->setHeaderData(7,Qt::Horizontal,"预定离开日期");
    model->setHeaderData(8,Qt::Horizontal,"价格/天");
    ui->tableView->setModel(model);
    ui->tableView->show();
}

Guest_room_management::~Guest_room_management()
{
    delete ui;
}

void Guest_room_management::on_pushButton_7_clicked()
{
    Dialog_addroom d;
    d.exec();
    model->select();
}

void Guest_room_management::on_pushButton_8_clicked()
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

void Guest_room_management::on_pushButton_9_clicked()
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
