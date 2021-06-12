#include "View_TeilnehmerTeilnehmerHinzufuegen.h"
#include "View_Versionsverlauf.h"
#include "Teilnehmerdaten.h"
#include "ui_view_teilnehmerteilnehmerhinzufuegen.h"
#include "Teilnehmerliste.h"
#include "Organisator.h"
View_TeilnehmerTeilnehmerHinzufuegen::View_TeilnehmerTeilnehmerHinzufuegen(QWidget* parent, Teilnehmer* aktuellerTeilnehmer,bool neuerTeilnehmer) :
    QWidget(parent),
    ui(new Ui::View_TeilnehmerTeilnehmerHinzufuegen)
{

    if(instanceof<Organisator>(aktuellerTeilnehmer)){
        //Enable button
        ui->PwAndern->setEnabled(true);
    }
    else{
        //Disable button
        ui->PwAndern->setEnabled(false);
    }

    ui->setupUi(this);
    neuerTn=neuerTeilnehmer;
    teiln = aktuellerTeilnehmer;
    daten = *teiln->aktuelleTeilnehmerdatenVonDBErhalten();

    vater = parent;
    if(!neuerTeilnehmer){
    ui->lineEdit_11->setText(QString::fromStdString(daten.getVorname()));
    ui->lineEdit_12->setText(QString::fromStdString(daten.getNachname()));
    ui->lineEdit_13->setText(QString::fromStdString(daten.getSchulname()));
    ui->lineEdit_14->setText(QString::fromStdString(daten.getAdresse().strasse));
    ui->lineEdit_15->setText(QString::number(daten.getAdresse().haussnummer));
    ui->lineEdit_16->setText(QString::number(daten.getAdresse().postleitzahl));
    ui->lineEdit_17->setText(QString::fromStdString(daten.getAdresse().stadt));
    ui->lineEdit_18->setText(QString::fromStdString(daten.getAdresse().land));
    ui->lineEdit_19->setText(QString::fromStdString(daten.getHaupttelefonnummer()));
    ui->lineEdit_20->setText(QString::fromStdString(daten.getEMail()));
    string teles = "";
    list<string> teleList = daten.getWeitereTelefonnummern();
    list<string>::iterator it = teleList.begin();
    while (it != teleList.end()){
        teles.append((*it));
        teles.append(", ");
        it++;
    }

    ui->lineEdit_21->setText(QString::fromStdString(teles));
    }
}

View_TeilnehmerTeilnehmerHinzufuegen::~View_TeilnehmerTeilnehmerHinzufuegen()
{
    delete ui;
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_PwAndern_clicked(){
    Teilnehmer* a =this->teiln;
    Organisator* b = (Organisator*) a;
    View_Passwortaenderung *pwa = new View_Passwortaenderung(vater,b); //da muss die richtige übergabe noch rein
    this->destroy(true);
    pwa->show();
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_Versionsverlauf_clicked(){
    view_versionsverlauf *vv = new view_versionsverlauf(vater);
    this->destroy(true);
    vv->show();
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_OrganisatorrechteEntfernen_clicked(){
//Muss extern abgeändert werden
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_Speichern_clicked(){ //Die Teilnehmerdaten müssen da richtig abgeändert werden
Teilnehmerdaten* teilnehmerdaten;
Teilnehmer* teilnehmer;

    if(neuerTn){
        teilnehmerdaten = new Teilnehmerdaten();
        teilnehmer = Teilnehmerliste::instance()->teilnehmerErstellen();
        daten = *teilnehmerdaten;

    }

    daten.setVorname(ui->lineEdit_11->text().toStdString());
    daten.setNachname(ui->lineEdit_12->text().toStdString());
    daten.setSchulname(ui->lineEdit_13->text().toStdString());
    Adresse adresse;
    adresse.strasse = ui->lineEdit_14->text().toStdString();
    adresse.haussnummer = ui->lineEdit_15->text().toInt();
    adresse.postleitzahl = ui->lineEdit_16->text().toInt();
    adresse.stadt = ui->lineEdit_17->text().toStdString();
    adresse.land = ui->lineEdit_18->text().toStdString();

    daten.setAdresse(adresse);
    daten.setHaupttelefonnummer(ui->lineEdit_19->text().toStdString());
    daten.setEmail(ui->lineEdit_20->text().toStdString());
    QString teleString = ui->lineEdit_21->text();
    QStringList weitereTele = teleString.split(", ");
    list<string> weitereTeleList;

    foreach(QString tel, weitereTele){
        weitereTeleList.push_front(tel.toStdString());
    }

    daten.setWeitereTelefonnummern(weitereTeleList);
    if(neuerTn)(teilnehmer->neuenTDEintragEinfuegen(teilnehmerdaten));
}


void View_TeilnehmerTeilnehmerHinzufuegen::on_zurueck_clicked(){
    view_teilnehmerliste* tl = new view_teilnehmerliste(vater);
    tl->show();
    this->close();
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_logout_clicked(){
    this->destroy();
    this->close();
}
