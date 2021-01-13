#include "basic_info.h"
#include "ui_basic_info.h"

Basic_info::Basic_info(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Basic_info)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    this->hide();
    this->setParent(parent);
    QIcon myicon1(tr(":/littlebutton/Add_room_type.png")); //新建QIcon对象
    ui->pushButton->setIcon(myicon1);
    ui->pushButton->setIconSize(QSize(110,70));
    QIcon myicon2(tr(":/littlebutton/Change_Room_type_information.png")); //新建QIcon对象
    ui->pushButton_2->setIcon(myicon2);
    ui->pushButton_2->setIconSize(QSize(110,70));
    QIcon myicon3(tr(":/littlebutton/Delet_ room_type.png")); //新建QIcon对象
    ui->pushButton_3->setIcon(myicon3);
    ui->pushButton_3->setIconSize(QSize(110,70));
    QIcon myicon4(tr(":/littlebutton/Adding_floor_information.png")); //新建QIcon对象
    ui->pushButton_4->setIcon(myicon4);
    ui->pushButton_4->setIconSize(QSize(110,70));
    QIcon myicon5(tr(":/littlebutton/Modifying_floor_information.png")); //新建QIcon对象
    ui->pushButton_5->setIcon(myicon5);
    ui->pushButton_5->setIconSize(QSize(110,70));
    QIcon myicon6(tr(":/littlebutton/Delete_the_floor_information.png")); //新建QIcon对象
    ui->pushButton_6->setIcon(myicon6);
    ui->pushButton_6->setIconSize(QSize(110,70));
    QIcon myicon7(tr(":/littlebutton/Increase_membership.png")); //新建QIcon对象
    ui->pushButton_7->setIcon(myicon7);
    ui->pushButton_7->setIconSize(QSize(110,70));
    QIcon myicon8(tr(":/littlebutton/Modify_membership_information.png")); //新建QIcon对象
    ui->pushButton_8->setIcon(myicon8);
    ui->pushButton_8->setIconSize(QSize(110,70));
    QIcon myicon9(tr(":/littlebutton/Delete_a_member.png")); //新建QIcon对象
    ui->pushButton_9->setIcon(myicon9);
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

    query_model = new QSqlQueryModel;
    //创建模型
    model = new QSqlTableModel(this);
    model->setTable("Room_type");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
    model->select(); //选取整个表的所有行
    model->setHeaderData(0,Qt::Horizontal,"房间类型");
    model->setHeaderData(1,Qt::Horizontal,"房间价格");
    model->setHeaderData(2,Qt::Horizontal,"VIP价格");
    ui->tableView->setModel(model);
    ui->tableView->show(); 
}


Basic_info::~Basic_info()
{
    delete ui;
}

bool db_delete(QString id){

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    if(db.open()){
      qDebug() << "connect normal";
    }else{
      qDebug() << "connect error!";
    }
    QSqlQuery query(db);
    QString sql = "update Guest set isvip=? where id=?";
    query.prepare(sql);
    query.addBindValue("no");
    query.addBindValue(id);
    bool flag = query.exec();
    qDebug() << "执行删除影响数据行" <<flag;
    return flag;
}

void Basic_info::on_tabWidget_tabBarClicked(int index)
{
    //ui->tabWidget->setCurrentIndex(ui->tabWidget->currentIndex());
    if(index==0)
    {
    //创建模型
    model = new QSqlTableModel(this);
    model->setTable("Room_type");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
    model->select(); //选取整个表的所有行
    model->setHeaderData(0,Qt::Horizontal,"房间类型");
    model->setHeaderData(1,Qt::Horizontal,"房间价格");
    model->setHeaderData(2,Qt::Horizontal,"VIP价格");
    ui->tableView->setModel(model);
    ui->tableView->show();
    }
    if(index==1)
    {
    //创建模型
    model = new QSqlTableModel(this);
    model->setTable("Floor");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
    model->select(); //选取整个表的所有行
    model->setHeaderData(0,Qt::Horizontal,"楼层");
    model->setHeaderData(1,Qt::Horizontal,"房间数");
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

    QString str = "yes";
    model->setFilter(tr("isvip like '%1'").arg("%"+str+"%"));
    model->select();
    model->removeColumn(5);
    model->removeColumn(5);
    model->removeColumn(5);
    model->removeColumn(5);
    model->removeColumn(5);
    model->removeColumn(5); //不显示第6列,如果这时添加记录，则该属性的值添加不上
    model->setHeaderData(0,Qt::Horizontal,"会员名字");
    model->setHeaderData(1,Qt::Horizontal,"个人ID");
    model->setHeaderData(2,Qt::Horizontal,"电话号码");
    model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
    model->setHeaderData(4,Qt::Horizontal,"VIP号码");

    ui->tableView_3->setModel(model);
    ui->tableView_3->show();
    }

}
//添加
void Basic_info::on_pushButton_clicked()
{
    int rowindex = model->rowCount();
    model->insertRow(rowindex);
}

//修改
void Basic_info::on_pushButton_2_clicked()
{
    model->database().transaction();
    if(model->submitAll()){
        model->database().commit(); //提交
    }else{
        model->database().rollback();// 撤回
        QMessageBox::warning(this,"数据库错误",tr("数据库错误: %1").arg(model->lastError().text()));
    }
    model->select();
}

//删除
void Basic_info::on_pushButton_3_clicked()
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
    model->select();
}

//添加
void Basic_info::on_pushButton_4_clicked()
{
    int rowindex = model->rowCount();
    model->insertRow(rowindex);
}
//修改
void Basic_info::on_pushButton_5_clicked()
{
    model->database().transaction();
    if(model->submitAll()){
        model->database().commit(); //提交
    }
    else{
        model->database().rollback();// 撤回
        QMessageBox::warning(this,"数据库错误",tr("数据库错误: %1").arg(model->lastError().text()));
    }
    model->select();
}
//删除
void Basic_info::on_pushButton_6_clicked()
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
    model->select();
}

void Basic_info::on_pushButton_7_clicked()
{
    Dialog_addvip d;
    d.exec();
    model->select();
}

void Basic_info::on_pushButton_8_clicked()
{
    model->database().transaction();
    if(model->submitAll()){
        model->database().commit(); //提交
    }
    else{
        model->database().rollback();// 撤回
        QMessageBox::warning(this,"数据库错误",tr("数据库错误: %1").arg(model->lastError().text()));
    }
    model->select();
}

void Basic_info::on_pushButton_9_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    if(db.open()){
      qDebug() << "connect normal";
    }else{
      qDebug() << "connect error!";
    }
    QString sql = "select id,isvip from Guest";
    query_model->setQuery(sql);
    int row = ui->tableView_3->currentIndex().row();
    QVariant id = query_model->data(query_model->index(row,0));
    qDebug()<<row<<id;
    QSqlQuery query(db);
    QString sql_2 = "update Guest set isvip=?,vipnumber =? where id=?";
    int ok = QMessageBox::warning(this,tr("删除该会员"),tr("你确定删除该会员吗？"),
                                 QMessageBox::Yes,QMessageBox::No);

    if(ok == QMessageBox::Yes)
      {
        query.prepare(sql_2);
        query.addBindValue("no");
        query.addBindValue("");
        query.addBindValue(id);
        query.exec();
      }
    model->select();
}

