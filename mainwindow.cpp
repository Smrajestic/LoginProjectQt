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
}

int loggedin=0;

void MainWindow::on_LogIn_clicked()
{
    QString user="test1", pass="Proba1.";
    QMessageBox msgBox;
    if(loggedin==0)
        {
        if(ui->UserEdit->text() == user && ui->PassEdit->text() == pass)
            {
            ui->UserLabel->hide();
            ui->UserEdit->hide();
            ui->PassLabel->hide();
            ui->PassEdit->hide();
            ui->LogIn->setText("ReLog");
            ui->Label->setText("Dobrodošli!");
            ui->UserEdit->clear();
            ui->PassEdit->clear();
            loggedin=1;
        }
        else
            msgBox.warning(this, tr("Warning!"), tr("Napačno uporabniško ime ali geslo!"));

    }
    else
    {
        ui->UserLabel->show();
        ui->UserEdit->show();
        ui->PassLabel->show();
        ui->PassEdit->show();
        ui->LogIn->setText("LogIn");
        ui->Label->setText("");
        loggedin=0;
    }
}

void MainWindow::on_PassEdit_returnPressed()
{
    ui->LogIn->clicked();
}

void MainWindow::on_UserEdit_returnPressed()
{
    ui->PassEdit->setFocus();
    if(ui->UserEdit->text()=="")
        ui->PassEdit->clear();
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox msgBox;
    if(loggedin==1)
        msgBox.warning(this,tr("Opomba"),tr("Uporabnik je "));
    else
        msgBox.warning(this,tr("Opomba"),tr("Uporabnik ni prijavljen"));
    }
