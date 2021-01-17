#include "guest_management.h"
#include "ui_guest_management.h"

Guest_management::Guest_management(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Guest_management)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    this->hide();
    this->setParent(parent);

    QIcon myicon2(tr(":/littlebutton/Modify_reservation_information.png")); //新建QIcon对象
    ui->pushButton_9->setIcon(myicon2);
    ui->pushButton_9->setIconSize(QSize(110,70));
    QIcon myicon3(tr(":/littlebutton/Cancellation_information.png")); //新建QIcon对象
    ui->pushButton_8->setIcon(myicon3);
    ui->pushButton_8->setIconSize(QSize(110,70));
    QIcon myicon4(tr(":/littlebutton/Check_in.png")); //新建QIcon对象
    ui->pushButton_13->setIcon(myicon4);
    ui->pushButton_13->setIconSize(QSize(110,70));

    QIcon myicon10(tr(":/littlebutton/Change_rooms.png")); //新建QIcon对象
    ui->pushButton_16->setIcon(myicon10);
    ui->pushButton_16->setIconSize(QSize(110,70));
    QIcon myicon9(tr(":/littlebutton/Check_in_slip.png")); //新建QIcon对象
    ui->pushButton_15->setIcon(myicon9);
    ui->pushButton_15->setIconSize(QSize(110,70));


    QIcon myicon11(tr(":/littlebutton/Check.png")); //新建QIcon对象
    ui->pushButton_18->setIcon(myicon11);
    ui->pushButton_18->setIconSize(QSize(110,70));

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    if(db.open())
    {
    qDebug()<<"connect normal";
    }
    else
    {
    qDebug()<<"connect error!";
    }
    query_model = new QSqlQueryModel;
    //创建模型

    model = new QSqlTableModel(this);
    model->setTable("Guest");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
    model->select(); //选取整个表的所有行
    QString str = "";
    model->setFilter(tr("bookstart like '%1'").arg("%"+str+"%"));
    model->setHeaderData(0,Qt::Horizontal,"顾客名字");
    model->setHeaderData(1,Qt::Horizontal,"个人ID");
    model->setHeaderData(2,Qt::Horizontal,"电话号码");
    model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
    model->setHeaderData(4,Qt::Horizontal,"VIP号码");
    model->setHeaderData(5,Qt::Horizontal,"入住房间");
    model->setHeaderData(6,Qt::Horizontal,"预定入住");
    model->setHeaderData(7,Qt::Horizontal,"预定离开");
//  model->setHeaderData(8,Qt::Horizontal,"入住时间");
//  model->setHeaderData(9,Qt::Horizontal,"离开时间");
//  model->setHeaderData(10,Qt::Horizontal,"应缴金额");
    model->removeColumn(8);
    model->removeColumn(8);
    model->removeColumn(8);
    ui->tableView->setModel(model);
    ui->tableView->show();
}

Guest_management::~Guest_management()
{
    delete ui;
}

void Guest_management::on_tabWidget_currentChanged(int index)
{
    //ui->tabWidget->setCurrentIndex(ui->tabWidget->currentIndex());
    if(index==0)
    {
    //创建模型
        model = new QSqlTableModel(this);
        model->setTable("Guest");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
        model->select(); //选取整个表的所有行
        QString str = "";
        model->setFilter(tr("bookstart like '%1'").arg("%"+str+"%"));
        model->setHeaderData(0,Qt::Horizontal,"顾客名字");
        model->setHeaderData(1,Qt::Horizontal,"个人ID");
        model->setHeaderData(2,Qt::Horizontal,"电话号码");
        model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
        model->setHeaderData(4,Qt::Horizontal,"VIP号码");
        model->setHeaderData(5,Qt::Horizontal,"入住房间");
        model->setHeaderData(6,Qt::Horizontal,"预定入住");
        model->setHeaderData(7,Qt::Horizontal,"预定离开");
    //  model->setHeaderData(8,Qt::Horizontal,"入住时间");
    //  model->setHeaderData(9,Qt::Horizontal,"离开时间");
    //  model->setHeaderData(10,Qt::Horizontal,"应缴金额");
        model->removeColumn(8);
        model->removeColumn(8);
        model->removeColumn(8);
        ui->tableView->setModel(model);
        ui->tableView->show();
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
//        model->setHeaderData(10,Qt::Horizontal,"应缴金额");
        model->removeColumn(10);
        ui->tableView_2->setModel(model);
        ui->tableView_2->show();
    }
    if(index==2)
    {
        //创建模型
        model = new QSqlTableModel(this);
        model->setTable("Guest");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
        model->select(); //选取整个表的所有行

        model->removeColumn(6);
        model->removeColumn(6);
        model->setHeaderData(0,Qt::Horizontal,"顾客名字");
        model->setHeaderData(1,Qt::Horizontal,"个人ID");
        model->setHeaderData(2,Qt::Horizontal,"电话号码");
        model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
        model->setHeaderData(4,Qt::Horizontal,"VIP号码");
        model->setHeaderData(5,Qt::Horizontal,"入住房间");
        model->setHeaderData(6,Qt::Horizontal,"入住时间");
        model->setHeaderData(7,Qt::Horizontal,"离开时间");
        model->setHeaderData(8,Qt::Horizontal,"应缴金额");
        QString str = "";
        model->setFilter(tr("startdate like '%1'").arg("%"+str+"%"));
        ui->tableView_3->setModel(model);
        ui->tableView_3->show();
    }
}

