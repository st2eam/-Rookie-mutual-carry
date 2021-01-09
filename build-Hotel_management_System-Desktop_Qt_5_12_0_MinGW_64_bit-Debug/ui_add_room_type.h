/********************************************************************************
** Form generated from reading UI file 'add_room_type.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_ROOM_TYPE_H
#define UI_ADD_ROOM_TYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Add_room_type
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Add_room_type)
    {
        if (Add_room_type->objectName().isEmpty())
            Add_room_type->setObjectName(QString::fromUtf8("Add_room_type"));
        Add_room_type->resize(239, 120);
        buttonBox = new QDialogButtonBox(Add_room_type);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(65, 73, 156, 23));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit_2 = new QLineEdit(Add_room_type);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(65, 21, 133, 20));
        lineEdit_3 = new QLineEdit(Add_room_type);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(65, 47, 133, 20));
        label_2 = new QLabel(Add_room_type);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(11, 21, 48, 16));
        label_3 = new QLabel(Add_room_type);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(11, 47, 24, 16));

        retranslateUi(Add_room_type);
        QObject::connect(buttonBox, SIGNAL(accepted()), Add_room_type, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Add_room_type, SLOT(reject()));

        QMetaObject::connectSlotsByName(Add_room_type);
    } // setupUi

    void retranslateUi(QDialog *Add_room_type)
    {
        Add_room_type->setWindowTitle(QApplication::translate("Add_room_type", "Dialog", nullptr));
        label_2->setText(QApplication::translate("Add_room_type", "\346\210\277\351\227\264\347\261\273\345\236\213", nullptr));
        label_3->setText(QApplication::translate("Add_room_type", "\344\273\267\346\240\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_room_type: public Ui_Add_room_type {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_ROOM_TYPE_H
