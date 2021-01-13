#ifndef DIALOG_ADDVIP_H
#define DIALOG_ADDVIP_H

#include <QMainWindow>
#include <QWizardPage>
#include <QWidget>
#include <QDebug>
#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QDropEvent>
#include <QDragEnterEvent>
#include <QDialog>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
#include <QInputDialog>
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
#include <QStackedLayout>
#include <QTabWidget>
#include <QTableView>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QVariant>
#include <QString>
#include <QSqlError>

namespace Ui {
class Dialog_addvip;
}

class Dialog_addvip : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_addvip(QWidget *parent = nullptr);
    ~Dialog_addvip();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog_addvip *ui;
    QSqlTableModel *model;
    QSqlQueryModel *query_model;
};

#endif // DIALOG_ADDVIP_H
