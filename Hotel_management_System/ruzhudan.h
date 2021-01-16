#ifndef RUZHUDAN_H
#define RUZHUDAN_H


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
class ruzhudan;
}

class ruzhudan : public QDialog
{
    Q_OBJECT

public:
    explicit ruzhudan(QDialog *parent = nullptr);
    ~ruzhudan();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ruzhudan *ui;
    QSqlQuery query;
    QSqlTableModel *model;
    QSqlQueryModel *query_model;
};

#endif // RUZHUDAN_H
