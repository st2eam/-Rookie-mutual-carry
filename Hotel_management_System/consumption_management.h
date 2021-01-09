#ifndef CONSUMPTION_MANAGEMENT_H
#define CONSUMPTION_MANAGEMENT_H

#include <QWidget>

namespace Ui {
class Consumption_management;
}

class Consumption_management : public QWidget
{
    Q_OBJECT

public:
    explicit Consumption_management(QWidget *parent = nullptr);
    ~Consumption_management();

private:
    Ui::Consumption_management *ui;
};

#endif // CONSUMPTION_MANAGEMENT_H
