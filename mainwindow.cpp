#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QPaintEvent"
#include "userthread.h"

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

void MainWindow::customEvent(QEvent *e)
{
    if (e->type() == CustomEvent_Login)
    {
       QMessageBox msgBox;
       msgBox.setText("The document has been modified.");
       msgBox.exec();
    }
}

void MainWindow::on_pushButton_clicked()
{
//    QApplication::postEvent(this, new QEvent(CustomEvent_Login));

//    myEvnet myE(this);
//    myE.sendMyEvent();
    QMutex mutex;
    QWaitCondition condition;
    userThread *recv = NULL;


    mutex.lock();
    if (! recv)
        recv = new userThread(this, &mutex, &condition);
    recv->start();
    mutex.unlock();

}
