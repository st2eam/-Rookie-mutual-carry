/********************************************************************************
** Form generated from reading UI file 'system_management.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEM_MANAGEMENT_H
#define UI_SYSTEM_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_System_management
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QTableView *tableView;

    void setupUi(QWidget *System_management)
    {
        if (System_management->objectName().isEmpty())
            System_management->setObjectName(QString::fromUtf8("System_management"));
        System_management->resize(1035, 706);
        System_management->setMinimumSize(QSize(1035, 706));
        System_management->setMaximumSize(QSize(1035, 706));
        tabWidget = new QTabWidget(System_management);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1035, 706));
        tabWidget->setAutoFillBackground(true);
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setMovable(true);
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(910, 170, 110, 70));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(910, 410, 110, 70));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(910, 290, 110, 70));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 50, 861, 580));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(System_management);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(System_management);
    } // setupUi

    void retranslateUi(QWidget *System_management)
    {
        System_management->setWindowTitle(QApplication::translate("System_management", "Form", nullptr));
        pushButton_4->setText(QString());
        pushButton_6->setText(QString());
        pushButton_5->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("System_management", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class System_management: public Ui_System_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEM_MANAGEMENT_H
