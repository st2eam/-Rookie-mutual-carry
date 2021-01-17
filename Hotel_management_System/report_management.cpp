#include "report_management.h"
#include "ui_report_management.h"

Report_management::Report_management(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Report_management)
{
    ui->setupUi(this);

    ui->dateEdit_3->setDateTime(QDateTime::currentDateTime());
    ui->dateEdit_4->setDateTime(QDateTime::currentDateTime());
    ui->dateEdit_5->setDateTime(QDateTime::currentDateTime());
    //ui->dateEdit_2->setDateTime(QDateTime::currentDateTime().addDays(1));

    this->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    this->hide();
    this->setParent(parent);
    QIcon myicon1(tr(":/littlebutton/Print.png")); //新建QIcon对象
    ui->pushButton_10->setIcon(myicon1);
    ui->pushButton_10->setIconSize(QSize(110,70));
    QIcon myicon2(tr(":/littlebutton/Print.png")); //新建QIcon对象
    ui->pushButton_11->setIcon(myicon2);
    ui->pushButton_11->setIconSize(QSize(110,70));
    QIcon myicon3(tr(":/littlebutton/Print.png")); //新建QIcon对象
    ui->pushButton_12->setIcon(myicon3);
    ui->pushButton_12->setIconSize(QSize(110,70));
    QIcon myicon4(tr(":/littlebutton/Print.png")); //新建QIcon对象
    ui->pushButton_13->setIcon(myicon4);
    ui->pushButton_13->setIconSize(QSize(110,70));
    QIcon myicon5(tr(":/littlebutton/Print.png")); //新建QIcon对象
    ui->pushButton_14->setIcon(myicon5);
    ui->pushButton_14->setIconSize(QSize(110,70));
    QIcon myicon6(tr(":/littlebutton/Print.png")); //新建QIcon对象
    ui->pushButton_15->setIcon(myicon6);
    ui->pushButton_15->setIconSize(QSize(110,70));

    query_model = new QSqlQueryModel;
    this->init_charts();

    //创建模型
    model = new QSqlTableModel(this);
    model->setTable("Guest");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
    model->select(); //选取整个表的所有行
    QString str = "";
    model->setFilter(tr("bookstart like '%1'").arg("%"+str+"%"));
    model->setHeaderData(0,Qt::Horizontal,"顾客名字");
    model->setHeaderData(1,Qt::Horizontal,"个人ID");
    model->setHeaderData(2,Qt::Horizontal,"电话号码");
    model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
    model->setHeaderData(4,Qt::Horizontal,"VIP号码");
    model->setHeaderData(5,Qt::Horizontal,"入住房间");
    model->setHeaderData(6,Qt::Horizontal,"预定入住");
    model->setHeaderData(7,Qt::Horizontal,"预定离开");
//  model->setHeaderData(8,Qt::Horizontal,"入住时间");
//  model->setHeaderData(9,Qt::Horizontal,"离开时间");
//  model->setHeaderData(10,Qt::Horizontal,"应缴金额");
    model->removeColumn(8);
    model->removeColumn(8);
    model->removeColumn(8);
    ui->tableView_2->setModel(model);
    ui->tableView_2->show();
}

