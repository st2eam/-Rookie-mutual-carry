#ifndef GUEST_MANAGEMENT_H
#define GUEST_MANAGEMENT_H

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

namespace Ui {
class Guest_management;
}

class Guest_management : public QWidget
{
    Q_OBJECT

public:
    explicit Guest_management(QWidget *parent = nullptr);
    ~Guest_management();

private:
    Ui::Guest_management *ui;
};

#endif // GUEST_MANAGEMENT_H
