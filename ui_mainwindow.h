/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *UserLabel;
    QLabel *PassLabel;
    QLabel *Label;
    QLineEdit *UserEdit;
    QLineEdit *PassEdit;
    QPushButton *LogIn;
    QPushButton *Register;
    QLabel *label;
    QPushButton *kriptTip;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(382, 404);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(51, 68, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(76, 102, 191, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(63, 85, 159, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(25, 34, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(34, 45, 84, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Terminal"));
        MainWindow->setFont(font);
        MainWindow->setMouseTracking(true);
        MainWindow->setWindowOpacity(7);
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        UserLabel = new QLabel(centralWidget);
        UserLabel->setObjectName(QStringLiteral("UserLabel"));
        UserLabel->setGeometry(QRect(40, 60, 111, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        UserLabel->setFont(font1);
        PassLabel = new QLabel(centralWidget);
        PassLabel->setObjectName(QStringLiteral("PassLabel"));
        PassLabel->setGeometry(QRect(40, 180, 111, 31));
        PassLabel->setFont(font1);
        Label = new QLabel(centralWidget);
        Label->setObjectName(QStringLiteral("Label"));
        Label->setGeometry(QRect(50, 110, 291, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(36);
        font2.setBold(true);
        font2.setWeight(75);
        Label->setFont(font2);
        Label->setAlignment(Qt::AlignCenter);
        UserEdit = new QLineEdit(centralWidget);
        UserEdit->setObjectName(QStringLiteral("UserEdit"));
        UserEdit->setGeometry(QRect(160, 60, 191, 31));
        QPalette palette1;
        QBrush brush8(QColor(136, 40, 123, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        UserEdit->setPalette(palette1);
        QFont font3;
        font3.setFamily(QStringLiteral("Times New Roman"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        UserEdit->setFont(font3);
        UserEdit->setMaxLength(12);
        UserEdit->setReadOnly(false);
        PassEdit = new QLineEdit(centralWidget);
        PassEdit->setObjectName(QStringLiteral("PassEdit"));
        PassEdit->setGeometry(QRect(160, 180, 191, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        PassEdit->setPalette(palette2);
        PassEdit->setFont(font3);
        PassEdit->setMaxLength(12);
        PassEdit->setEchoMode(QLineEdit::Password);
        LogIn = new QPushButton(centralWidget);
        LogIn->setObjectName(QStringLiteral("LogIn"));
        LogIn->setGeometry(QRect(90, 240, 201, 41));
        QPalette palette3;
        QBrush brush9(QColor(0, 122, 179, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush9);
        QBrush brush10(QColor(6, 147, 142, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        LogIn->setPalette(palette3);
        QFont font4;
        font4.setFamily(QStringLiteral("Times New Roman"));
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setWeight(75);
        LogIn->setFont(font4);
        Register = new QPushButton(centralWidget);
        Register->setObjectName(QStringLiteral("Register"));
        Register->setGeometry(QRect(90, 310, 101, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        Register->setPalette(palette4);
        QFont font5;
        font5.setFamily(QStringLiteral("Times New Roman"));
        font5.setPointSize(20);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setWeight(75);
        Register->setFont(font5);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 10, 211, 41));
        QFont font6;
        font6.setFamily(QStringLiteral("Times New Roman"));
        font6.setPointSize(24);
        font6.setBold(true);
        font6.setWeight(75);
        label->setFont(font6);
        label->setAlignment(Qt::AlignCenter);
        kriptTip = new QPushButton(centralWidget);
        kriptTip->setObjectName(QStringLiteral("kriptTip"));
        kriptTip->setGeometry(QRect(200, 310, 91, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        kriptTip->setPalette(palette5);
        QFont font7;
        font7.setFamily(QStringLiteral("Times New Roman"));
        font7.setPointSize(14);
        font7.setBold(true);
        font7.setItalic(false);
        font7.setWeight(75);
        kriptTip->setFont(font7);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 382, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Login Project", 0));
        UserLabel->setText(QApplication::translate("MainWindow", "Username:", 0));
        PassLabel->setText(QApplication::translate("MainWindow", "Password:", 0));
        Label->setText(QApplication::translate("MainWindow", "Qt Creator", 0));
        UserEdit->setText(QString());
        UserEdit->setPlaceholderText(QApplication::translate("MainWindow", "Type username here...", 0));
        PassEdit->setPlaceholderText(QApplication::translate("MainWindow", "Type password here...", 0));
        LogIn->setText(QApplication::translate("MainWindow", "Login", 0));
        Register->setText(QApplication::translate("MainWindow", "Register", 0));
        label->setText(QApplication::translate("MainWindow", "Clock", 0));
        kriptTip->setText(QApplication::translate("MainWindow", "MD5", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
