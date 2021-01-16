#include "ruzhudan.h"
#include "ui_ruzhudan.h"

ruzhudan::ruzhudan(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::ruzhudan)
{
    ui->setupUi(this);

}

ruzhudan::~ruzhudan()
{
    delete ui;
}

void ruzhudan::on_pushButton_clicked()
{
    this->accept();
}
