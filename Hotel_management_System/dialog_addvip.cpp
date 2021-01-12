#include "dialog_addvip.h"
#include "ui_dialog_addvip.h"

Dialog_addvip::Dialog_addvip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_addvip)
{
    ui->setupUi(this);


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

      QString str = "no";
    model->setFilter(tr("isvip like '%1'").arg("%"+str+"%"));
    model->select();
    model->removeColumn(5);
    model->removeColumn(5);
    model->removeColumn(5);
    model->removeColumn(5); //不显示第二列,如果这时添加记录，则该属性的值添加不上
    model->setHeaderData(0,Qt::Horizontal,"非会员名字");
    model->setHeaderData(1,Qt::Horizontal,"个人ID");
    model->setHeaderData(2,Qt::Horizontal,"电话号码");
    model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
    model->setHeaderData(4,Qt::Horizontal,"VIP号码");
    ui->tableView->setModel(model);
    ui->tableView->show();
}

Dialog_addvip::~Dialog_addvip()
{
    delete ui;
}

void Dialog_addvip::on_pushButton_2_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hotel.db");
    db.open();
    QSqlQuery query(db);


//    int curRow = ui->tableView->currentIndex().row();
//    QSqlRecord record = model->record(curRow);
//    QString s1 = record.value("id").toString();
//    ui->lineEdit->setText(s1);

    QString s1 = ui->lineEdit->text();//id
    QString s2 = ui->lineEdit_2->text();

    QString sql = "update Guest set isvip =:isvip,vipnumber=:vipnumber where id=:id";
    query.prepare(sql);//sql语句预处理
    query.bindValue(":isvip","yes");
    query.bindValue(":vipnumber",s2);
    query.bindValue(":id",s1);


//    QString sql = tr("update Guest set isvip =%1,vipnumber=%2 where id=%3")
//                                        .arg("yes").arg(s2),arg(s1);
    if(query.exec())
        qDebug() << "添加成功";
    else
        qDebug() << "添加失败"<<s1<<s2;
    model->select();

}

void Dialog_addvip::on_pushButton_4_clicked()
{
    this->reject();
}

void Dialog_addvip::on_pushButton_5_clicked()
{
    model->database().transaction();
    if(model->submitAll()){
        model->database().commit(); //提交
    }
    else{
        model->database().rollback();// 撤回
        QMessageBox::warning(this,"数据库错误",tr("数据库错误: %1").arg(model->lastError().text()));
    }
    this->accept();
}

void Dialog_addvip::on_pushButton_clicked()
{
    //创建模型
    model = new QSqlTableModel(this);
    model->setTable("Guest");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
    model->select(); //选取整个表的所有行

    QString str = ui->lineEdit_3->text();
    model->setFilter(tr("name like '%1'").arg("%"+str+"%"));
    model->select();
    model->removeColumn(5);
    model->removeColumn(5);
    model->removeColumn(5);
    model->removeColumn(5); //不显示第二列,如果这时添加记录，则该属性的值添加不上
    model->setHeaderData(0,Qt::Horizontal,"非会员名字");
    model->setHeaderData(1,Qt::Horizontal,"个人ID");
    model->setHeaderData(2,Qt::Horizontal,"电话号码");
    model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
    model->setHeaderData(4,Qt::Horizontal,"VIP号码");
    ui->tableView->setModel(model);
    ui->tableView->show();
}
