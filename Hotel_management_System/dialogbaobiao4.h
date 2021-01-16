#ifndef DIALOGBAOBIAO4_H
#define DIALOGBAOBIAO4_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class Dialogbaobiao4;
}

class Dialogbaobiao4 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogbaobiao4(QWidget *parent = nullptr);
    ~Dialogbaobiao4();

private:
    Ui::Dialogbaobiao4 *ui;
    QSqlQuery query;
    QSqlTableModel *model;
    QSqlQueryModel *query_model;
};

#endif // DIALOGBAOBIAO4_H
