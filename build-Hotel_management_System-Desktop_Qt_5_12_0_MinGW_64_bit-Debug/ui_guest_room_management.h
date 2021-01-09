/********************************************************************************
** Form generated from reading UI file 'guest_room_management.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUEST_ROOM_MANAGEMENT_H
#define UI_GUEST_ROOM_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Guest_room_management
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;

    void setupUi(QWidget *Guest_room_management)
    {
        if (Guest_room_management->objectName().isEmpty())
            Guest_room_management->setObjectName(QString::fromUtf8("Guest_room_management"));
        Guest_room_management->resize(1035, 706);
        tabWidget = new QTabWidget(Guest_room_management);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1035, 706));
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 50, 740, 580));
        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(850, 170, 110, 70));
        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(850, 410, 110, 70));
        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(850, 290, 110, 70));
        tabWidget->addTab(tab, QString());

        retranslateUi(Guest_room_management);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Guest_room_management);
    } // setupUi

    void retranslateUi(QWidget *Guest_room_management)
    {
        Guest_room_management->setWindowTitle(QApplication::translate("Guest_room_management", "Form", nullptr));
        pushButton_7->setText(QApplication::translate("Guest_room_management", "PushButton", nullptr));
        pushButton_8->setText(QApplication::translate("Guest_room_management", "PushButton", nullptr));
        pushButton_9->setText(QApplication::translate("Guest_room_management", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Guest_room_management", "\345\256\242\346\210\277\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Guest_room_management: public Ui_Guest_room_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUEST_ROOM_MANAGEMENT_H
