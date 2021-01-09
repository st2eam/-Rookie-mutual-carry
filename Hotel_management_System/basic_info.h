#ifndef BASIC_INFO_H
#define BASIC_INFO_H

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
class Basic_info;
}

class Basic_info : public QWidget
{
    Q_OBJECT

public:
    explicit Basic_info(QWidget *parent = nullptr);
    ~Basic_info();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tabWidget_tabBarClicked(int index);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::Basic_info *ui;
    QSqlTableModel *model;
};

#endif // BASIC_INFO_H
