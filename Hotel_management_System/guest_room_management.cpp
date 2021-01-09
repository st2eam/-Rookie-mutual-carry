#include "guest_room_management.h"
#include "ui_guest_room_management.h"

Guest_room_management::Guest_room_management(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Guest_room_management)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    this->hide();
    this->setParent(parent);
}

Guest_room_management::~Guest_room_management()
{
    delete ui;
}
