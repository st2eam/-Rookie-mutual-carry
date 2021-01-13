#include "dialog_addroom.h"
#include "ui_dialog_addroom.h"
#include <QtDebug>

Dialog_addroom::Dialog_addroom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_addroom)
{
    ui->setupUi(this);
    query_model = new QSqlQueryModel;
    combox_Binddata();
}

Dialog_addroom::~Dialog_addroom()
{
    delete ui;
}

bool db_insert(QString room_number,QString floor,QString type,QString price){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    if(db.open()){
      qDebug() << "connect normal";
    }else{
      qDebug() << "connect error！";
    }

    QSqlQuery query(db);
    QString sql = "insert into Hotel_room values(?,?,?,?,?,?,?,?,?)";
    query.prepare(sql);//sql语句预处理
    query.addBindValue(room_number);
    query.addBindValue(floor);
    query.addBindValue(type);
    query.addBindValue("");
    query.addBindValue("");
    query.addBindValue("");
    query.addBindValue("");
    query.addBindValue("");
    query.addBindValue(price);
    //QString sql = tr("insert into Guest values(%1,%2,%3,%4,%5,%6)").arg(account).arg(id).arg(telephone).arg(room).arg(start).arg(end);
    bool flag=query.exec();
    return flag;
}

void Dialog_addroom::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    if(db.open()){
      qDebug() << "connect normal";
    }else{
      qDebug() << "connect error!";
    }

    QString sql = "select room_type,price from Room_type";
    query_model->setQuery(sql);
    int index = ui->comboBox->currentIndex();
    QString floor = ui->lineEdit->text();
    QString room_number = ui->lineEdit_2->text();
    QString type = (ui->comboBox->itemText(index));
    QString price = (query_model->data(query_model->index(index,1))).toString();
    qDebug()<<price;
    db_insert(room_number,floor,type,price);

    QSqlQuery query_2(db);
    QString sql_2 = "update Floor set rooms =rooms+1 where floor=?";
    query_2.prepare(sql_2);
    query_2.addBindValue(floor);
    query_2.exec();
    this->accept();
}

void Dialog_addroom::on_pushButton_2_clicked()
{
    this->reject();
}

void Dialog_addroom::combox_Binddata()
{
    QString sql = "select room_type,price from Room_type";
    query_model->setQuery(sql);
    for (int i = 0; i < query_model->rowCount(); i++) {
        QVariant text = query_model->data(query_model->index(i,0));
        ui->comboBox->addItem(text.toString());
    }
}
