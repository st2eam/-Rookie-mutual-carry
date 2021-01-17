#include "entry.h"
#include "ui_entry.h"

#include <QFileDialog>
#include <QPrinter>

Entry::Entry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Entry)
{
    ui->setupUi(this);
}

Entry::~Entry()
{
    delete ui;
}

void Entry::data_1(QString _roomtype,QString _start_date,QString _ending_date,QString _guest,QString _tpnumber,QString _vipnumber,double _price)
{
    roomtype = _roomtype;
    start_date = _start_date;
    ending_date = _ending_date;
    guest = _guest;
    tpnumber = _tpnumber;
    vipnumber = _vipnumber;
    price = _price;
}

void Entry::Binddata()
{
    ui->label->setText(roomtype);
    ui->label_2->setText(start_date);
    ui->label_3->setText(ending_date);
    ui->label_4->setText(guest);
    ui->label_5->setText(tpnumber);
    ui->label_6->setText(vipnumber);

    if(vipnumber.isEmpty())//bushi
    {
        QString a;
        a = QString::number(price,10,5);//同int
        ui->label_7->setText(a);
        ui->label_8->setText("0");
        ui->label_9->setText(a);
    }
    else//shivip
    {
        double Price = price/0.9;
        QString a;
        a = QString::number(Price,10,5);//同int
        ui->label_7->setText(a);

        QString b;
        b = QString::number(price,10,5);//同int

        QString c;
        c = QString::number((price-Price),10,5);//同int
        ui->label_8->setText(c);
        ui->label_9->setText(b);
    }
}

void Entry::on_pushButton_clicked()
{
    // 生成PDF文件
        QPrinter printer;
        QPixmap image;
    //    QPainter painter(&printer);
        image = image.grabWidget(this,10,10,321,421);
        QString fileName = QFileDialog::getSaveFileName(this, tr("导出PDF文件"),
                                                        QString(), "*.pdf");
        if (!fileName.isEmpty()) {

            // 如果文件后缀为空，则默认使用.pdf
            if (QFileInfo(fileName).suffix().isEmpty())
            fileName.append(".pdf");
            printer.setOutputFileName(fileName);
            QPixmap pixmap=QPixmap::grabWidget(ui->widget,ui->widget->rect()); //抓取界面widget区域，可以抓取任意控件区域，Qt5推荐新的API QWidget::grab
            QPainter painter;
            painter.begin(&printer);
            QRect rect=painter.viewport(); //获取painter的视口区域
            int factor=rect.width()/pixmap.width(); //计算painter视口区域与抓取图片区域的尺寸比例因子
            painter.scale(factor*1.0,factor*1.0); //绘制时按照比例因子放大
            painter.drawPixmap(10,10,pixmap); //按照坐标画图

            printer.setPageSize(QPrinter::A4);
            printer.setOutputFormat(QPrinter::PdfFormat);
        }
}
