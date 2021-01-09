#ifndef GUEST_ROOM_MANAGEMENT_H
#define GUEST_ROOM_MANAGEMENT_H

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
class Guest_room_management;
}

class Guest_room_management : public QWidget
{
    Q_OBJECT

public:
    explicit Guest_room_management(QWidget *parent = nullptr);
    ~Guest_room_management();

private:
    Ui::Guest_room_management *ui;
};

#endif // GUEST_ROOM_MANAGEMENT_H
