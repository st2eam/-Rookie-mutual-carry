#ifndef HOTEL_MANAGEMENT_SYSTEM_H
#define HOTEL_MANAGEMENT_SYSTEM_H

#include <basic_info.h>
#include <system_management.h>
#include <guest_room_management.h>
#include <guest_management.h>
#include "consumption_management.h"
#include <report_management.h>


namespace Ui {
class Hotel_management_System;
}

class Hotel_management_System : public QMainWindow
{
    Q_OBJECT

public:
    explicit Hotel_management_System(QWidget *parent = nullptr);
    ~Hotel_management_System();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Hotel_management_System *ui;

//    Basic_info *Basic_isfo;
//    System_management *System_management;
//    Guest_management *Guest_management;
//    Guest_room_management *Guest_room_management;
//    Consumption_management *Consumption_management;
//    Report_management *Report_management;
};

#endif // HOTEL_MANAGEMENT_SYSTEM_H
