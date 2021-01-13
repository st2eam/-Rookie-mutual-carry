#include "change_rooms.h"
#include "ui_change_rooms.h"

change_rooms::change_rooms(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_rooms)
{
    ui->setupUi(this);
}

change_rooms::~change_rooms()
{
    delete ui;
}
