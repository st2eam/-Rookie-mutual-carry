#ifndef ENTRY_H
#define ENTRY_H

#include <QDialog>
#include <QtDebug>
#include <QPrinter>
#include <QPrintDialog>
#include <QFileDialog>
#include <QPainter>

namespace Ui {
class Entry;
}

class Entry : public QDialog
{
    Q_OBJECT

public:
    explicit Entry(QWidget *parent = nullptr);
    void data_1(QString _roomtype, QString _start_date, QString _ending_date, QString _guest, QString _tpnumber, QString _vipnumber, double _price);
    void Binddata();
    QString roomtype;
    QString start_date;
    QString ending_date;
    QString guest;
    QString tpnumber;
    QString vipnumber;
    double price;

    ~Entry();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Entry *ui;
};

#endif // ENTRY_H
