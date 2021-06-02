#include "view_versionsverlauf.h"
#include "ui_view_versionsverlauf.h"
#include <iostream>
#include "Teilnehmerdaten.h"

using namespace std;

view_versionsverlauf::view_versionsverlauf(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::view_versionsverlauf)
{
    ui->setupUi(this);
    listeTeilnehmer = ui->tableWidget;
    zurueck = ui->pushButton;
    ausloggen = ui->toolButton;

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

    cout << "add all new items" << endl;
    //get items from teilnehmerliste
    for (int i = 0; i <  10; i++) {
        listeTeilnehmer->setRowCount(listeTeilnehmer->rowCount() + 1);
        listeTeilnehmer->setItem(i,0, new QTableWidgetItem("datumNew"));
        listeTeilnehmer->setItem(i,1, new QTableWidgetItem("personNew"));
        listeTeilnehmer->setItem(i,2, new QTableWidgetItem("organisatorNew"));
        listeTeilnehmer->setItem(i,3, new QTableWidgetItem("detailsNew"));
    }
}

void view_versionsverlauf::onInit(){
    cout << "add all start items" << endl;
    //get items from teilnehmerliste
    for (int i = 0; i < 10; i++) {
        listeTeilnehmer->setRowCount(listeTeilnehmer->rowCount() + 1);
        listeTeilnehmer->setItem(i,0, new QTableWidgetItem("datum"));
        listeTeilnehmer->setItem(i,1, new QTableWidgetItem("person"));
        listeTeilnehmer->setItem(i,2, new QTableWidgetItem("organisator"));
        listeTeilnehmer->setItem(i,3, new QTableWidgetItem("details"));
    }
}
