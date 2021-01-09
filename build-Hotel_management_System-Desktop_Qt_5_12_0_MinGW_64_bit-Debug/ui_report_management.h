/********************************************************************************
** Form generated from reading UI file 'report_management.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_MANAGEMENT_H
#define UI_REPORT_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Report_management
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView_2;
    QPushButton *pushButton_10;
    QWidget *tab_2;
    QTableView *tableView_3;
    QPushButton *pushButton_11;
    QWidget *tab_3;
    QTableView *tableView_4;
    QPushButton *pushButton_12;
    QWidget *tab_4;
    QTableView *tableView_5;
    QPushButton *pushButton_13;
    QWidget *tab_5;
    QTableView *tableView_6;
    QPushButton *pushButton_14;
    QWidget *tab_6;
    QTableView *tableView_7;
    QPushButton *pushButton_15;

    void setupUi(QWidget *Report_management)
    {
        if (Report_management->objectName().isEmpty())
            Report_management->setObjectName(QString::fromUtf8("Report_management"));
        Report_management->resize(1035, 706);
        tabWidget = new QTabWidget(Report_management);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1035, 706));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableView_2 = new QTableView(tab);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(40, 50, 740, 580));
        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(850, 280, 110, 70));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableView_3 = new QTableView(tab_2);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));
        tableView_3->setGeometry(QRect(40, 50, 740, 580));
        pushButton_11 = new QPushButton(tab_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(850, 280, 110, 70));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tableView_4 = new QTableView(tab_3);
        tableView_4->setObjectName(QString::fromUtf8("tableView_4"));
        tableView_4->setGeometry(QRect(40, 50, 740, 580));
        pushButton_12 = new QPushButton(tab_3);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(850, 280, 110, 70));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tableView_5 = new QTableView(tab_4);
        tableView_5->setObjectName(QString::fromUtf8("tableView_5"));
        tableView_5->setGeometry(QRect(40, 50, 740, 580));
        pushButton_13 = new QPushButton(tab_4);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(850, 280, 110, 70));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tableView_6 = new QTableView(tab_5);
        tableView_6->setObjectName(QString::fromUtf8("tableView_6"));
        tableView_6->setGeometry(QRect(40, 50, 740, 580));
        pushButton_14 = new QPushButton(tab_5);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(850, 280, 110, 70));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tableView_7 = new QTableView(tab_6);
        tableView_7->setObjectName(QString::fromUtf8("tableView_7"));
        tableView_7->setGeometry(QRect(40, 50, 740, 580));
        pushButton_15 = new QPushButton(tab_6);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(850, 280, 110, 70));
        tabWidget->addTab(tab_6, QString());

        retranslateUi(Report_management);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(Report_management);
    } // setupUi

    void retranslateUi(QWidget *Report_management)
    {
        Report_management->setWindowTitle(QApplication::translate("Report_management", "Report_management", nullptr));
        pushButton_10->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Report_management", "\351\242\204\345\256\232\345\256\242\344\272\272\346\212\245\350\241\250", nullptr));
        pushButton_11->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Report_management", "\345\205\245\344\275\217\345\256\242\344\272\272\346\212\245\350\241\250", nullptr));
        pushButton_12->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Report_management", "\345\275\223\346\227\245\345\256\242\344\272\272\351\242\204\345\256\232\346\212\245\350\241\250", nullptr));
        pushButton_13->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Report_management", "\345\275\223\346\227\245\345\256\242\344\272\272\345\205\245\344\275\217\346\212\245\350\241\250", nullptr));
        pushButton_14->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Report_management", "\345\275\223\346\227\245\347\246\273\345\272\227\345\256\242\344\272\272\346\212\245\350\241\250", nullptr));
        pushButton_15->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("Report_management", "\345\275\223\346\227\245\350\264\242\345\212\241\350\277\233\345\270\220\346\212\245\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Report_management: public Ui_Report_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_MANAGEMENT_H
