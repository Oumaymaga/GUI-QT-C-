#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),counter(0),timer(new QTimer)
{
    ui->setupUi(this);
    /*ui->lcdNumber_1->display(1);
    ui->lcdNumber_2->display(2);
    ui->lcdNumber_3->display(3);*/

    connect(ui->Increment,&QPushButton::clicked,this,&MainWindow::action_increment);
    connect(ui->Decrement,&QPushButton::clicked,this,&MainWindow::action_decrement);
    timer->start(1000);
    connect(timer,&QTimer::timeout,this,&MainWindow::action_timer);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow:: action_increment()
{
    counter++;
    ui->lcdNumber_1->display(counter);
    ui->lcdNumber_2->display(counter);
}
void MainWindow::action_decrement()
{
    counter--;
    ui->lcdNumber_1->display(counter);
    ui->lcdNumber_2->display(counter);
}
void MainWindow::action_timer()
{
    static int timer_counter=0;
    timer_counter++;
    ui->lcdNumber_3->display(timer_counter);
}
