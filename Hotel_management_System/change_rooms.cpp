#include "change_rooms.h"
#include "ui_change_rooms.h"

change_rooms::change_rooms(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_rooms)
{
    ui->setupUi(this);
    query_model = new QSqlQueryModel;
    combox_Binddata();
}

change_rooms::~change_rooms()
{
    delete ui;
}

void change_rooms::combox_Binddata()
{
    query_model->setQuery("SELECT * FROM Hotel_room WHERE guest = ''");
    for (int i = 0; i < query_model->rowCount(); i++) {
        QVariant text = query_model->data(query_model->index(i,0));
        ui->comboBox->addItem(text.toString());
    }
}

void change_rooms::string_1(QString _guest,QString _start_date,QString _ending_date,QString _bookstart,QString _bookend,QString s1)
{
    guest = _guest;
    start_date = _start_date;
    ending_date = _ending_date;
    bookstart = _bookstart;
    bookend = _bookend;
    ui->label_2->setText(s1);

}
void db_update(QString guest,QString start_date,QString ending_date,QString bookstart,QString bookend,QString room_number_1,QString room_number_2){

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    if(db.open()){
      qDebug() << "connect normal";
    }else{
      qDebug() << "connect error!";
    }
    qDebug()<<guest<<start_date<<ending_date<<bookstart<<bookend<<room_number_1<<room_number_2;
    //新房间添加
    QSqlQuery query(db);
    QString sql = QString("update Hotel_room set guest='%1',start_date='%2',ending_date='%3'"
                  ",book_start_date='%4',book_ending_date='%5' where room_number='%6'").arg(guest)
            .arg(start_date).arg(ending_date).arg(bookstart).arg(bookend).arg(room_number_2);
    bool a =  query.exec(sql);
    qDebug()  <<  a;
    qDebug() << query.lastError();
    //旧房间删除
    QSqlQuery query_2(db);
    QString sql_2 = QString("update Hotel_room set guest='%1',start_date='%2',ending_date='%3'"
                  ",book_start_date='%4',book_ending_date='%5' where room_number='%6'").arg("")
            .arg("").arg("").arg("").arg("").arg(room_number_1);
    bool b = query_2.exec(sql_2);
    qDebug()  <<  b;
    qDebug() << query.lastError();
    db.commit();
}

void change_rooms::on_pushButton_clicked()
{
    int index = ui->comboBox->currentIndex();
    QString room_1 = ui->label_2->text();
    QString room_2 = ui->comboBox->itemText(index);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    if(db.open()){
      qDebug() << "connect normal";
    }else{
      qDebug() << "connect error!";
    }
    QSqlQuery query(db);
    QString sql = "update Guest set bookedroom=? where bookedroom=?";
    query.prepare(sql);
    query.addBindValue(room_2);
    query.addBindValue(room_1);
    query.exec();

    db_update(guest,start_date,ending_date,bookstart,bookend,room_1,room_2);
    qDebug() << "ok!";
    this->accept();
}

void change_rooms::on_pushButton_2_clicked()
{
    this->reject();
}
