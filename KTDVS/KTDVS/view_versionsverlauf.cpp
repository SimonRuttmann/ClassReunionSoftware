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
    this->hide();
    viewListe->show();
    cout << "go back" << endl;

}

void View_Versionsverlauf::on_toolButton_clicked()
{

    QApplication::quit();
//    cout << "logout" << endl;
//    this->close();
}

void View_Versionsverlauf::on_tableWidget_cellClicked(int row, int column)
{
    Teilnehmerdaten* aktuell = nullptr;
    Teilnehmerdaten* alt = nullptr;

    list<Teilnehmerdaten*>::iterator it;

    if (column == 3) {
        cout << "go to details" << endl;

        string date = listeTeilnehmer->item(row, 0)->text().toStdString();
        string person = listeTeilnehmer->item(row, 1)->text().toStdString();
        string organisator = listeTeilnehmer->item(row, 2)->text().toStdString();

        for (it = teilnehmer->getAlleTeilnehmerdaten()->begin(); it != teilnehmer->getAlleTeilnehmerdaten()->end(); it++) {
            string datum = to_string((*it)->getDatum().tag) + "." + to_string((*it)->getDatum().monat) + "." + to_string((*it)->getDatum().jahr);
            datum = datum + " " + to_string((*it)->getDatum().stunde) + ":" + to_string((*it)->getDatum().min) + ":" + to_string((*it)->getDatum().sekunde);

            string name = (*it)->getVorname() + " " + (*it)->getNachname();

            if (date == datum && person == name && organisator == to_string((*it)->getErstellerKey())) {
                alt = *it;
            }
        }

        aktuell = teilnehmer->getAktuelleTeilnehmerdaten();

        if (alt != nullptr && aktuell != nullptr) {
            View_VersionsverlaufDetailliert* vd = new View_VersionsverlaufDetailliert(this->vater, alt, aktuell);
            vd->show();
            this->hide();
        }
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
    //get items from teilnehmerliste
    for (it = teilnehmer->getAlleTeilnehmerdaten()->begin(); it != teilnehmer->getAlleTeilnehmerdaten()->end(); it++) {
        listeTeilnehmer->setRowCount(listeTeilnehmer->rowCount() + 1);

        string datum = to_string((*it)->getDatum().tag) + "." + to_string((*it)->getDatum().monat) + "." + to_string((*it)->getDatum().jahr);
        datum = datum + " " + to_string((*it)->getDatum().stunde) + ":" + to_string((*it)->getDatum().min) + ":" + to_string((*it)->getDatum().sekunde);

        listeTeilnehmer->setItem(counter,0, new QTableWidgetItem(QString::fromStdString(datum)));
        listeTeilnehmer->setItem(counter,1, new QTableWidgetItem(QString::fromStdString((*it)->getVorname()) + " " + QString::fromStdString((*it)->getNachname())));
        listeTeilnehmer->setItem(counter,2, new QTableWidgetItem((*it)->getErstellerKey()));
        listeTeilnehmer->setItem(counter,3, new QTableWidgetItem("click for details"));

        counter++;
    }
}
