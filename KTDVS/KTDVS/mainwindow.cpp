#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "View_Teilnehmerliste.h"
#include "View_ErsterSystemstart.h"
#include "View_Einloggen.h"
#include <QDebug>
#include <QFile>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    if(!Teilnehmerliste::instance()->getTeilnehmerliste()->empty()){
       View_Einloggen* beitretenStart = new View_Einloggen(this, false,true); //statt 'this' muss es vermutlich eine globale Var mit dem Hauptfenster geben.
        beitretenStart->show();
        this->close();
    }
    else{
    View_ErsterSystemstart* ersterSystemstart = new View_ErsterSystemstart(this);
    ersterSystemstart->show();
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

