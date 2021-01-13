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

    QIcon myicon1(tr(":/littlebutton/Room_reservation.png")); //新建QIcon对象
    ui->pushButton_7->setIcon(myicon1);
    ui->pushButton_7->setIconSize(QSize(110,70));
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
    model->setHeaderData(0,Qt::Horizontal,"顾客名字");
    model->setHeaderData(1,Qt::Horizontal,"个人ID");
    model->setHeaderData(2,Qt::Horizontal,"电话号码");
    model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
    model->setHeaderData(4,Qt::Horizontal,"VIP号码");
    model->setHeaderData(5,Qt::Horizontal,"入住房间");
    model->setHeaderData(6,Qt::Horizontal,"预定入住");
    model->setHeaderData(7,Qt::Horizontal,"预定离开");
//    model->setHeaderData(8,Qt::Horizontal,"入住时间");
//    model->setHeaderData(9,Qt::Horizontal,"离开时间");
//    model->setHeaderData(10,Qt::Horizontal,"应缴金额");
    model->removeColumn(8);
     model->removeColumn(8);
      model->removeColumn(8);
      QString str = "";
      model->setFilter(tr("startdate like '%1'").arg("%"+str+"%"));
    ui->tableView->setModel(model);
    ui->tableView->show();
}

Guest_management::~Guest_management()
{
    delete ui;
}

void Guest_management::on_pushButton_18_clicked()
{
    Settle_accounts d;
    d.exec();
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
        model->setHeaderData(0,Qt::Horizontal,"顾客名字");
        model->setHeaderData(1,Qt::Horizontal,"个人ID");
        model->setHeaderData(2,Qt::Horizontal,"电话号码");
        model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
        model->setHeaderData(4,Qt::Horizontal,"VIP号码");
        model->setHeaderData(5,Qt::Horizontal,"入住房间");
        model->setHeaderData(6,Qt::Horizontal,"预定入住");
        model->setHeaderData(7,Qt::Horizontal,"预定离开");
//        model->setHeaderData(8,Qt::Horizontal,"入住时间");
//        model->setHeaderData(9,Qt::Horizontal,"离开时间");
//        model->setHeaderData(10,Qt::Horizontal,"应缴金额");
         model->removeColumn(8);
          model->removeColumn(8);
           model->removeColumn(8);
           QString str = "";
           model->setFilter(tr("startdate like '%1'").arg("%"+str+"%"));
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

        ui->tableView_3->setModel(model);
        ui->tableView_3->show();
    }
}

void Guest_management::on_pushButton_16_clicked()
{

}
