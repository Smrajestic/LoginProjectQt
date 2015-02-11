#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "QMessageBox"
#include "QTextStream"
#include "QFile"
#include "QDebug"
#include "QDateTime"
#include "QTimer"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *timer=new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(show_time()));
    timer->start();
}

void MainWindow::show_time()
{
    QTime time=QTime::currentTime();
    QString time_text=time.toString("hh : mm : ss");
    ui->label->setText(time_text);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int loggedin=0;

QString user="12345", pass="12345";
QString strImena, strGesla;

int getUser()
{
    QFile dat("C:/Users/imena.txt");
    dat.open(QIODevice::ReadOnly | QFile::Text);
    QTextStream in(&dat);
    while (!in.atEnd()) {
        user = in.readLine();
}
    return 0;
}

int getPass()
{
    QFile dat2("C:/gesla.txt");
    dat2.open(QIODevice::ReadOnly | QFile::Text);
    QTextStream in(&dat2);
    while (!in.atEnd()) {
        pass = in.readLine();
}
    return 0;
}


void MainWindow::on_LogIn_clicked()
{
    QMessageBox msgBox;
    getUser();
    getPass();
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
            {
            msgBox.warning(this, tr("Warning!"), tr("Napačno uporabniško ime ali geslo!"));
            QMessageBox::information(0,"Username - Password",user + " " + pass);
        }
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
    if(ui->UserEdit->text() != ui->PassEdit->text() && ui->UserEdit->text()!="")
        {
        QFile dat("C:/imena.txt");
        QFile dat2("C:/gesla.txt");
        strImena=ui->UserEdit->text();
        strGesla=ui->PassEdit->text();

       try {
            dat.open(QIODevice::Append | QFile::Text);
            dat2.open(QIODevice::Append | QFile::Text);
            QTextStream out(&dat);
            out << strImena + "\n";
            QTextStream out2(&dat2);
            out2 << strGesla + "\n";
        }
        catch(const exception& e) {
            QMessageBox::critical(0,"Error",e.what());
        };
        dat.flush();
        dat.close();
        dat2.close();
    }
    else if(ui->UserEdit->text()=="")
        QMessageBox::information(0,"Error","Za registriranje vpiši Uporabniško ime!");
    else if(ui->UserEdit->text() == ui->PassEdit->text())
        QMessageBox::information(0,"Error","Za registriranje uporabi različno Uporabniško ime, kot Geslo!");
    }
