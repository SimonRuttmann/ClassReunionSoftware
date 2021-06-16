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

    qDebug() << "Able to find main.cpp?..."
             << QFile::exists(PROJECT_PATH "main.cpp");
//    Teilnehmerliste *liste = new Teilnehmerliste();

//    Adresse *adresse = new Adresse();
//    adresse->haussnummer = 10;
//    adresse->land = "DE";
//    adresse->postleitzahl = 12345;
//    adresse->stadt = "Teststadt";
//    adresse->strasse = "Musterstraße";

//    Teilnehmerdaten *teilnehmerdaten = new Teilnehmerdaten();
//    teilnehmerdaten->setEmail("max.mustermann@gmail.com");
//    teilnehmerdaten->setHaupttelefonnummer("47632876159");
//    teilnehmerdaten->setNachname("Mustermann");
//    teilnehmerdaten->setSchulname("Mustertest");
//    teilnehmerdaten->setVorname("Max");
//    teilnehmerdaten->setAdresse(*adresse);

//    Teilnehmer *teilnehmer = new Teilnehmer(*teilnehmerdaten);
//    liste->getTeilnehmerliste()->push_back(teilnehmer);

    //View_Teilnehmerliste* l = new View_Teilnehmerliste(this, nullptr);



    if(!Teilnehmerliste::instance()->getTeilnehmerliste()->empty()){
       View_Einloggen* beitretenStart = new View_Einloggen(this, false); //statt 'this' muss es vermutlich eine globale Var mit dem Hauptfenster geben.
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

