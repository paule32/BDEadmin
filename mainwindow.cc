#include <QMessageBox>

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dialog.h"
#include "ui_dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    ui->DefTable->setColumnWidth(0,142);
    ui->DefTable->setColumnWidth(1,142);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    QMessageBox::aboutQt(this);
}

void MainWindow::on_actionAbout_BDE_Administrator_triggered()
{
    auto * dlg = new Dialog;
    dlg->exec();
    delete dlg;
}
