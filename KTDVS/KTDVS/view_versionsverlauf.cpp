#include "view_versionsverlauf.h"
#include "ui_view_versionsverlauf.h"
#include <iostream>
#include "Teilnehmerdaten.h"

using namespace std;

view_versionsverlauf::view_versionsverlauf(QWidget *parent, Teilnehmer* teilnehmer) :
    QWidget(parent),
    ui(new Ui::view_versionsverlauf)
{
    ui->setupUi(this);
    listeTeilnehmer = ui->tableWidget;
    zurueck = ui->pushButton;
    ausloggen = ui->toolButton;

    this->teilnehmer = teilnehmer;

    onInit();
}

view_versionsverlauf::~view_versionsverlauf()
{
    delete ui;
}

void view_versionsverlauf::on_pushButton_clicked()
{
    cout << "go back" << endl;
    this->close();
}

void view_versionsverlauf::on_toolButton_clicked()
{
    cout << "logout" << endl;
    this->close();
}

void view_versionsverlauf::on_tableWidget_cellClicked(int row, int column)
{
    if (column == 3) {
        cout << "go to details" << endl;

        string date = listeTeilnehmer->item(row, 0)->text().toStdString();
        string person = listeTeilnehmer->item(row, 1)->text().toStdString();
        string organisator = listeTeilnehmer->item(row, 2)->text().toStdString();

        //cout << row << endl;
        cout << date << endl;
        cout << person << endl;
        cout << organisator << endl;
    }
}

void view_versionsverlauf::onUpdate(){
    listeTeilnehmer->clear();
    listeTeilnehmer->setRowCount(0);

    list<Teilnehmerdaten*>::iterator it;
    int counter = 0;

    cout << "add all new items" << endl;
    //get items from teilnehmerliste
    for (it = teilnehmer->getAlleTeilnehmerdaten()->begin(); it != teilnehmer->getAlleTeilnehmerdaten()->end(); it++) {
        listeTeilnehmer->setRowCount(listeTeilnehmer->rowCount() + 1);
        listeTeilnehmer->setItem(counter,0, new QTableWidgetItem((*it)->getDatum().jahr)); //muss noch richtig gemacht werden
        listeTeilnehmer->setItem(counter,1, new QTableWidgetItem(QString::fromStdString((*it)->getVorname()) + " " + QString::fromStdString((*it)->getNachname())));
        listeTeilnehmer->setItem(counter,2, new QTableWidgetItem((*it)->getErstellerKey()));
        listeTeilnehmer->setItem(counter,3, new QTableWidgetItem("click for details"));

        counter++;
    }
}

void view_versionsverlauf::onInit(){
    list<Teilnehmerdaten*>::iterator it;
    int counter = 0;

    cout << "add all start items" << endl;
    //get items from teilnehmerliste
    for (it = teilnehmer->getAlleTeilnehmerdaten()->begin(); it != teilnehmer->getAlleTeilnehmerdaten()->end(); it++) {
        listeTeilnehmer->setRowCount(listeTeilnehmer->rowCount() + 1);
        listeTeilnehmer->setItem(counter,0, new QTableWidgetItem((*it)->getDatum().jahr)); //muss noch richtig gemacht werden
        listeTeilnehmer->setItem(counter,1, new QTableWidgetItem(QString::fromStdString((*it)->getVorname()) + " " + QString::fromStdString((*it)->getNachname())));
        listeTeilnehmer->setItem(counter,2, new QTableWidgetItem((*it)->getErstellerKey()));
        listeTeilnehmer->setItem(counter,3, new QTableWidgetItem("click for details"));

        counter++;
    }
}
