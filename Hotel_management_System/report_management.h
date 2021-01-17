#include <QtCharts>
#include <QChartView>
#include <QLogValueAxis>
#include <QValueAxis>

#ifndef REPORT_MANAGEMENT_H
#define REPORT_MANAGEMENT_H

QT_CHARTS_USE_NAMESPACE

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
#include <QDate>
#include <QDateEdit>
#include <QPrinter>
#include <QPrintDialog>
#include <QFileDialog>
#include <QPainter>


namespace Ui {
class Report_management;
}

class Report_management : public QWidget
{
    Q_OBJECT

public:
    explicit Report_management(QWidget *parent = nullptr);
    void init_charts();
    ~Report_management();

private slots:
    void on_tabWidget_currentChanged(int index);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

private:
    Ui::Report_management *ui;
    QSqlTableModel *model;
    QSqlQueryModel *query_model;
};

#endif // REPORT_MANAGEMENT_H
