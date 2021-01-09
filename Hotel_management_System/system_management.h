#ifndef SYSTEM_MANAGEMENT_H
#define SYSTEM_MANAGEMENT_H

#include <QMainWindow>
#include <QWizardPage>
#include <QWidget>
#include <QtDebug>
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
#include <QTableView>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QVariant>
#include <QString>
#include <QSqlError>

namespace Ui {
class System_management;
}

class System_management : public QWidget
{
    Q_OBJECT

public:
    explicit System_management(QWidget *parent = nullptr);
    ~System_management();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::System_management *ui;
    QSqlTableModel *model;
};

#endif // SYSTEM_MANAGEMENT_H
