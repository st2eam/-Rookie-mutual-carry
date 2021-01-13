/********************************************************************************
** Form generated from reading UI file 'change_rooms.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_ROOMS_H
#define UI_CHANGE_ROOMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_change_rooms
{
public:

    void setupUi(QDialog *change_rooms)
    {
        if (change_rooms->objectName().isEmpty())
            change_rooms->setObjectName(QString::fromUtf8("change_rooms"));
        change_rooms->resize(400, 300);

        retranslateUi(change_rooms);

        QMetaObject::connectSlotsByName(change_rooms);
    } // setupUi

    void retranslateUi(QDialog *change_rooms)
    {
        change_rooms->setWindowTitle(QApplication::translate("change_rooms", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_rooms: public Ui_change_rooms {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_ROOMS_H
