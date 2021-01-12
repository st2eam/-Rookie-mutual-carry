/********************************************************************************
** Form generated from reading UI file 'dialog_login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_LOGIN_H
#define UI_DIALOG_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_login
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *Dialog_login)
    {
        if (Dialog_login->objectName().isEmpty())
            Dialog_login->setObjectName(QString::fromUtf8("Dialog_login"));
        Dialog_login->resize(800, 500);
        pushButton = new QPushButton(Dialog_login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(596, 290, 75, 23));
        pushButton_2 = new QPushButton(Dialog_login);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(686, 290, 75, 23));
        lineEdit = new QLineEdit(Dialog_login);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(600, 161, 161, 20));
        lineEdit->setEchoMode(QLineEdit::Normal);
        lineEdit_2 = new QLineEdit(Dialog_login);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(600, 220, 161, 20));
        lineEdit_2->setEchoMode(QLineEdit::Normal);

        retranslateUi(Dialog_login);

        QMetaObject::connectSlotsByName(Dialog_login);
    } // setupUi

    void retranslateUi(QWidget *Dialog_login)
    {
        Dialog_login->setWindowTitle(QApplication::translate("Dialog_login", "Login", nullptr));
        pushButton->setText(QApplication::translate("Dialog_login", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog_login", "\345\217\226\346\266\210", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("Dialog_login", "username", nullptr));
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("Dialog_login", "password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_login: public Ui_Dialog_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_LOGIN_H
