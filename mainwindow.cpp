#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "string"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    string user, pass;
    ui->loginButton->hide();
    ui->UserLabel->hide();
    ui->PassLabel->hide();
    ui->UserText->hide();
    ui->PassText->hide();
    ui->label->setText("Dobrodošli!");
}
