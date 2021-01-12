/********************************************************************************
** Form generated from reading UI file 'dialog_add.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ADD_H
#define UI_DIALOG_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_add
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog_add)
    {
        if (Dialog_add->objectName().isEmpty())
            Dialog_add->setObjectName(QString::fromUtf8("Dialog_add"));
        Dialog_add->resize(346, 277);
        lineEdit = new QLineEdit(Dialog_add);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 50, 113, 20));
        lineEdit_2 = new QLineEdit(Dialog_add);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 50, 113, 20));
        lineEdit_4 = new QLineEdit(Dialog_add);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(190, 100, 113, 20));
        lineEdit_3 = new QLineEdit(Dialog_add);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(30, 100, 113, 20));
        lineEdit_6 = new QLineEdit(Dialog_add);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(190, 150, 113, 20));
        lineEdit_5 = new QLineEdit(Dialog_add);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(30, 150, 113, 20));
        pushButton = new QPushButton(Dialog_add);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 210, 75, 23));
        pushButton_2 = new QPushButton(Dialog_add);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 210, 75, 23));

        retranslateUi(Dialog_add);

        QMetaObject::connectSlotsByName(Dialog_add);
    } // setupUi

    void retranslateUi(QDialog *Dialog_add)
    {
        Dialog_add->setWindowTitle(QApplication::translate("Dialog_add", "Dialog", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("Dialog_add", "\351\241\276\345\256\242\345\220\215\345\255\227", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("Dialog_add", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        lineEdit_4->setText(QString());
        lineEdit_4->setPlaceholderText(QApplication::translate("Dialog_add", "\346\210\277\351\227\264\345\217\267", nullptr));
        lineEdit_3->setPlaceholderText(QApplication::translate("Dialog_add", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        lineEdit_6->setText(QString());
        lineEdit_6->setPlaceholderText(QApplication::translate("Dialog_add", "\351\200\200\346\210\277\346\227\245\346\234\237", nullptr));
        lineEdit_5->setText(QString());
        lineEdit_5->setPlaceholderText(QApplication::translate("Dialog_add", "\345\274\200\345\247\213\346\227\245\346\234\237", nullptr));
        pushButton->setText(QApplication::translate("Dialog_add", "\347\241\256\350\256\244", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog_add", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_add: public Ui_Dialog_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ADD_H