void Report_management::init_charts()
{
    //显示表格数据
    query_model->setQuery("SELECT income FROM Income");
    int row =  query_model->rowCount();
    QChart *chart = new QChart;
    chart->setAnimationOptions(QChart::AllAnimations);

    QBarSeries *series = new QBarSeries;

    QVBarModelMapper *mapper = new QVBarModelMapper(this);
    mapper->setFirstBarSetColumn(0);
    mapper->setLastBarSetColumn(1);
    mapper->setFirstRow(0);
    mapper->setRowCount(row);
    mapper->setSeries(series);
    mapper->setModel(query_model);
    chart->addSeries(series);

    QDate time2 = ui->dateEdit->date();
    QDate time1 = ui->dateEdit_2->date();

    qint64 Time_difference = time1.daysTo(time2);

    QStringList categories;
    //修改坐标字段

   if(Time_difference>=6)
   {
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    for(int i = 0;i<=Time_difference;i++)
    {
    categories << time1.addDays(i).toString("MM/dd");
    //qDebug()<<time1.addDays(i).toString("MM/dd");
    axisX->append(categories);
    }

    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);
   }
   else
   {
       QBarCategoryAxis *axisX = new QBarCategoryAxis();
       for(int i = 0;i<=Time_difference;i++)
       {
       categories << time1.addDays(i).toString("yyyy/MM/dd");
       //qDebug()<<time1.addDays(i).toString("yyyy/MM/dd");
       axisX->append(categories);
       }

       chart->addAxis(axisX, Qt::AlignBottom);
       series->attachAxis(axisX);
   }

    QValueAxis *axisY = new QValueAxis();
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);
}

Report_management::~Report_management()
{
    delete ui;
}

void Report_management::on_tabWidget_currentChanged(int index)
{
    if(index==0)//预定报表
    {
        //创建模型
        model = new QSqlTableModel(this);
        model->setTable("Guest");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
        model->select(); //选取整个表的所有行
        QString str = "";
        model->setFilter(tr("bookstart like '%1'").arg("%"+str+"%"));
        model->setHeaderData(0,Qt::Horizontal,"顾客名字");
        model->setHeaderData(1,Qt::Horizontal,"个人ID");
        model->setHeaderData(2,Qt::Horizontal,"电话号码");
        model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
        model->setHeaderData(4,Qt::Horizontal,"VIP号码");
        model->setHeaderData(5,Qt::Horizontal,"入住房间");
        model->setHeaderData(6,Qt::Horizontal,"预定入住");
        model->setHeaderData(7,Qt::Horizontal,"预定离开");
//      model->setHeaderData(8,Qt::Horizontal,"入住时间");
//      model->setHeaderData(9,Qt::Horizontal,"离开时间");
//      model->setHeaderData(10,Qt::Horizontal,"应缴金额");
        model->removeColumn(8);
        model->removeColumn(8);
        model->removeColumn(8);
        ui->tableView_2->setModel(model);
        ui->tableView_2->show();
    }
    if(index==1)//入住报表
    {
        //创建模型
        model = new QSqlTableModel(this);
        model->setTable("Guest");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
        model->select(); //选取整个表的所有行
        QString str = "";
        model->setFilter(tr("startdate like '%1'").arg("%"+str+"%"));
        model->setHeaderData(0,Qt::Horizontal,"顾客名字");
        model->setHeaderData(1,Qt::Horizontal,"个人ID");
        model->setHeaderData(2,Qt::Horizontal,"电话号码");
        model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
        model->setHeaderData(4,Qt::Horizontal,"VIP号码");
        model->setHeaderData(5,Qt::Horizontal,"入住房间");
        model->setHeaderData(6,Qt::Horizontal,"入住时间");
        model->setHeaderData(7,Qt::Horizontal,"离开时间");
        model->removeColumn(10);
        model->removeColumn(7);
        model->removeColumn(6);
        ui->tableView_3->setModel(model);
        ui->tableView_3->show();
    }
    if(index==2)//当日客人预定报表
    {
        //创建模型
        model = new QSqlTableModel(this);
        model->setTable("Guest");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
        model->select(); //选取整个表的所有行
        QString str = ui->dateEdit_5->text();
        model->setFilter(tr("bookstart like '%1'").arg("%"+str+"%"));
        model->setHeaderData(0,Qt::Horizontal,"顾客名字");
        model->setHeaderData(1,Qt::Horizontal,"个人ID");
        model->setHeaderData(2,Qt::Horizontal,"电话号码");
        model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
        model->setHeaderData(4,Qt::Horizontal,"VIP号码");
        model->setHeaderData(5,Qt::Horizontal,"入住房间");
        model->setHeaderData(6,Qt::Horizontal,"预定入住");
        model->setHeaderData(7,Qt::Horizontal,"预定离开");
//      model->setHeaderData(8,Qt::Horizontal,"入住时间");
//      model->setHeaderData(9,Qt::Horizontal,"离开时间");
//      model->setHeaderData(10,Qt::Horizontal,"应缴金额");
        model->removeColumn(8);
        model->removeColumn(8);
        model->removeColumn(8);
        ui->tableView_4->setModel(model);
        ui->tableView_4->show();
    }
    if(index==3)//当日入住顾客报表
    {
        //创建模型
        model = new QSqlTableModel(this);
        model->setTable("Guest");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
        model->select(); //选取整个表的所有行
        QString str = ui->dateEdit_3->text();
        model->setFilter(tr("startdate like '%1'").arg("%"+str+"%"));
        model->setHeaderData(0,Qt::Horizontal,"顾客名字");
        model->setHeaderData(1,Qt::Horizontal,"个人ID");
        model->setHeaderData(2,Qt::Horizontal,"电话号码");
        model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
        model->setHeaderData(4,Qt::Horizontal,"VIP号码");
        model->setHeaderData(5,Qt::Horizontal,"入住房间");
        model->setHeaderData(6,Qt::Horizontal,"入住时间");
        model->setHeaderData(7,Qt::Horizontal,"离开时间");
        model->removeColumn(10);
        model->removeColumn(7);
        model->removeColumn(6);
        ui->tableView_5->setModel(model);
        ui->tableView_5->show();
    }
    if(index==4)//当日离店顾客报表
    {
    //创建模型
    model = new QSqlTableModel(this);
    model->setTable("Guest");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);// 设置编辑策略
    model->select(); //选取整个表的所有行
    QString str = ui->dateEdit_4->text();
    qDebug()<<str;
    model->setFilter(tr("endingdate like '%1'").arg("%"+str+"%"));
    model->select();
    model->setHeaderData(0,Qt::Horizontal,"顾客名字");
    model->setHeaderData(1,Qt::Horizontal,"个人ID");
    model->setHeaderData(2,Qt::Horizontal,"电话号码");
    model->setHeaderData(3,Qt::Horizontal,"是否为VIP");
    model->setHeaderData(4,Qt::Horizontal,"VIP号码");
    model->setHeaderData(5,Qt::Horizontal,"入住房间");
    model->setHeaderData(6,Qt::Horizontal,"入住时间");
    model->setHeaderData(7,Qt::Horizontal,"离开时间");
    model->removeColumn(10);
    model->removeColumn(7);
    model->removeColumn(6);

    ui->tableView_6->setModel(model);
    ui->tableView_6->show();
    }

}

