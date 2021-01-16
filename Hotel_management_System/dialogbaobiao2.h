#ifndef DIALOGBAOBIAO2_H
#define DIALOGBAOBIAO2_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class Dialogbaobiao2;
}

class Dialogbaobiao2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogbaobiao2(QWidget *parent = nullptr);
    ~Dialogbaobiao2();

private:
    Ui::Dialogbaobiao2 *ui;
    QSqlQuery query;
    QSqlTableModel *model;
    QSqlQueryModel *query_model;
};

#endif // DIALOGBAOBIAO2_H
