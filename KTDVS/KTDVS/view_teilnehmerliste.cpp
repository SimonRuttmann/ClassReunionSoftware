#include "View_Teilnehmerliste.h"
#include "iostream"
#include "ui_View_Teilnehmerliste.h"
#include <QDebug>

using namespace std;

View_Teilnehmerliste::View_Teilnehmerliste(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::View_Teilnehmerliste)
{
    this->vater = parent;
    ui->setupUi(this);


    this->listeTeilnehmer = ui->Teilnehmertabelle;

    this->teilnehmerList = Teilnehmerliste::instance();

    onInit();
}

View_Teilnehmerliste::~View_Teilnehmerliste()
{
    delete ui;
}

void View_Teilnehmerliste::addFeld(Teilnehmerdaten* daten){
    string adresse = "", telefonnummern = "";

    adresse = adresse + daten->getAdresse().strasse;
    adresse = adresse + " " + to_string(daten->getAdresse().haussnummer);
    adresse = adresse + " " + to_string(daten->getAdresse().postleitzahl);
    adresse = adresse + " " + daten->getAdresse().stadt;

    telefonnummern = telefonnummern + daten->getHaupttelefonnummer();

    listeTeilnehmer->setRowCount(listeTeilnehmer->rowCount() + 1);

    listeTeilnehmer->setItem(listeTeilnehmer->rowCount() - 1,0, new QTableWidgetItem(QString::fromStdString(daten->getVorname())));
    listeTeilnehmer->setItem(listeTeilnehmer->rowCount() - 1,1, new QTableWidgetItem(QString::fromStdString(daten->getNachname())));
    listeTeilnehmer->setItem(listeTeilnehmer->rowCount() - 1,2, new QTableWidgetItem(QString::fromStdString(daten->getEMail())));
    listeTeilnehmer->setItem(listeTeilnehmer->rowCount() - 1,3, new QTableWidgetItem(QString::fromStdString(daten->getHaupttelefonnummer())));
    listeTeilnehmer->setItem(listeTeilnehmer->rowCount() - 1,4, new QTableWidgetItem(QString::fromStdString("Versionsverlauf")));
    listeTeilnehmer->setItem(listeTeilnehmer->rowCount() - 1,5, new QTableWidgetItem(QString::fromStdString("Daten anzeigen")));
    listeTeilnehmer->setItem(listeTeilnehmer->rowCount() - 1,6, new QTableWidgetItem(QString::fromStdString("als Organisator")));
}

void View_Teilnehmerliste::onAusloggen(){
    QApplication::quit();
    cout << "Ausloggen!" << endl;
}

void View_Teilnehmerliste::onTeilnehmerdatenAendern(){
    View_TeilnehmerTeilnehmerHinzufuegen* viewTtH =
            new View_TeilnehmerTeilnehmerHinzufuegen(this->vater, this->ausgewaehlerTeilnehmer, false, false);
    viewTtH->show();
    this->hide();
}

void View_Teilnehmerliste::onTeilnehmerHinzufuegen(){
    View_TeilnehmerTeilnehmerHinzufuegen* viewTtH =
            new View_TeilnehmerTeilnehmerHinzufuegen(this->vater, this->ausgewaehlerTeilnehmer, true, false);
    viewTtH->show();
    this->hide();
}

void View_Teilnehmerliste::onAlsOrganisatorHinzufuegen(){
    View_Passwortaenderung* pw = new View_Passwortaenderung(this->vater, this->ausgewaehlerTeilnehmer);
    pw->show();
    this->hide();
}

void View_Teilnehmerliste::onVersionsverlaufAnzeigen(){
    View_Versionsverlauf* vv = new View_Versionsverlauf(this->vater, this->ausgewaehlerTeilnehmer);
    vv->show();
    this->hide();
}

void View_Teilnehmerliste::onUpdate(){
    //reset liste
    listeTeilnehmer->clear();

    onInit();
}

void View_Teilnehmerliste::onInit(){
    list<Teilnehmer*>::iterator it;

    if (teilnehmerList != nullptr) {
        for (it = teilnehmerList->getTeilnehmerliste()->begin(); it != teilnehmerList->getTeilnehmerliste()->end(); it++) {
            Teilnehmerdaten* daten = (*it)->getAktuelleTeilnehmerdaten();
            addFeld(daten);
        }
    }
}

void View_Teilnehmerliste::on_pushButton_clicked()
{
    onTeilnehmerHinzufuegen();
}


void View_Teilnehmerliste::on_toolButton_clicked()
{
    onAusloggen();
}

void View_Teilnehmerliste::on_Teilnehmertabelle_cellClicked(int row, int column)
{
    list<Teilnehmer*>::iterator it;

    string email = listeTeilnehmer->item(row, 2)->text().toStdString();

    for (it = teilnehmerList->getTeilnehmerliste()->begin(); it != teilnehmerList->getTeilnehmerliste()->end(); it++) {

        string emailTeilnehmer = (*it)->getAktuelleTeilnehmerdaten()->getEMail();

        if (email == emailTeilnehmer) {
            Teilnehmer* teilnehmer = (*it);
            this->ausgewaehlerTeilnehmer = teilnehmer;
            break;
        }
    }

    if (column == 4) {
        onVersionsverlaufAnzeigen();
    } else if (column == 5) {
        onTeilnehmerdatenAendern();
    } else if (column == 6) {
        onAlsOrganisatorHinzufuegen();
    }
}
