#include "hotel_management_system.h"
#include "ui_hotel_management_system.h"

Hotel_management_System::Hotel_management_System(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Hotel_management_System)
{
    ui->setupUi(this);
    QIcon myicon1(tr(":/button/button/1-2.png")); //新建QIcon对象
    ui->pushButton->setIcon(myicon1);
    ui->pushButton->setIconSize(QSize(255,63));
    QIcon myicon2(tr(":/button/button/2-2.png")); //新建QIcon对象
    ui->pushButton_2->setIcon(myicon2);
    ui->pushButton_2->setIconSize(QSize(255,63));
    QIcon myicon3(tr(":/button/button/3-2.png")); //新建QIcon对象
    ui->pushButton_3->setIcon(myicon3);
    ui->pushButton_3->setIconSize(QSize(255,63));
    QIcon myicon4(tr(":/button/button/4-2.png")); //新建QIcon对象
    ui->pushButton_4->setIcon(myicon4);
    ui->pushButton_4->setIconSize(QSize(255,63));
    QIcon myicon5(tr(":/button/button/5-2.png")); //新建QIcon对象
    ui->pushButton_5->setIcon(myicon5);
    ui->pushButton_5->setIconSize(QSize(255,63));
    QIcon myicon6(tr(":/button/button/6-2.png")); //新建QIcon对象
    ui->pushButton_6->setIcon(myicon6);
    ui->pushButton_6->setIconSize(QSize(255,63));

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

Hotel_management_System::~Hotel_management_System()
{
    delete ui;
}

void Hotel_management_System::on_pushButton_clicked()
{
    QIcon myicon1(tr(":/button/button/1-1.png")); //新建QIcon对象
    ui->pushButton->setIcon(myicon1);
    ui->pushButton->setIconSize(QSize(255,63));
    QIcon myicon2(tr(":/button/button/2-2.png")); //新建QIcon对象
    ui->pushButton_2->setIcon(myicon2);
    ui->pushButton_2->setIconSize(QSize(255,63));
    QIcon myicon3(tr(":/button/button/3-2.png")); //新建QIcon对象
    ui->pushButton_3->setIcon(myicon3);
    ui->pushButton_3->setIconSize(QSize(255,63));
    QIcon myicon4(tr(":/button/button/4-2.png")); //新建QIcon对象
    ui->pushButton_4->setIcon(myicon4);
    ui->pushButton_4->setIconSize(QSize(255,63));
    QIcon myicon5(tr(":/button/button/5-2.png")); //新建QIcon对象
    ui->pushButton_5->setIcon(myicon5);
    ui->pushButton_5->setIconSize(QSize(255,63));
    QIcon myicon6(tr(":/button/button/6-2.png")); //新建QIcon对象
    ui->pushButton_6->setIcon(myicon6);
    ui->pushButton_6->setIconSize(QSize(255,63));

    Basic_info *Basic_info_window;
    Basic_info_window = new Basic_info(this);
    Basic_info_window->show();
    Basic_info_window->move(298,32);


}

void Hotel_management_System::on_pushButton_2_clicked()
{
    QIcon myicon1(tr(":/button/button/1-2.png")); //新建QIcon对象
    ui->pushButton->setIcon(myicon1);
    ui->pushButton->setIconSize(QSize(255,63));
    QIcon myicon2(tr(":/button/button/2-1.png")); //新建QIcon对象
    ui->pushButton_2->setIcon(myicon2);
    ui->pushButton_2->setIconSize(QSize(255,63));
    QIcon myicon3(tr(":/button/button/3-2.png")); //新建QIcon对象
    ui->pushButton_3->setIcon(myicon3);
    ui->pushButton_3->setIconSize(QSize(255,63));
    QIcon myicon4(tr(":/button/button/4-2.png")); //新建QIcon对象
    ui->pushButton_4->setIcon(myicon4);
    ui->pushButton_4->setIconSize(QSize(255,63));
    QIcon myicon5(tr(":/button/button/5-2.png")); //新建QIcon对象
    ui->pushButton_5->setIcon(myicon5);
    ui->pushButton_5->setIconSize(QSize(255,63));
    QIcon myicon6(tr(":/button/button/6-2.png")); //新建QIcon对象
    ui->pushButton_6->setIcon(myicon6);
    ui->pushButton_6->setIconSize(QSize(255,63));

    System_management *System_management_window;
    System_management_window = new System_management(this);
    System_management_window->show();
    System_management_window->move(298,32);

}

void Hotel_management_System::on_pushButton_3_clicked()
{
    QIcon myicon1(tr(":/button/button/1-2.png")); //新建QIcon对象
    ui->pushButton->setIcon(myicon1);
    ui->pushButton->setIconSize(QSize(255,63));
    QIcon myicon2(tr(":/button/button/2-2.png")); //新建QIcon对象
    ui->pushButton_2->setIcon(myicon2);
    ui->pushButton_2->setIconSize(QSize(255,63));
    QIcon myicon3(tr(":/button/button/3-1.png")); //新建QIcon对象
    ui->pushButton_3->setIcon(myicon3);
    ui->pushButton_3->setIconSize(QSize(255,63));
    QIcon myicon4(tr(":/button/button/4-2.png")); //新建QIcon对象
    ui->pushButton_4->setIcon(myicon4);
    ui->pushButton_4->setIconSize(QSize(255,63));
    QIcon myicon5(tr(":/button/button/5-2.png")); //新建QIcon对象
    ui->pushButton_5->setIcon(myicon5);
    ui->pushButton_5->setIconSize(QSize(255,63));
    QIcon myicon6(tr(":/button/button/6-2.png")); //新建QIcon对象
    ui->pushButton_6->setIcon(myicon6);
    ui->pushButton_6->setIconSize(QSize(255,63));

    Guest_room_management *Guest_room_management_window;
    Guest_room_management_window = new Guest_room_management(this);
    Guest_room_management_window->show();
    Guest_room_management_window->move(298,32);
}


void Hotel_management_System::on_pushButton_4_clicked()
{
    QIcon myicon1(tr(":/button/button/1-2.png")); //新建QIcon对象
    ui->pushButton->setIcon(myicon1);
    ui->pushButton->setIconSize(QSize(255,63));
    QIcon myicon2(tr(":/button/button/2-2.png")); //新建QIcon对象
    ui->pushButton_2->setIcon(myicon2);
    ui->pushButton_2->setIconSize(QSize(255,63));
    QIcon myicon3(tr(":/button/button/3-2.png")); //新建QIcon对象
    ui->pushButton_3->setIcon(myicon3);
    ui->pushButton_3->setIconSize(QSize(255,63));
    QIcon myicon4(tr(":/button/button/4-1.png")); //新建QIcon对象
    ui->pushButton_4->setIcon(myicon4);
    ui->pushButton_4->setIconSize(QSize(255,63));
    QIcon myicon5(tr(":/button/button/5-2.png")); //新建QIcon对象
    ui->pushButton_5->setIcon(myicon5);
    ui->pushButton_5->setIconSize(QSize(255,63));
    QIcon myicon6(tr(":/button/button/6-2.png")); //新建QIcon对象
    ui->pushButton_6->setIcon(myicon6);
    ui->pushButton_6->setIconSize(QSize(255,63));

    Guest_management *Guest_management_window;
    Guest_management_window = new Guest_management(this);
    Guest_management_window->show();
    Guest_management_window->move(298,32);
}

void Hotel_management_System::on_pushButton_5_clicked()
{
    QIcon myicon1(tr(":/button/button/1-2.png")); //新建QIcon对象
    ui->pushButton->setIcon(myicon1);
    ui->pushButton->setIconSize(QSize(255,63));
    QIcon myicon2(tr(":/button/button/2-2.png")); //新建QIcon对象
    ui->pushButton_2->setIcon(myicon2);
    ui->pushButton_2->setIconSize(QSize(255,63));
    QIcon myicon3(tr(":/button/button/3-2.png")); //新建QIcon对象
    ui->pushButton_3->setIcon(myicon3);
    ui->pushButton_3->setIconSize(QSize(255,63));
    QIcon myicon4(tr(":/button/button/4-2.png")); //新建QIcon对象
    ui->pushButton_4->setIcon(myicon4);
    ui->pushButton_4->setIconSize(QSize(255,63));
    QIcon myicon5(tr(":/button/button/5-1.png")); //新建QIcon对象
    ui->pushButton_5->setIcon(myicon5);
    ui->pushButton_5->setIconSize(QSize(255,63));
    QIcon myicon6(tr(":/button/button/6-2.png")); //新建QIcon对象
    ui->pushButton_6->setIcon(myicon6);
    ui->pushButton_6->setIconSize(QSize(255,63));

    Consumption_management *Consumption_management_window;
    Consumption_management_window = new Consumption_management(this);
    Consumption_management_window->show();
    Consumption_management_window->move(298,32);
}

void Hotel_management_System::on_pushButton_6_clicked()
{
    QIcon myicon1(tr(":/button/button/1-2.png")); //新建QIcon对象
    ui->pushButton->setIcon(myicon1);
    ui->pushButton->setIconSize(QSize(255,63));
    QIcon myicon2(tr(":/button/button/2-2.png")); //新建QIcon对象
    ui->pushButton_2->setIcon(myicon2);
    ui->pushButton_2->setIconSize(QSize(255,63));
    QIcon myicon3(tr(":/button/button/3-2.png")); //新建QIcon对象
    ui->pushButton_3->setIcon(myicon3);
    ui->pushButton_3->setIconSize(QSize(255,63));
    QIcon myicon4(tr(":/button/button/4-2.png")); //新建QIcon对象
    ui->pushButton_4->setIcon(myicon4);
    ui->pushButton_4->setIconSize(QSize(255,63));
    QIcon myicon5(tr(":/button/button/5-2.png")); //新建QIcon对象
    ui->pushButton_5->setIcon(myicon5);
    ui->pushButton_5->setIconSize(QSize(255,63));
    QIcon myicon6(tr(":/button/button/6-1.png")); //新建QIcon对象
    ui->pushButton_6->setIcon(myicon6);
    ui->pushButton_6->setIconSize(QSize(255,63));

    Report_management *Report_management_window;
    Report_management_window = new Report_management(this);
    Report_management_window->show();
    Report_management_window->move(298,32);
}


