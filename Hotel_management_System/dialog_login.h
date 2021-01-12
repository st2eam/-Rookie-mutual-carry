#ifndef DIALOG_LOGIN_H
#define DIALOG_LOGIN_H

#include <QWidget>
#include <QDialog>
#include <QMessageBox>
#include <QSqlQuery>


namespace Ui {
class Dialog_login;
}

class Dialog_login : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_login(QDialog *parent = nullptr);
    ~Dialog_login();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog_login *ui;
        QSqlQuery query;
};

#endif // DIALOG_LOGIN_H
