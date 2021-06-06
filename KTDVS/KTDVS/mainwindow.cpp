#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "view_teilnehmerliste.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    view_teilnehmerliste* l = new view_teilnehmerliste(nullptr, NULL);
    l->show();
    this->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

