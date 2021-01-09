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
}

Basic_info::~Basic_info()
{
    delete ui;
}
