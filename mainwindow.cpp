#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmath.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int a,b,c;
    float r=0;

    a=ui->lineEdit->text().toInt();
    b=ui->lineEdit_2->text().toInt();
    r=ui->lineEdit_3->text().toFloat();

    if(ui->radioButton_2->isChecked())//по умолчанию всегда нажат radioButton отвечающий за градусы
    {
        r=(r*(57,29));
    }

    c = qSqrt((qPow(b,2)+qPow(a,2)));



QString answer = QString::number(c);
ui->lineEdit_4->setText(answer);

}

