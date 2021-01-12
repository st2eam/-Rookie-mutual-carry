#include "dialog_add.h"
#include "ui_dialog_add.h"
#include <QtDebug>
#include "system_management.h"

Dialog_add::Dialog_add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_add)
{
    ui->setupUi(this);

}

Dialog_add::~Dialog_add()
{
    delete ui;
}

bool db_insert(QString account,QString id,QString telephone,QString isvip,QString vipnumber,QString room,QString start,QString end,QString cost){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    if(db.open()){
      qDebug() << "数据库已经打开！！";
    }else{
      qDebug() << "数据库文件出错！！";
    }

    QSqlQuery query(db);
    QString sql = "insert into Guest values(?,?,?,?,?,?,?,?,?)";
    query.prepare(sql);//sql语句预处理
    query.addBindValue(account);
    query.addBindValue(id);
    query.addBindValue(telephone);
    query.addBindValue(isvip);
    query.addBindValue(vipnumber);
    query.addBindValue(room);
    query.addBindValue(start);
    query.addBindValue(end);
    query.addBindValue(cost);
    //QString sql = tr("insert into Guest values(%1,%2,%3,%4,%5,%6)").arg(account).arg(id).arg(telephone).arg(room).arg(start).arg(end);
    bool flag=query.exec();
    return flag;
}
void Dialog_add::on_pushButton_clicked()
{
    QString account = ui->lineEdit->text();
    QString id = ui->lineEdit_2->text();
    QString telephone = ui->lineEdit_3->text();
    QString room = ui->lineEdit_4->text();
    QString start = ui->lineEdit_5->text();
    QString end = ui->lineEdit_6->text();
    db_insert(account,id,telephone,"no","",room,start,end,"");
    this->accept();
}

void Dialog_add::on_pushButton_2_clicked()
{
    this->reject();
}
