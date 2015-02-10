#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "QMessageBox"
#include "QTextStream"
#include "QFile"
#include "QDebug"

using namespace std;

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
    QMessageBox msgBox;
    QString user, pass;
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
    QString s;
    QMessageBox msgBox;
        switch (loggedin) {
        case 1:
            s="Uporabnik je prijavljen";
            break;
        default:s="Uporabnik ni prijavljen";
            break;
        }
        msgBox.warning(this, tr("Opomba"), s);
    }

void MainWindow::on_Register_pressed()
{
    QFile dat("C:/Users/Trinet/Documents/LoginProject/imena.txt");
    QString strImena, strGesla;
    strImena=ui->UserEdit->text();
    strGesla=ui->PassEdit->text();

   try {
        dat.open(QIODevice::Append | QFile::Text);
        QTextStream out(&dat);
        out << strImena + "   " +strGesla + "\n";
    }
    catch(const exception& e) {
        QMessageBox::critical(0,"Error",e.what());
      //nekam zapišeš napako
    };
    dat.flush();
    dat.close();
}
