#include "View_Versionsverlauf.h"
#include "ui_View_Versionsverlauf.h"
#include "View_Teilnehmerliste.h"
#include <iostream>
#include "View_VersionsverlaufDetailliert.h"
using namespace std;

View_Versionsverlauf::View_Versionsverlauf(QWidget *parent, Teilnehmer* teilnehmer) :
    QWidget(parent),
    ui(new Ui::View_Versionsverlauf)
{
    ui->setupUi(this);
    listeTeilnehmer = ui->tableWidget;
    zurueck = ui->pushButton;
    ausloggen = ui->toolButton;

    ui->tableWidget->horizontalHeader()->setStyleSheet("background-color: rgb(59, 59, 59); color: rgb(255, 255, 255);");

    this->teilnehmer = teilnehmer;
    this->vater = parent;
    onInit();
}

View_Versionsverlauf::~View_Versionsverlauf()
{
    delete ui;
}

void View_Versionsverlauf::on_pushButton_clicked()
{
    View_Teilnehmerliste* viewListe = new View_Teilnehmerliste(this->vater);
    this->close();
    viewListe->show();
    cout << "go back" << endl;

}

void View_Versionsverlauf::on_toolButton_clicked()
{

    QApplication::quit();

}

void View_Versionsverlauf::on_tableWidget_cellClicked(int row, int column)
{
    Teilnehmerdaten* vorherige = nullptr;
    Teilnehmerdaten* pressedOne = nullptr;

    list<Teilnehmerdaten*>::iterator it;

    if (column == 5) {
        cout << "go to details" << endl;

        int index = 0;
        for (it = this->teilnehmerDaten->begin(); it != this->teilnehmerDaten->end(); it++) {
            if (pressedOne != nullptr) {
                vorherige = *it;
                break;
            }

            if (index == row) pressedOne = *it;
            index++;
        }

        View_VersionsverlaufDetailliert* vd = new View_VersionsverlaufDetailliert(this->vater, vorherige, pressedOne, teilnehmer);
        vd->show();
        this->close();
    }
}

void View_Versionsverlauf::onUpdate(){
    listeTeilnehmer->clear();
    listeTeilnehmer->setRowCount(0);

    onInit();
}

void View_Versionsverlauf::onInit(){
    list<Teilnehmerdaten*>::iterator it;
    int counter = 0;

    cout << "add all start items" << endl;

    teilnehmer->getAlleTeilnehmerdaten()->clear();
    teilnehmerDaten = teilnehmer->alleTeilnehmerdatenErstellen();

    //get items from teilnehmerliste
    for (it = teilnehmerDaten->begin(); it != teilnehmerDaten->end(); it++) {
        listeTeilnehmer->setRowCount(listeTeilnehmer->rowCount() + 1);

        listeTeilnehmer->setItem(counter,0, new QTableWidgetItem(QString::fromStdString((*it)->getVorname())));
        listeTeilnehmer->setItem(counter,1, new QTableWidgetItem(QString::fromStdString((*it)->getNachname())));
        listeTeilnehmer->setItem(counter,2, new QTableWidgetItem(QString::fromStdString((*it)->getEMail())));

        list<Organisator*>::iterator it1;
        Teilnehmerliste* teilnehmerListeInstance = Teilnehmerliste::instance();

        for (it1 = teilnehmerListeInstance->getOrganisatorliste()->begin(); it1 != teilnehmerListeInstance->getOrganisatorliste()->end(); it1++) {
            if ((*it1)->getTeilnehmerkey() == (*it)->getErstellerKey()) {
                listeTeilnehmer->setItem(counter,3, new QTableWidgetItem(QString::fromStdString((*it1)->getAktuelleTeilnehmerdaten()->getVorname())));
                listeTeilnehmer->setItem(counter,4, new QTableWidgetItem(QString::fromStdString((*it1)->getAktuelleTeilnehmerdaten()->getNachname())));
            }
        }


        listeTeilnehmer->setItem(counter,5, new QTableWidgetItem("click for details"));

        counter++;
    }
}
