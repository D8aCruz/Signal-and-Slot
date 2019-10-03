#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->button_escribir,SIGNAL(clicked()),this,SLOT(escribir()));
    connect(ui->button_borrar,SIGNAL(clicked()),this,SLOT(borrar()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::borrar()
{
    ui->plainTextEdit->clear();
}

void MainWindow::escribir(){
    ui->plainTextEdit->setPlainText("Escribir...");
}

