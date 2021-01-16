#ifndef DIALOGBAOBIAO_H
#define DIALOGBAOBIAO_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class Dialogbaobiao;
}

class Dialogbaobiao : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogbaobiao(QWidget *parent = nullptr);
    ~Dialogbaobiao();

private:
    Ui::Dialogbaobiao *ui;
    QSqlQuery query;
    QSqlTableModel *model;
    QSqlQueryModel *query_model;
};

#endif // DIALOGBAOBIAO_H