void Report_management::on_pushButton_clicked()
{
    this->init_charts();
}

void Report_management::on_pushButton_2_clicked()
{
    on_tabWidget_currentChanged(3);
}

void Report_management::on_pushButton_3_clicked()
{
    on_tabWidget_currentChanged(4);
}

void Report_management::on_pushButton_4_clicked()
{
    on_tabWidget_currentChanged(2);
}

void Report_management::on_pushButton_10_clicked()
{
    // 生成PDF文件
        QPrinter printer;
        QPixmap image;
    //    QPainter painter(&printer);
        image = image.grabWidget(this,40,50,740,580);
        QString fileName = QFileDialog::getSaveFileName(this, tr("导出PDF文件"),
                                                        QString(), "*.pdf");
        if (!fileName.isEmpty()) {

            // 如果文件后缀为空，则默认使用.pdf
            if (QFileInfo(fileName).suffix().isEmpty())
            fileName.append(".pdf");
            printer.setOutputFileName(fileName);
            QPixmap pixmap=QPixmap::grabWidget(ui->tableView_2,ui->tableView_2->rect()); //抓取界面widget区域，可以抓取任意控件区域，Qt5推荐新的API QWidget::grab
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

void Report_management::on_pushButton_11_clicked()
{
    // 生成PDF文件
        QPrinter printer;
        QPixmap image;
    //    QPainter painter(&printer);
        image = image.grabWidget(this,40,50,740,580);
        QString fileName = QFileDialog::getSaveFileName(this, tr("导出PDF文件"),
                                                        QString(), "*.pdf");
        if (!fileName.isEmpty()) {

            // 如果文件后缀为空，则默认使用.pdf
            if (QFileInfo(fileName).suffix().isEmpty())
            fileName.append(".pdf");
            printer.setOutputFileName(fileName);
            QPixmap pixmap=QPixmap::grabWidget(ui->tableView_3,ui->tableView_3->rect()); //抓取界面widget区域，可以抓取任意控件区域，Qt5推荐新的API QWidget::grab
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

void Report_management::on_pushButton_12_clicked()
{
    // 生成PDF文件
        QPrinter printer;
        QPixmap image;
    //    QPainter painter(&printer);
        image = image.grabWidget(this,40,50,740,580);
        QString fileName = QFileDialog::getSaveFileName(this, tr("导出PDF文件"),
                                                        QString(), "*.pdf");
        if (!fileName.isEmpty()) {

            // 如果文件后缀为空，则默认使用.pdf
            if (QFileInfo(fileName).suffix().isEmpty())
            fileName.append(".pdf");
            printer.setOutputFileName(fileName);
            QPixmap pixmap=QPixmap::grabWidget(ui->tableView_4,ui->tableView_4->rect()); //抓取界面widget区域，可以抓取任意控件区域，Qt5推荐新的API QWidget::grab
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

void Report_management::on_pushButton_13_clicked()
{
    // 生成PDF文件
        QPrinter printer;
        QPixmap image;
    //    QPainter painter(&printer);
        image = image.grabWidget(this,40,50,740,580);
        QString fileName = QFileDialog::getSaveFileName(this, tr("导出PDF文件"),
                                                        QString(), "*.pdf");
        if (!fileName.isEmpty()) {

            // 如果文件后缀为空，则默认使用.pdf
            if (QFileInfo(fileName).suffix().isEmpty())
            fileName.append(".pdf");
            printer.setOutputFileName(fileName);
            QPixmap pixmap=QPixmap::grabWidget(ui->tableView_5,ui->tableView_5->rect()); //抓取界面widget区域，可以抓取任意控件区域，Qt5推荐新的API QWidget::grab
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

void Report_management::on_pushButton_14_clicked()
{
    // 生成PDF文件
        QPrinter printer;
        QPixmap image;
    //    QPainter painter(&printer);
        image = image.grabWidget(this,40,50,740,580);
        QString fileName = QFileDialog::getSaveFileName(this, tr("导出PDF文件"),
                                                        QString(), "*.pdf");
        if (!fileName.isEmpty()) {

            // 如果文件后缀为空，则默认使用.pdf
            if (QFileInfo(fileName).suffix().isEmpty())
            fileName.append(".pdf");
            printer.setOutputFileName(fileName);
            QPixmap pixmap=QPixmap::grabWidget(ui->tableView_6,ui->tableView_6->rect()); //抓取界面widget区域，可以抓取任意控件区域，Qt5推荐新的API QWidget::grab
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

void Report_management::on_pushButton_15_clicked()
{
    // 生成PDF文件
        QPrinter printer;
        QPixmap image;
    //    QPainter painter(&printer);
        image = image.grabWidget(this,40,50,740,580);
        QString fileName = QFileDialog::getSaveFileName(this, tr("导出PDF文件"),
                                                        QString(), "*.pdf");
        if (!fileName.isEmpty()) {

            // 如果文件后缀为空，则默认使用.pdf
            if (QFileInfo(fileName).suffix().isEmpty())
            fileName.append(".pdf");
            printer.setOutputFileName(fileName);
            QPixmap pixmap=QPixmap::grabWidget(ui->chartView,ui->chartView->rect()); //抓取界面widget区域，可以抓取任意控件区域，Qt5推荐新的API QWidget::grab
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
