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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QCheckBox *checkBox;

    void setupUi(QDialog *Dialog_add)
    {
        if (Dialog_add->objectName().isEmpty())
            Dialog_add->setObjectName(QString::fromUtf8("Dialog_add"));
        Dialog_add->resize(329, 249);
        lineEdit = new QLineEdit(Dialog_add);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 40, 113, 20));
        lineEdit_2 = new QLineEdit(Dialog_add);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 40, 113, 20));
        lineEdit_4 = new QLineEdit(Dialog_add);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(190, 90, 113, 20));
        lineEdit_3 = new QLineEdit(Dialog_add);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(30, 90, 113, 20));
        pushButton = new QPushButton(Dialog_add);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 210, 75, 23));
        pushButton_2 = new QPushButton(Dialog_add);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 210, 75, 23));
        dateEdit = new QDateEdit(Dialog_add);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(30, 140, 111, 22));
        dateEdit->setDateTime(QDateTime(QDate(2021, 1, 13), QTime(0, 0, 0)));
        dateEdit_2 = new QDateEdit(Dialog_add);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(190, 140, 110, 22));
        dateEdit_2->setDateTime(QDateTime(QDate(2021, 1, 14), QTime(0, 0, 0)));
        checkBox = new QCheckBox(Dialog_add);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(110, 180, 121, 16));

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
        pushButton->setText(QApplication::translate("Dialog_add", "\347\241\256\350\256\244", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog_add", "\345\217\226\346\266\210", nullptr));
        dateEdit->setDisplayFormat(QApplication::translate("Dialog_add", "yyyy/MM/dd", nullptr));
        dateEdit_2->setDisplayFormat(QApplication::translate("Dialog_add", "yyyy/MM/dd", nullptr));
        checkBox->setText(QApplication::translate("Dialog_add", "\346\230\257\345\220\246\344\270\272\351\242\204\345\256\232\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_add: public Ui_Dialog_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ADD_H
