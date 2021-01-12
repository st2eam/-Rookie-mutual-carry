#include "dialog_login.h"
#include "ui_dialog_login.h"

Dialog_login::Dialog_login(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_login)
{
    ui->setupUi(this);
    ui->lineEdit->setStyleSheet("QLineEdit{border-width:0;border-style:outset}");
    ui->lineEdit_2->setStyleSheet("QLineEdit{border-width:0;border-style:outset}");
    QPalette PAllbackground = this->palette();
    QImage ImgAllbackground(":/image/203213206156116194.jpg");
    QImage fitimgpic=ImgAllbackground.scaled(this->width(),this->height(), Qt::IgnoreAspectRatio);
    PAllbackground.setBrush(QPalette::Window, QBrush(fitimgpic));
    this->setPalette(PAllbackground);
}

Dialog_login::~Dialog_login()
{
    delete ui;
}
//登录
void Dialog_login::on_pushButton_clicked()
{
    //todo 验证用户名和密码的正确性
    QString account = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    QString sql = tr("SELECT * FROM Login where username='%1' and password='%2'").arg(account).arg(password);
    query.exec(sql);
    if(query.next()){
        this->accept();
    }else{
       QMessageBox::about(this,"错误提示","用户名或者密码错误");
    }
}

void Dialog_login::on_pushButton_2_clicked()
{
    this->reject();
}
