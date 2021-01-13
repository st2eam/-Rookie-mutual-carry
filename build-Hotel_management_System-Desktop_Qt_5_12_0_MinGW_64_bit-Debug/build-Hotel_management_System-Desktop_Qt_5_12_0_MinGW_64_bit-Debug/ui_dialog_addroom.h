/********************************************************************************
** Form generated from reading UI file 'dialog_addroom.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ADDROOM_H
#define UI_DIALOG_ADDROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_addroom
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QComboBox *comboBox;

    void setupUi(QDialog *Dialog_addroom)
    {
        if (Dialog_addroom->objectName().isEmpty())
            Dialog_addroom->setObjectName(QString::fromUtf8("Dialog_addroom"));
        Dialog_addroom->resize(337, 266);
        lineEdit = new QLineEdit(Dialog_addroom);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 44, 133, 20));
        lineEdit_2 = new QLineEdit(Dialog_addroom);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 92, 133, 20));
        label = new QLabel(Dialog_addroom);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 44, 54, 16));
        label_2 = new QLabel(Dialog_addroom);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 92, 54, 16));
        label_3 = new QLabel(Dialog_addroom);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 140, 54, 16));
        pushButton = new QPushButton(Dialog_addroom);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 210, 75, 23));
        pushButton_2 = new QPushButton(Dialog_addroom);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 210, 75, 23));
        comboBox = new QComboBox(Dialog_addroom);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(100, 140, 133, 22));

        retranslateUi(Dialog_addroom);

        QMetaObject::connectSlotsByName(Dialog_addroom);
    } // setupUi

    void retranslateUi(QDialog *Dialog_addroom)
    {
        Dialog_addroom->setWindowTitle(QApplication::translate("Dialog_addroom", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog_addroom", "\346\211\200\345\234\250\346\245\274\345\261\202", nullptr));
        label_2->setText(QApplication::translate("Dialog_addroom", "\346\210\277\351\227\264\345\217\267", nullptr));
        label_3->setText(QApplication::translate("Dialog_addroom", "\346\210\277\351\227\264\347\261\273\345\236\213", nullptr));
        pushButton->setText(QApplication::translate("Dialog_addroom", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog_addroom", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_addroom: public Ui_Dialog_addroom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ADDROOM_H
