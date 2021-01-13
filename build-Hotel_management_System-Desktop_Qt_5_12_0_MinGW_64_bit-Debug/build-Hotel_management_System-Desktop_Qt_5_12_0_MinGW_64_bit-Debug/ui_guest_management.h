/********************************************************************************
** Form generated from reading UI file 'guest_management.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUEST_MANAGEMENT_H
#define UI_GUEST_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Guest_management
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QTableView *tableView;
    QPushButton *pushButton_13;
    QWidget *tab_2;
    QTableView *tableView_2;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QWidget *tab_3;
    QTableView *tableView_3;
    QPushButton *pushButton_18;

    void setupUi(QWidget *Guest_management)
    {
        if (Guest_management->objectName().isEmpty())
            Guest_management->setObjectName(QString::fromUtf8("Guest_management"));
        Guest_management->resize(1035, 706);
        tabWidget = new QTabWidget(Guest_management);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1035, 706));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(850, 120, 110, 70));
        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(850, 360, 110, 70));
        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(850, 240, 110, 70));
        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 50, 740, 580));
        pushButton_13 = new QPushButton(tab);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(850, 480, 110, 70));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(40, 50, 740, 580));
        pushButton_15 = new QPushButton(tab_2);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(850, 360, 110, 70));
        pushButton_16 = new QPushButton(tab_2);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(850, 240, 110, 70));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));
        tableView_3->setGeometry(QRect(40, 50, 740, 580));
        pushButton_18 = new QPushButton(tab_3);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(850, 310, 110, 70));
        tabWidget->addTab(tab_3, QString());

        retranslateUi(Guest_management);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Guest_management);
    } // setupUi

    void retranslateUi(QWidget *Guest_management)
    {
        Guest_management->setWindowTitle(QApplication::translate("Guest_management", "Guest_management", nullptr));
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_13->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Guest_management", "\351\242\204\345\256\232\347\256\241\347\220\206", nullptr));
        pushButton_15->setText(QString());
        pushButton_16->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Guest_management", "\346\215\242\346\210\277\347\256\241\347\220\206", nullptr));
        pushButton_18->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Guest_management", "\351\200\200\346\210\277\347\273\223\345\270\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Guest_management: public Ui_Guest_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUEST_MANAGEMENT_H