bool Guest_management::db_update(QString room_number){

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    if(db.open()){
      qDebug() << "connect normal";
    }else{
      qDebug() << "connect error!";
    }

    qDebug()<<room_number;

    QSqlQuery query(db);
    QString sql = "update Hotel_room set guest=?,start_date=?,ending_date=?,book_start_date=?,book_ending_date=? where room_number=?";
    query.prepare(sql);
    query.addBindValue("");
    query.addBindValue("");
    query.addBindValue("");
    query.addBindValue("");
    query.addBindValue("");
    query.addBindValue(room_number);
    bool flag = query.exec();
    qDebug() << "执行影响数据行" <<flag;
    return flag;
}


bool Guest_management::db_update_2(QString room_number,QString startdate,QString endingdate){

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    if(db.open()){
      qDebug() << "connect normal";
    }else{
      qDebug() << "connect error!";
    }

    qDebug()<<room_number;

    QSqlQuery query(db);
    QString sql = "update Hotel_room set start_date=?,ending_date=?,book_start_date=?,book_ending_date=? where room_number=?";
    query.prepare(sql);
    query.addBindValue(startdate);
    query.addBindValue(endingdate);
    query.addBindValue("");
    query.addBindValue("");
    query.addBindValue(room_number);
    bool flag = query.exec();
    qDebug() << "执行影响数据行" <<flag;
    return flag;
}


bool Guest_management::db_update_3(QString room_number){

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    if(db.open()){
      qDebug() << "connect normal";
    }else{
      qDebug() << "connect error!";
    }
    QSqlQuery query_2(db);
    QString sql_2 = QString("update Hotel_room set guest='%1',start_date='%2',ending_date='%3',book_start_date='%4',book_ending_date='%5' where room_number='%6'")
                                                                                                        .arg("").arg("").arg("").arg("").arg("").arg(room_number);
    bool ok = query_2.exec(sql_2);
    return ok;
}


//删除预定
void Guest_management::on_pushButton_8_clicked()
{
    int rowIndex = ui->tableView->currentIndex().row();
    //qDebug() << rowIndex;
    model->removeRow(rowIndex);
    QString str = "";
    query_model->setQuery(tr("SELECT * FROM Guest WHERE bookstart LIKE '%1' ").arg("%"+str+"%"));
    int row = ui->tableView->currentIndex().row();
    if(row<0)
        {
        QMessageBox::warning(this,tr("warning"),tr("请选择一位顾客！"),
                                         QMessageBox::Yes);
        return;
        }
    QVariant s1 = query_model->data(query_model->index(row,5));
    db_update(s1.toString());

    int ok = QMessageBox::warning(this,tr("删除预定信息!"),tr("你确定删除当前预定信息？"),
                                 QMessageBox::Yes,QMessageBox::No);

    if(ok == QMessageBox::No)
      {
        model->revertAll(); //如果不删除，则撤销
      }
    else model->submitAll(); //否则提交，在数据库中删除该行
}

//转入住
void Guest_management::on_pushButton_13_clicked()
{
    QString str = "";
    query_model->setQuery(tr("SELECT * FROM Guest WHERE bookstart LIKE '%1' ").arg("%"+str+"%"));
    int row = ui->tableView->currentIndex().row();  
    if(row<0)
        {
        QMessageBox::warning(this,tr("warning"),tr("请选择一位顾客！"),
                                         QMessageBox::Yes);
        return;
        }
    QVariant room = query_model->data(query_model->index(row,5));
    QVariant s1 = query_model->data(query_model->index(row,6));
    QVariant s2 = query_model->data(query_model->index(row,7));
    qDebug()<<room<<s1<<s2;

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    if(db.open()){
      qDebug() << "connect normal";
    }else{
      qDebug() << "connect error!";
    }

    QSqlQuery query(db);
    QString sql = "update Guest set startdate=?,endingdate=?,bookstart=?,bookending=? where bookedroom=?";
    query.prepare(sql);
    query.addBindValue(s1.toString());
    query.addBindValue(s2.toString());
    query.addBindValue("");
    query.addBindValue("");
    query.addBindValue(room.toString());
    query.exec();

    db_update_2(room.toString(),s1.toString(),s2.toString());

    QMessageBox::information(this,"转入住","入住成功",QMessageBox::Yes);

    ui->tableView->show();
}

