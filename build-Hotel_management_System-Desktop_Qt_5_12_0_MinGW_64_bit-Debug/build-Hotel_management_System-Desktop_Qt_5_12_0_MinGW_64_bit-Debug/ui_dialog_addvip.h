/********************************************************************************
** Form generated from reading UI file 'dialog_addvip.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ADDVIP_H
#define UI_DIALOG_ADDVIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Dialog_addvip
{
public:
    QTableView *tableView;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Dialog_addvip)
    {
        if (Dialog_addvip->objectName().isEmpty())
            Dialog_addvip->setObjectName(QString::fromUtf8("Dialog_addvip"));
        Dialog_addvip->resize(606, 285);
        tableView = new QTableView(Dialog_addvip);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 411, 261));
        lineEdit = new QLineEdit(Dialog_addvip);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(430, 90, 171, 20));
        pushButton = new QPushButton(Dialog_addvip);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(540, 40, 61, 23));
        pushButton_2 = new QPushButton(Dialog_addvip);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 200, 111, 21));
        pushButton_4 = new QPushButton(Dialog_addvip);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(520, 250, 75, 23));
        lineEdit_2 = new QLineEdit(Dialog_addvip);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(430, 140, 171, 20));
        lineEdit_3 = new QLineEdit(Dialog_addvip);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(430, 40, 101, 20));
        pushButton_5 = new QPushButton(Dialog_addvip);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(440, 250, 75, 23));

        retranslateUi(Dialog_addvip);

        QMetaObject::connectSlotsByName(Dialog_addvip);
    } // setupUi

    void retranslateUi(QDialog *Dialog_addvip)
    {
        Dialog_addvip->setWindowTitle(QApplication::translate("Dialog_addvip", "Dialog", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("Dialog_addvip", "id", nullptr));
        pushButton->setText(QApplication::translate("Dialog_addvip", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog_addvip", "\345\260\206\351\241\276\345\256\242\346\233\264\346\224\271\344\270\272VIP", nullptr));
        pushButton_4->setText(QApplication::translate("Dialog_addvip", "\345\217\226\346\266\210", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("Dialog_addvip", "\346\226\260vip\347\232\204\345\217\267\347\240\201", nullptr));
        pushButton_5->setText(QApplication::translate("Dialog_addvip", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_addvip: public Ui_Dialog_addvip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ADDVIP_H
