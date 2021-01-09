/********************************************************************************
** Form generated from reading UI file 'basic_info.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASIC_INFO_H
#define UI_BASIC_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Basic_info
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QWidget *tab_2;
    QTableView *tableView_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *tab_3;
    QTableView *tableView_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;

    void setupUi(QWidget *Basic_info)
    {
        if (Basic_info->objectName().isEmpty())
            Basic_info->setObjectName(QString::fromUtf8("Basic_info"));
        Basic_info->setWindowModality(Qt::NonModal);
        Basic_info->setEnabled(true);
        Basic_info->resize(1035, 706);
        tabWidget = new QTabWidget(Basic_info);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1035, 706));
        tabWidget->setBaseSize(QSize(0, 0));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setIconSize(QSize(32, 32));
        tabWidget->setDocumentMode(false);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(850, 170, 110, 70));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(850, 290, 111, 71));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(850, 410, 111, 71));
        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 50, 740, 580));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(40, 50, 740, 580));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(850, 170, 110, 70));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(850, 290, 110, 70));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(850, 410, 110, 70));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));
        tableView_3->setGeometry(QRect(40, 50, 740, 580));
        pushButton_7 = new QPushButton(tab_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(850, 170, 110, 70));
        pushButton_8 = new QPushButton(tab_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(850, 290, 110, 70));
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(850, 410, 110, 70));
        tabWidget->addTab(tab_3, QString());

        retranslateUi(Basic_info);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Basic_info);
    } // setupUi

    void retranslateUi(QWidget *Basic_info)
    {
        Basic_info->setWindowTitle(QApplication::translate("Basic_info", "Basic_info", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Basic_info", "\345\256\242\346\210\277\347\261\273\345\236\213\347\256\241\347\220\206", nullptr));
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Basic_info", "\346\245\274\345\261\202\347\256\241\347\220\206", nullptr));
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Basic_info", "\344\274\232\345\221\230\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Basic_info: public Ui_Basic_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASIC_INFO_H
