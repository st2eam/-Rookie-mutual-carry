/********************************************************************************
** Form generated from reading UI file 'settle_accounts.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTLE_ACCOUNTS_H
#define UI_SETTLE_ACCOUNTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Settle_accounts
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Settle_accounts)
    {
        if (Settle_accounts->objectName().isEmpty())
            Settle_accounts->setObjectName(QString::fromUtf8("Settle_accounts"));
        Settle_accounts->resize(590, 533);
        pushButton = new QPushButton(Settle_accounts);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 470, 81, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(12);
        pushButton->setFont(font);

        retranslateUi(Settle_accounts);

        QMetaObject::connectSlotsByName(Settle_accounts);
    } // setupUi

    void retranslateUi(QDialog *Settle_accounts)
    {
        Settle_accounts->setWindowTitle(QApplication::translate("Settle_accounts", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Settle_accounts", "\346\211\223\345\215\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settle_accounts: public Ui_Settle_accounts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTLE_ACCOUNTS_H
