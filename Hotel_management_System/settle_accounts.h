#ifndef SETTLE_ACCOUNTS_H
#define SETTLE_ACCOUNTS_H

#include <QDialog>
#include <QtGlobal>
#include <QMessageBox>
#include <QtSql>

#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QTableView>
#include <QSqlQuery>

#include <QMainWindow>
#include <QWizardPage>
#include <QWidget>
#include <QtDebug>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
#include <QInputDialog>
#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QDropEvent>
#include <QDragEnterEvent>
#include <QDialog>
#include <QLineEdit>
#include <QMessageBox>
#include <QWizardPage>
#include <QMdiArea>
#include <QTextEdit>
#include <QMdiSubWindow>
#include <QLabel>
#include <QTextBlock>
#include <QTextDocument>
#include <QMimeData>
#include <QDragEnterEvent>
#include <QIcon>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QTableView>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QVariant>
#include <QString>
#include <QSqlError>
#include <dialog_add.h>

namespace Ui {
class Settle_accounts;
}

class Settle_accounts : public QDialog
{
    Q_OBJECT

public:
    explicit Settle_accounts(QWidget *parent = nullptr);
    ~Settle_accounts();

private slots:
    void on_pushButton_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_2_clicked();

private:
    Ui::Settle_accounts *ui;
    QSqlTableModel *model;
};

#endif // SETTLE_ACCOUNTS_H
