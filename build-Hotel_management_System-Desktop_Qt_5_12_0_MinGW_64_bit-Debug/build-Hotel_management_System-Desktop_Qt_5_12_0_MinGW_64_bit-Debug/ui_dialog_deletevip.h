/********************************************************************************
** Form generated from reading UI file 'dialog_deletevip.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DELETEVIP_H
#define UI_DIALOG_DELETEVIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_deletevip
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;

    void setupUi(QDialog *Dialog_deletevip)
    {
        if (Dialog_deletevip->objectName().isEmpty())
            Dialog_deletevip->setObjectName(QString::fromUtf8("Dialog_deletevip"));
        Dialog_deletevip->resize(346, 296);
        pushButton = new QPushButton(Dialog_deletevip);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 240, 75, 23));
        pushButton_2 = new QPushButton(Dialog_deletevip);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 240, 75, 23));
        lineEdit = new QLineEdit(Dialog_deletevip);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 90, 113, 20));
        lineEdit_2 = new QLineEdit(Dialog_deletevip);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 130, 113, 20));
        lineEdit_4 = new QLineEdit(Dialog_deletevip);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 170, 113, 20));
        label = new QLabel(Dialog_deletevip);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 151, 16));
        QFont font;
        font.setFamily(QString::fromUtf8(".PingFang HK"));
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(Dialog_deletevip);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 86, 52, 18));
        QFont font1;
        font1.setFamily(QString::fromUtf8(".PingFang HK"));
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_3 = new QLabel(Dialog_deletevip);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 127, 52, 18));
        label_3->setFont(font1);
        label_5 = new QLabel(Dialog_deletevip);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 170, 52, 16));
        label_5->setFont(font1);

        retranslateUi(Dialog_deletevip);

        QMetaObject::connectSlotsByName(Dialog_deletevip);
    } // setupUi

    void retranslateUi(QDialog *Dialog_deletevip)
    {
        Dialog_deletevip->setWindowTitle(QApplication::translate("Dialog_deletevip", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Dialog_deletevip", "\347\241\256\350\256\244", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog_deletevip", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("Dialog_deletevip", "\347\241\256\350\256\244\345\210\240\351\231\244\350\257\245VIP\347\224\250\346\210\267\345\220\227", nullptr));
        label_2->setText(QApplication::translate("Dialog_deletevip", "\344\274\232\345\221\230\345\220\215\345\255\227", nullptr));
        label_3->setText(QApplication::translate("Dialog_deletevip", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        label_5->setText(QApplication::translate("Dialog_deletevip", "\344\274\232\345\221\230\345\217\267\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_deletevip: public Ui_Dialog_deletevip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DELETEVIP_H
