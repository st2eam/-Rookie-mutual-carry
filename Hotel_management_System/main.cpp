#include "hotel_management_system.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Hotel_management_System w;
        w.show();

    return a.exec();
}
