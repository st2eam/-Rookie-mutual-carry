#ifndef CHANGE_ROOMS_H
#define CHANGE_ROOMS_H


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
class change_rooms;
}

class change_rooms : public QDialog
{
    Q_OBJECT

public:
    explicit change_rooms(QWidget *parent = nullptr);
    ~change_rooms();

private:
    Ui::change_rooms *ui;
    QSqlQuery query;
    QSqlTableModel *model;
    QSqlQueryModel *query_model;
};

#endif // CHANGE_ROOMS_H
