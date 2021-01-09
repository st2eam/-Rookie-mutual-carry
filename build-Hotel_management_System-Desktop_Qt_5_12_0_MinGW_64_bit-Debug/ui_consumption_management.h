/********************************************************************************
** Form generated from reading UI file 'consumption_management.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSUMPTION_MANAGEMENT_H
#define UI_CONSUMPTION_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Consumption_management
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;

    void setupUi(QWidget *Consumption_management)
    {
        if (Consumption_management->objectName().isEmpty())
            Consumption_management->setObjectName(QString::fromUtf8("Consumption_management"));
        Consumption_management->resize(1035, 706);
        tabWidget = new QTabWidget(Consumption_management);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1035, 706));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());

        retranslateUi(Consumption_management);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Consumption_management);
    } // setupUi

    void retranslateUi(QWidget *Consumption_management)
    {
        Consumption_management->setWindowTitle(QApplication::translate("Consumption_management", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Consumption_management", "\346\266\210\350\264\271\345\205\245\350\264\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Consumption_management: public Ui_Consumption_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSUMPTION_MANAGEMENT_H
