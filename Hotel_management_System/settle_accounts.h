#ifndef SETTLE_ACCOUNTS_H
#define SETTLE_ACCOUNTS_H

#include <QDialog>

namespace Ui {
class Settle_accounts;
}

class Settle_accounts : public QDialog
{
    Q_OBJECT

public:
    explicit Settle_accounts(QWidget *parent = nullptr);
    ~Settle_accounts();

private:
    Ui::Settle_accounts *ui;
};

#endif // SETTLE_ACCOUNTS_H
