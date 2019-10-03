#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->radioButton,SIGNAL(toggled(bool)),ui->pushButton,SLOT(setDisabled(bool)));
    connect(ui->pushButton_2,SIGNAL(clicked()),this, SLOT(miSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::miSlot()
{
    if(ui->radioButton->isEnabled()){
        ui->radioButton->setEnabled(false);
    } else {
        ui->radioButton->setEnabled(true);
    }

}
