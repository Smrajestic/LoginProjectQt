#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui->ReLog->hide();
}
void MainWindow::on_LogIn_clicked()
{
    QString user="test1", pass="Proba1.";
    QMessageBox msgBox;
        if(ui->UserEdit->text() == user && ui->PassEdit->text() == pass)
        {
        ui->UserLabel->hide();
        ui->UserEdit->hide();
        ui->PassLabel->hide();
        ui->PassEdit->hide();
        ui->LogIn->hide();
        ui->ReLog->show();
        ui->Label->setText("Dobrodošli!");
        ui->UserEdit->clear();
        ui->PassEdit->clear();
        }
    else
        msgBox.warning(this, tr("Warning!"), tr("Napačno uporabniško ime ali geslo!"));
}

void MainWindow::on_PassEdit_returnPressed()
{
    ui->LogIn->clicked();
}

void MainWindow::on_ReLog_clicked()
{
    ui->UserLabel->show();
    ui->UserEdit->show();
    ui->PassLabel->show();
    ui->PassEdit->show();
    ui->LogIn->show();
    ui->ReLog->hide();
    ui->Label->setText("");
}
