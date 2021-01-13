/********************************************************************************
** Form generated from reading UI file 'hotel_management_system.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTEL_MANAGEMENT_SYSTEM_H
#define UI_HOTEL_MANAGEMENT_SYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hotel_management_System
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Hotel_management_System)
    {
        if (Hotel_management_System->objectName().isEmpty())
            Hotel_management_System->setObjectName(QString::fromUtf8("Hotel_management_System"));
        Hotel_management_System->resize(1366, 768);
        Hotel_management_System->setMinimumSize(QSize(1366, 768));
        Hotel_management_System->setMaximumSize(QSize(1366, 768));
        Hotel_management_System->setAutoFillBackground(false);
        Hotel_management_System->setStyleSheet(QString::fromUtf8("background-image: url(:/image/background.png);"));
        centralWidget = new QWidget(Hotel_management_System);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(42, 110, 225, 63));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(42, 200, 225, 63));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(42, 290, 225, 63));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 380, 225, 63));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(40, 470, 225, 63));
        Hotel_management_System->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Hotel_management_System);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1366, 24));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Hotel_management_System->setMenuBar(menuBar);
        statusBar = new QStatusBar(Hotel_management_System);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Hotel_management_System->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(Hotel_management_System);

        QMetaObject::connectSlotsByName(Hotel_management_System);
    } // setupUi

    void retranslateUi(QMainWindow *Hotel_management_System)
    {
        Hotel_management_System->setWindowTitle(QApplication::translate("Hotel_management_System", "Hotel_management_System", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_6->setText(QString());
        menu->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class Hotel_management_System: public Ui_Hotel_management_System {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTEL_MANAGEMENT_SYSTEM_H
