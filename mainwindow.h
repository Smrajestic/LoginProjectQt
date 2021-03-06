#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_LogIn_clicked();

    void on_PassEdit_returnPressed();

    void on_UserEdit_returnPressed();
    
    void on_Register_pressed();

    void show_time();

    void on_kriptTip_pressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
