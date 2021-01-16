#ifndef DIALOGBAOBIAO1_H
#define DIALOGBAOBIAO1_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class Dialogbaobiao1;
}

class Dialogbaobiao1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogbaobiao1(QWidget *parent = nullptr);
    ~Dialogbaobiao1();

private:
    Ui::Dialogbaobiao1 *ui;
    QSqlQuery query;
    QSqlTableModel *model;
    QSqlQueryModel *query_model;
};

#endif // DIALOGBAOBIAO1_H