//换房
void Guest_management::on_pushButton_16_clicked()
{
    QString str = "";
    query_model->setQuery(tr("SELECT * FROM Guest"));
    int row = ui->tableView_2->currentIndex().row();

    if(row<0)
        {
        QMessageBox::warning(this,tr("warning"),tr("请选择一位顾客！"),
                                         QMessageBox::Yes);
        return;
        }

    QVariant s1 = query_model->data(query_model->index(row,0));
    QVariant s2 = query_model->data(query_model->index(row,8));
    QVariant s3 = query_model->data(query_model->index(row,9));
    QVariant s4 = query_model->data(query_model->index(row,6));
    QVariant s5 = query_model->data(query_model->index(row,7));
    QVariant s6 = query_model->data(query_model->index(row,5));
    change_rooms d;
    qDebug()<<s1;
    d.string_1(s1.toString(),s2.toString(),s3.toString(),s4.toString(),s5.toString(),s6.toString());
    d.exec();

    model->select();
}
//入住单
void Guest_management::on_pushButton_15_clicked()
{
    query_model->setQuery(tr("SELECT * FROM Guest"));
    int row = ui->tableView_2->currentIndex().row();

    if(row<0)
        {
        QMessageBox::warning(this,tr("warning"),tr("请选择一位顾客！"),
                                         QMessageBox::Yes);
        return;
        }

    QVariant s1 = query_model->data(query_model->index(row,5));
    QVariant s2 = query_model->data(query_model->index(row,8));
    QVariant s3 = query_model->data(query_model->index(row,9));
    QVariant s4 = query_model->data(query_model->index(row,0));
    QVariant s5 = query_model->data(query_model->index(row,2));
    QVariant s6 = query_model->data(query_model->index(row,4));
    QVariant s7 = query_model->data(query_model->index(row,10));
    Entry e;
    e.data_1(s1.toString(),s2.toString(),s3.toString(),s4.toString(),s5.toString(),s6.toString(),s7.toDouble());
    e.Binddata();
    e.exec();

    model->select();
}

//结账
void Guest_management::on_pushButton_18_clicked()
{
    QString str = "";
    query_model->setQuery(tr("SELECT * FROM Guest WHERE startdate like '%1'").arg("%"+str+"%"));
    int row = ui->tableView_3->currentIndex().row();

    if(row<0)
        {
        QMessageBox::warning(this,tr("warning"),tr("请选择一位顾客！"),
                                         QMessageBox::Yes);
        return;
        }
    QVariant s1 = query_model->data(query_model->index(row,5));
    QVariant s2 = query_model->data(query_model->index(row,8));
    QVariant s3 = query_model->data(query_model->index(row,9));
    QVariant s4 = query_model->data(query_model->index(row,0));
    QVariant s5 = query_model->data(query_model->index(row,2));
    QVariant s6 = query_model->data(query_model->index(row,4));
    QVariant s7 = query_model->data(query_model->index(row,10));


    int rowIndex = ui->tableView_3->currentIndex().row();
    query_model->setQuery(tr("SELECT * FROM Guest WHERE startdate LIKE '%1' ").arg("%"+str+"%"));
    if(row<0)
        {
        QMessageBox::warning(this,tr("warning"),tr("请选择一位顾客！"),
                                         QMessageBox::Yes);
        return;
        }
    qDebug()<<rowIndex;
    model->removeRow(rowIndex);
    db_update(s1.toString());
    db_update_3(s1.toString());
    int ok = QMessageBox::information(this,tr("确认结账!"),tr("该顾客确认结账吗？"),
                                         QMessageBox::Yes,QMessageBox::No);
    if(ok==QMessageBox::Yes)
    model->submitAll();
    else
    model->revert();
    model->select();

    Settle_accounts d;
    d.data_1(s1.toString(),s2.toString(),s3.toString(),s4.toString(),s5.toString(),s6.toString(),s7.toDouble());
    d.Binddata();
    d.exec();


}


