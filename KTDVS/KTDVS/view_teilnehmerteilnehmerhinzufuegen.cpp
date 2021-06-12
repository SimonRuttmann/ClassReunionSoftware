#include "View_TeilnehmerTeilnehmerHinzufuegen.h"
#include "View_Versionsverlauf.h"


#include "ui_View_TeilnehmerTeilnehmerHinzufuegen.h"

#include <iostream>
//Hauptorganisator wird erstellt -> Teilnehemr = HO, "neuer Teilnehmer = true, da keine TD
View_TeilnehmerTeilnehmerHinzufuegen::View_TeilnehmerTeilnehmerHinzufuegen(
    QWidget* parent, Teilnehmer* aktuellerTeilnehmer,
    bool neuerTeilnehmer, bool hauptorganisatorErstellen) :

    QWidget(parent),
    ui(new Ui::View_TeilnehmerTeilnehmerHinzufuegen)
{
    ui->setupUi(this);

    if(instanceof<Organisator>(aktuellerTeilnehmer)){
        //Enable button
        ui->PwAndern->setEnabled(true);
    }
    else{
        //Disable button
        ui->PwAndern->setEnabled(false);

        ui->OrganisatorrechteEntfernen->setText("Organisatorrechte erteilen");
    }

    Organisator* nutzer = Teilnehmerliste::instance()->getAktiverNutzer();
    if(!nutzer->isHauptorganisator()){
        //hier muss geprüft werden ob man aktuell als hauptorganisator angemeldet ist, wenn nein dann des
        ui->OrganisatorrechteEntfernen->setVisible(false);
    }


    neuerTn=neuerTeilnehmer;
    teiln = aktuellerTeilnehmer;
    this->hauptorgErstellen = hauptorganisatorErstellen;
    vater = parent;

    if(this->hauptorgErstellen) {
        ui->zurueck_2->setVisible(false);
    }

    //kein neuer Teilnehmer, bisherige Daten anzeigen
    if(!neuerTeilnehmer){

    ui->Versionsverlauf->setEnabled(false);

    //Kein neuer Teilnehmer -> Teilnehmerdaten sind erhalten
    teilnehmerdaten = teiln->aktuelleTeilnehmerdatenVonDBErhalten();


    ui->lineEdit_11->setText(QString::fromStdString(teilnehmerdaten->getVorname()));
    ui->lineEdit_12->setText(QString::fromStdString(teilnehmerdaten->getNachname()));
    ui->lineEdit_13->setText(QString::fromStdString(teilnehmerdaten->getSchulname()));
    ui->lineEdit_14->setText(QString::fromStdString(teilnehmerdaten->getAdresse().strasse));
    ui->lineEdit_15->setText(QString::number(teilnehmerdaten->getAdresse().haussnummer));
    ui->lineEdit_16->setText(QString::number(teilnehmerdaten->getAdresse().postleitzahl));
    ui->lineEdit_17->setText(QString::fromStdString(teilnehmerdaten->getAdresse().stadt));
    ui->lineEdit_18->setText(QString::fromStdString(teilnehmerdaten->getAdresse().land));
    ui->lineEdit_19->setText(QString::fromStdString(teilnehmerdaten->getHaupttelefonnummer()));
    ui->lineEdit_20->setText(QString::fromStdString(teilnehmerdaten->getEMail()));
    string teles = "";
    list<string> teleList = teilnehmerdaten->getWeitereTelefonnummern();
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
    this->hide();
    pwa->show();

}

void View_TeilnehmerTeilnehmerHinzufuegen::on_Versionsverlauf_clicked(){
    View_Versionsverlauf *vv = new View_Versionsverlauf(vater,this->teiln);
    this->hide();
    vv->show();
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_OrganisatorrechteEntfernen_clicked(){
    if(!instanceof<Organisator>(this->teiln)){
              Teilnehmerliste::instance()->vonOrgZuTeilnehmer((Organisator*)this->teiln);
          }else{
              View_Passwortaenderung* tl = new View_Passwortaenderung(vater, teiln);
              tl->show();
              this->close();
          }

//Muss extern abgeändert werden
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_Speichern_clicked(){ //Die Teilnehmerdaten müssen da richtig abgeändert werden
    if(ui->lineEdit_11->text()!=NULL && ui->lineEdit_13->text()!=NULL
            && ui->lineEdit_14->text()!=NULL && ui->lineEdit_15->text()!=NULL
            && ui->lineEdit_16->text()!=NULL && ui->lineEdit_17->text()!=NULL
            && ui->lineEdit_18->text()!=NULL && ui->lineEdit_19->text()!=NULL
            && ui->lineEdit_20->text()!=NULL)
    {
        //Vorsicht, diese teilnehmerdaten sind nicht this->teilnehmerdaten (this->teilnehmerdaten Linke Seite, teilnehmerdaten Recht Seite)
        Teilnehmerdaten* teilnehmerdaten;
        Teilnehmer* teilnehmer;

        teilnehmerdaten = new Teilnehmerdaten();

        if(neuerTn && !hauptorgErstellen){

            teilnehmer = Teilnehmerliste::instance()->teilnehmerErstellen();

        }
        //Neue Teilnehmerdaten zu einem bestehenden Teilnehmer hinzufügen
        else{

            teilnehmer = this->teiln;
        }

        teilnehmerdaten->setVorname(ui->lineEdit_11->text().toStdString());
        teilnehmerdaten->setNachname(ui->lineEdit_12->text().toStdString());
        teilnehmerdaten->setSchulname(ui->lineEdit_13->text().toStdString());
        Adresse adresse;
        adresse.strasse = ui->lineEdit_14->text().toStdString();
        adresse.haussnummer = ui->lineEdit_15->text().toInt();
        adresse.postleitzahl = ui->lineEdit_16->text().toInt();
        adresse.stadt = ui->lineEdit_17->text().toStdString();
        adresse.land = ui->lineEdit_18->text().toStdString();

        teilnehmerdaten->setAdresse(adresse);
        teilnehmerdaten->setHaupttelefonnummer(ui->lineEdit_19->text().toStdString());
        teilnehmerdaten->setEmail(ui->lineEdit_20->text().toStdString());
        QString teleString = ui->lineEdit_21->text();
        QStringList weitereTele = teleString.split(", ");
        list<string> weitereTeleList;

        foreach(QString tel, weitereTele){
            weitereTeleList.push_front(tel.toStdString());
        }

        teilnehmerdaten->setWeitereTelefonnummern(weitereTeleList);
        teilnehmerdaten->setKommentar(ui->Komentar->toPlainText().toStdString());
        teilnehmer->neuenTDEintragEinfuegen(teilnehmerdaten);
    }
}


//void View_TeilnehmerTeilnehmerHinzufuegen::on_zurueck_clicked(){
 //   View_Teilnehmerliste* tl = new View_Teilnehmerliste(vater);
 //   tl->show();
  //  this->close();
//}

//void View_TeilnehmerTeilnehmerHinzufuegen::on_logout_clicked(){
  //  this->destroy();
  //  this->close();
//}

void View_TeilnehmerTeilnehmerHinzufuegen::on_zurueck_2_clicked()
{
    View_Teilnehmerliste* tl = new View_Teilnehmerliste(vater);
    tl->show();
    this->hide();
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_logout_2_clicked()
{
    QApplication::quit();
}
