#include "view_teilnehmerteilnehmerhinzufuegen.h"
#include "view_versionsverlauf.h"
#include "Teilnehmerdaten.h"
bool neuerTn;
Teilnehmerdaten *daten;
Qwidget* vater;
View_TeilnehmerTeilnehmerHinzufuegen::View_TeilnehmerTeilnehmerHinzufuegen(QWidget* parent, Teilnehmerdaten* tdaten,bool neuerTeilnehmer) :
    QWidget(parent),
    ui(new Ui::View_TeilnehmerTeilnehmerHinzufuegen)
{
    ui->setupUi(this);
    neuerTn=neuerTeilnehmer;
    daten = *tdaten;
    vater = parent;
    if(!neuerTeilnehmer){
    ui->lineEdit_11->setText(QString::fromStdString(daten.getVorname()));
    ui->lineEdit_12->setText(QString::fromStdString(daten.getNachname()));
    ui->lineEdit_13->setText(QString::fromStdString(daten.getSchulname()));
    ui->lineEdit_14->setText(QString::fromStdString(daten.getAdresse().strasse));
    ui->lineEdit_15->setText(QString::number(daten.getAdresse().haussnummer));
    ui->lineEdit_16->setText(QString::number(daten.getAdresse().postleitzahl));
    ui->lineEdit_17->setText(QString::fromStdString(daten.getAdresse().ort));
    ui->lineEdit_18->setText(QString::fromStdString(daten.getAdresse().land));
    ui->lineEdit_19->setText(QString::fromStdString(daten.getHaupttelefonnummer()));
    ui->lineEdit_20->setText(QString::fromStdString(daten.getEMail()));
    ui->lineEdit_21->setText(QString::fromStdString(daten.getWeitereTelefonnummern()));
    }
}

View_TeilnehmerTeilnehmerHinzufuegen::~View_TeilnehmerTeilnehmerHinzufuegen()
{
    delete ui;
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_PwAndern_clicked(){
    View_Passwortaenderung *pwa = new View_Passwortaenderung(daten); //da muss die richtige übergabe noch rein
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_Versionsverlauf_clicked(){
    view_versionsverlauf *vv = new view_versionsverlauf(vater);
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_OrganisatorrechteEntfernen_clicked(){
//Muss extern abgeändert werden
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_Speichern_clicked(){ //Die Teilnehmerdaten müssen da richtig abgeändert werden
    if(!neuerTn){
    daten.setVorname(ui->lineEdit_11->Text());
    daten.setNachname(ui->lineEdit_12->Text());
    daten.setSchulname(ui->lineEdit_13->Text());
    daten.setAdresse(ui->lineEdit_14->Text()).strasse;
    daten.setAdresse(ui->lineEdit_15->Text()).haussnummer;
    daten.setAdresse(ui->lineEdit_16->Text()).postleitzahl;
    daten.setAdresse(ui->lineEdit_17->Text()).ort;
    daten.setAdresse(ui->lineEdit_18->Text()).land;
    daten.setHaupttelefonnummer(ui->lineEdit_19->Text());
    daten.setEMail(ui->lineEdit_20->Text());
    daten.setWeitereTelefonnummern(ui->lineEdit_21->Text());
    }else{
        //hier nen Konstruktor für nen neuen Teilnehmer machen
        daten.setVorname(ui->lineEdit_11->Text());
        daten.setNachname(ui->lineEdit_12->Text());
        daten.setSchulname(ui->lineEdit_13->Text());
        daten.setAdresse(ui->lineEdit_14->Text()).strasse;
        daten.setAdresse(ui->lineEdit_15->Text()).haussnummer;
        daten.setAdresse(ui->lineEdit_16->Text()).postleitzahl;
        daten.setAdresse(ui->lineEdit_17->Text()).ort;
        daten.setAdresse(ui->lineEdit_18->Text()).land;
        daten.setHaupttelefonnummer(ui->lineEdit_19->Text());
        daten.setEMail(ui->lineEdit_20->Text());
        daten.setWeitereTelefonnummern(ui->lineEdit_21->Text());
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_zurueck_clicked(){
    this->close();
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_logout_clicked(){
    View_Ausloggen *logout = new View_Ausloggen();
    this->close();
}
