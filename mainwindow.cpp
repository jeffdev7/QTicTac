#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QDebug>

static int cont=11;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    time= new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(Time()));
    time->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::Time(){
    cont--;
    qDebug()<<cont<< "Tic Tac";

    if(cont == 5){
            qDebug()<<"you're running outta time! HAHA";
        }

    if(cont == 0){
            qDebug()<<"BOOM";
            QCoreApplication::exit();
        }

};
