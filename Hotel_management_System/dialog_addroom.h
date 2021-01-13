#ifndef DIALOG_ADDROOM_H
#define DIALOG_ADDROOM_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class Dialog_addroom;
}

class Dialog_addroom : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_addroom(QWidget *parent = nullptr);
    void combox_Binddata();
    ~Dialog_addroom();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog_addroom *ui;
    QSqlQuery query;
    QSqlTableModel *model;
    QSqlQueryModel *query_model;
};

#endif // DIALOG_ADDROOM_H
