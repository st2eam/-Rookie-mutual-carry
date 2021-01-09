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


    QIcon myicon5(tr(":/littlebutton/Registration.png")); //新建QIcon对象
    ui->pushButton_10->setIcon(myicon5);
    ui->pushButton_10->setIconSize(QSize(110,70));
    QIcon myicon6(tr(":/littlebutton/Check_in_slip.png")); //新建QIcon对象
    ui->pushButton_12->setIcon(myicon6);
    ui->pushButton_12->setIconSize(QSize(110,70));


    QIcon myicon7(tr(":/littlebutton/Registration.png")); //新建QIcon对象
    ui->pushButton_11->setIcon(myicon7);
    ui->pushButton_11->setIconSize(QSize(110,70));
    QIcon myicon8(tr(":/littlebutton/Check_in_slip.png")); //新建QIcon对象
    ui->pushButton_14->setIcon(myicon8);
    ui->pushButton_14->setIconSize(QSize(110,70));


    QIcon myicon10(tr(":/littlebutton/Change_rooms.png")); //新建QIcon对象
    ui->pushButton_16->setIcon(myicon10);
    ui->pushButton_16->setIconSize(QSize(110,70));
    QIcon myicon9(tr(":/littlebutton/Check_in_slip.png")); //新建QIcon对象
    ui->pushButton_15->setIcon(myicon9);
    ui->pushButton_15->setIconSize(QSize(110,70));


    QIcon myicon11(tr(":/littlebutton/Check.png")); //新建QIcon对象
    ui->pushButton_18->setIcon(myicon11);
    ui->pushButton_18->setIconSize(QSize(110,70));
    QIcon myicon12(tr(":/littlebutton/Print.png")); //新建QIcon对象
    ui->pushButton_17->setIcon(myicon12);
    ui->pushButton_17->setIconSize(QSize(110,70));

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
}

Guest_management::~Guest_management()
{
    delete ui;
}
