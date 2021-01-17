#include "hotel_management_system.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Hotel_management_System w;
    Dialog_login d;
    if(d.exec()==QDialog::Accepted){
        w.show();
    }
    return a.exec();
}
