#ifndef SETTLE_ACCOUNTS_H
#define SETTLE_ACCOUNTS_H

#include <QDialog>
#include <QtDebug>
#include <QPrinter>
#include <QPrintDialog>
#include <QFileDialog>
#include <QPainter>

namespace Ui {
class Settle_accounts;
}

class Settle_accounts : public QDialog
{
    Q_OBJECT

public:
    explicit Settle_accounts(QWidget *parent = nullptr);
    void data_1(QString _roomtype, QString _start_date, QString _ending_date, QString _guest, QString _tpnumber, QString _vipnumber, double _price);
    void Binddata();
    QString roomtype;
    QString start_date;
    QString ending_date;
    QString guest;
    QString tpnumber;
    QString vipnumber;
    double price;
    ~Settle_accounts();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::Settle_accounts *ui;
};

#endif // SETTLE_ACCOUNTS_H
