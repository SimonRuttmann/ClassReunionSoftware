#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "View_Teilnehmerliste.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    Teilnehmerliste *liste = new Teilnehmerliste();

    Adresse *adresse = new Adresse();
    adresse->haussnummer = 10;
    adresse->land = "DE";
    adresse->postleitzahl = 12345;
    adresse->stadt = "Teststadt";
    adresse->strasse = "Musterstraße";

    Teilnehmerdaten *teilnehmerdaten = new Teilnehmerdaten();
    teilnehmerdaten->setEmail("max.mustermann@gmail.com");
    teilnehmerdaten->setHaupttelefonnummer("47632876159");
    teilnehmerdaten->setNachname("Mustermann");
    teilnehmerdaten->setSchulname("Mustertest");
    teilnehmerdaten->setVorname("Max");
    teilnehmerdaten->setAdresse(*adresse);

    Teilnehmer *teilnehmer = new Teilnehmer(*teilnehmerdaten);
    liste->getTeilnehmerliste()->push_back(teilnehmer);

    view_teilnehmerliste* l = new view_teilnehmerliste(nullptr, nullptr);




    l->show();
    this->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

