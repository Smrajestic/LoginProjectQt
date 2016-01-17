#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "QMessageBox"
#include "QTextStream"
#include "QFile"
#include "QDebug"
#include "QDateTime"
#include "QTimer"
#include "algorithm"
#include "QCryptographicHash"
#include "QByteArray"

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

bool tipmd5=true;

QString temp, user, pass;


void MainWindow::on_kriptTip_pressed()
{
    if(tipmd5==true){
        tipmd5=false;
        ui->kriptTip->setText("Kriptirano");
    }
    else {
        tipmd5=true;
        ui->kriptTip->setText("MD5");
    }
}
QString kriptiraj(QString strGesla)
{
    QString kript, temp, temp2;
    temp=strGesla.mid(1,3);
    temp2=strGesla.mid(2,2);
    strGesla.remove(1,3);
    kript=temp2+strGesla+temp;
    return kript;
}

QString dekriptiraj(QString kriptiranoGeslo, int faktor)
{
    QString odkript, temp;
    kriptiranoGeslo.remove(0,2);
    temp=kriptiranoGeslo.right(3);
    int n=faktor-3;
    kriptiranoGeslo.remove(n,3);
    odkript=kriptiranoGeslo.insert(1,temp);
    return odkript;
}

int checkLogin(QString username, QString password)
{
    if (username != "" && password != "") {
        QFile dat("C:/Users/Miha/Desktop/skupno.txt");
        dat.open(QIODevice::ReadOnly | QFile::Text);
        QTextStream in(&dat);
        while (!in.atEnd()) {
            temp = in.readLine();
            user = temp.section("#",0,0);
            pass = temp.section("#",1,1);
            if(tipmd5==true){
                if (username == user) {
                    if (QString(QCryptographicHash::hash((password.toUtf8()),QCryptographicHash::Md5).toHex()) == pass) {
                        return 1;
                    }
                }
            }
            else {
                if (username == user) {
                    pass = dekriptiraj(pass, password.length());
                    if (password == pass) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
int checkRegister(QString username)
{
    if (username != "") {
        QFile dat("C:/Users/Miha/Desktop/skupno.txt");
        dat.open(QIODevice::ReadOnly | QFile::Text);
        QTextStream in(&dat);
        while (!in.atEnd()) {
            temp = in.readLine();
            user = temp.section("#",0,0);
            if (username == user) {
                return 1;
            }
        }
    }
    return 0;
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

void MainWindow::on_LogIn_clicked()
{
    QMessageBox msgBox;
    if(loggedin==0)
    {
        loggedin = checkLogin(ui->UserEdit->text(),ui->PassEdit->text());
        if(loggedin==1)
        {
            ui->UserLabel->hide();
            ui->UserEdit->hide();
            ui->PassLabel->hide();
            ui->PassEdit->hide();
            ui->kriptTip->hide();
            ui->LogIn->setText("Logout");
            ui->Label->setText("Dobrodosli");
            ui->Register->hide();
            ui->UserEdit->clear();
            ui->PassEdit->clear();
        }
        else
        {
            msgBox.warning(this, tr("Warning!"), tr("Napacno uporabnisko ime ali geslo!"));
        }
    }
    else
    {
        ui->UserLabel->show();
        ui->UserEdit->show();
        ui->PassLabel->show();
        ui->PassEdit->show();
        ui->Register->show();
        ui->kriptTip->show();
        ui->LogIn->setText("Login");
        ui->Label->setText("Qt Creator");
        loggedin=0;
    }
}

void MainWindow::on_Register_pressed()
{
    if(checkRegister(ui->UserEdit->text())!=1){
        if(ui->UserEdit->text()!="" && ui->UserEdit->text() != ui->PassEdit->text() &&  ui->PassEdit->text().size()>4)
        {
            QString strImena, strGesla, kriptiranoGeslo, dekriptiranoGeslo;
            QFile dat("C:/Users/Miha/Desktop/skupno.txt");
            strImena=ui->UserEdit->text();
            strGesla=ui->PassEdit->text();
            kriptiranoGeslo=kriptiraj(strGesla);
            dekriptiranoGeslo=dekriptiraj(kriptiranoGeslo, strGesla.length());
            if(tipmd5==true){
                try {
                    dat.open(QIODevice::Append | QFile::Text);
                    QTextStream out(&dat);
                    out << strImena + "#";
                    out << QString(QCryptographicHash::hash((strGesla.toUtf8()),QCryptographicHash::Md5).toHex()) + "\n";
                }
                catch(const exception& e) {
                    QMessageBox::critical(0,"Error",e.what());
                };
            }
            else {
                try {
                    dat.open(QIODevice::Append | QFile::Text);
                    QTextStream out(&dat);
                    out << strImena + "#";
                    out << kriptiranoGeslo + "\n";
                }
                catch(const exception& e) {
                    QMessageBox::critical(0,"Error",e.what());
                };
            }
            dat.flush();
            dat.close();
        }
        else if(ui->UserEdit->text()=="")
            QMessageBox::information(0,"Error","Za registriranje vpisi uporabnisko ime!");
        else if(ui->UserEdit->text() == ui->PassEdit->text())
            QMessageBox::information(0,"Error","Za registriranje uporabi razlicno uporabnisko ime, kot geslo!");
        else if(ui->PassEdit->text().size()<4)
            QMessageBox::information(0,"Error","Geslo mora biti dolgo vsaj 4 znake!");
    }
    else
        QMessageBox::information(0,"Error","Uporabnisko ime je ze registrirano!");
}
