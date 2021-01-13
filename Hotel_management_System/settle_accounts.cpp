#include "settle_accounts.h"
#include "ui_settle_accounts.h"

Settle_accounts::Settle_accounts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settle_accounts)
{
    ui->setupUi(this);
//    QIcon myicon12(tr(":/littlebutton/Print.png")); //新建QIcon对象
//    ui->pushButton->setIcon(myicon12);
//    ui->pushButton->setIconSize(QSize(110,70));
}

Settle_accounts::~Settle_accounts()
{
    delete ui;
}
