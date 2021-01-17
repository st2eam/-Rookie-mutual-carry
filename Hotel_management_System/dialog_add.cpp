#include "dialog_add.h"
#include "ui_dialog_add.h"
#include <QtDebug>
#include "system_management.h"

Dialog_add::Dialog_add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_add)
{
    ui->setupUi(this);
    query_model = new QSqlQueryModel;
    ui->dateEdit->setDateTime(QDateTime::currentDateTime());
    ui->dateEdit_2->setDateTime(QDateTime::currentDateTime().addDays(1));
    combox_Binddata();
}

Dialog_add::~Dialog_add()
{
    delete ui;
}

bool db_insert(QString account,QString id,QString telephone,QString isvip,QString vipnumber,QString room,QString bookstart,QString bookend,QString start,QString end,double cost){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    if(db.open()){
      qDebug() << "connect normal";
    }else{
      qDebug() << "connect error!";
    }
    QSqlQuery query(db);
    QString sql = "insert into Guest values(?,?,?,?,?,?,?,?,?,?,?)";
    query.prepare(sql);//sql语句预处理
    query.addBindValue(account);
    query.addBindValue(id);
    query.addBindValue(telephone);
    query.addBindValue(isvip);
    query.addBindValue(vipnumber);
    query.addBindValue(room);
    query.addBindValue(bookstart);
    query.addBindValue(bookend);
    query.addBindValue(start);
    query.addBindValue(end);
    query.addBindValue(cost);
    //QString sql = tr("insert into Guest values(%1,%2,%3,%4,%5,%6)").arg(account).arg(id).arg(telephone).arg(room).arg(start).arg(end);
    bool flag=query.exec();
    return flag;
}

bool db_update(QString guest,QString start_date,QString ending_date,QString bookstart,QString bookend,QString room_number){

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    if(db.open()){
      qDebug() << "connect normal";
    }else{
      qDebug() << "connect error!";
    }
    QSqlQuery query(db);
    QString sql = "update Hotel_room set guest =?,start_date=?,ending_date=?,book_start_date=?,book_ending_date=? where room_number=?";
    query.prepare(sql);
    query.addBindValue(guest);
    query.addBindValue(start_date);
    query.addBindValue(ending_date);
    query.addBindValue(bookstart);
    query.addBindValue(bookend);
    query.addBindValue(room_number);
    bool flag = query.exec();
    qDebug() << "执行添加影响数据行" <<flag;
    return flag;
}
void Dialog_add::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    db.open();
    query_model->setQuery("SELECT * FROM Hotel_room WHERE guest = ''");
    QDate time = ui->dateEdit->date();
    QDate time_2 = ui->dateEdit_2->date();
    qint64 Time_difference = time.daysTo(time_2);

    int index = ui->comboBox->currentIndex();
    QString account = ui->lineEdit->text();
    QString id = ui->lineEdit_2->text();
    QString telephone = ui->lineEdit_3->text();
    QString room = ui->comboBox->itemText(index);
    QString start = ui->dateEdit->text();
    QString end = ui->dateEdit_2->text();
    double cost = (query_model->data(query_model->index(index,8))).toDouble();

    double price = Time_difference*cost;

    QSqlQuery query_2(db);
    QString sql_2 = QString("update Income set income=income+'%1' where enddate='%2'").arg(price).arg(end);
    query_2.exec(sql_2);

    if(ui->checkBox->isChecked())
    {
    db_insert(account,id,telephone,"no","",room,start,end,"","",price);
        db_update(account,"","",start,end,room);
    }
    else
    {
    db_insert(account,id,telephone,"no","",room,"","",start,end,price);
        db_update(account,start,end,"","",room);
    }

    this->accept();
}

void Dialog_add::on_pushButton_2_clicked()
{
    this->reject();
}

void Dialog_add::combox_Binddata()
{
    query_model->setQuery("SELECT * FROM Hotel_room WHERE guest = ''");
    for (int i = 0; i < query_model->rowCount(); i++) {
        QVariant text = query_model->data(query_model->index(i,0));
        ui->comboBox->addItem(text.toString());
    }
}
