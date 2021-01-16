#ifndef DIALOGBAOBIAO3_H
#define DIALOGBAOBIAO3_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class Dialogbaobiao3;
}

class Dialogbaobiao3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogbaobiao3(QWidget *parent = nullptr);
    ~Dialogbaobiao3();

private:
    Ui::Dialogbaobiao3 *ui;
    QSqlQuery query;
    QSqlTableModel *model;
    QSqlQueryModel *query_model;
};

#endif // DIALOGBAOBIAO3_H
