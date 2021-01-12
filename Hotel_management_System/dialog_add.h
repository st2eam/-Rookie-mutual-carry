#ifndef DIALOG_ADD_H
#define DIALOG_ADD_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class Dialog_add;
}

class Dialog_add : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_add(QWidget *parent = nullptr);
    ~Dialog_add();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog_add *ui;
    QSqlQuery query;
    QSqlTableModel *model;
};

#endif // DIALOG_ADD_H
