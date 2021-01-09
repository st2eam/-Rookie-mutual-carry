#ifndef BASIC_INFO_H
#define BASIC_INFO_H

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
#include <QStackedLayout>
#include <QTabWidget>
#include <QTableView>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QSqlTableModel>

namespace Ui {
class Basic_info;
}

class Basic_info : public QWidget
{
    Q_OBJECT

public:
    explicit Basic_info(QWidget *parent = nullptr);
    ~Basic_info();

private:
    Ui::Basic_info *ui;
};

#endif // BASIC_INFO_H
