#ifndef DIALOGBAOBIAO5_H
#define DIALOGBAOBIAO5_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class Dialogbaobiao5;
}

class Dialogbaobiao5 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogbaobiao5(QWidget *parent = nullptr);
    ~Dialogbaobiao5();

private:
    Ui::Dialogbaobiao5 *ui;
    QSqlQuery query;
    QSqlTableModel *model;
    QSqlQueryModel *query_model;
};

#endif // DIALOGBAOBIAO5_H
