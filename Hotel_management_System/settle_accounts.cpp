#include "settle_accounts.h"
#include "ui_settle_accounts.h"

#include <QtGlobal>
#include <QMessageBox>
#include <QtSql>

#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QSqlTableModel>

#include <QSqlQuery>


Settle_accounts::Settle_accounts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settle_accounts)
{
    ui->setupUi(this);
//    QIcon myicon12(tr(":/littlebutton/Print.png")); //新建QIcon对象
//    ui->pushButton->setIcon(myicon12);
    ui->pushButton->setIconSize(QSize(110,70));
}

Settle_accounts::~Settle_accounts()
{
    delete ui;
}


void Settle_accounts::on_pushButton_clicked()
{
    int ok = QMessageBox::warning(this,tr("!"),
                                  tr("确定退房吗？"),QMessageBox::Yes, QMessageBox::No);
    if(ok == QMessageBox::No)
    { //
        return;
    }


}


