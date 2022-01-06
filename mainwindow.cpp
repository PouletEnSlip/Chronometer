#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
 QMainWindow(parent),
 ui(new Ui::MainWindow)
{
    valeur=0;
    monTimer=new QTimer(this);
    connect(monTimer,SIGNAL(timeout()),this,SLOT(chronometre()));
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::chronometre()
{
     valeur=valeur+1;
     ui->lcd_Chronometre->display(valeur);
}

void MainWindow::on_pb_Raz_clicked()
{
    valeur=0;
    ui->lcd_Chronometre->display(valeur);
}

void MainWindow::on_pb_demarer_clicked()
{
    monTimer->setSingleShot(false);
    monTimer->start(1000);
}

void MainWindow::on_pb_Arreter_clicked()
{
    monTimer->stop();
}

void MainWindow::on_pb_Quitter_clicked()
{
    exit (0);
}
