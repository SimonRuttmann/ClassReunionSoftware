#include "View_TeilnehmerTeilnehmerHinzufuegen.h"
#include "View_Versionsverlauf.h"

#include "View_Teilnehmerliste.h"
#include "ui_View_TeilnehmerTeilnehmerHinzufuegen.h"
#include "DAO_QT_Teilnehmer.h"
#include <QtDebug>
#include <iostream>
//Hauptorganisator wird erstellt -> Teilnehemr = HO, "neuer Teilnehmer = true, da keine TD
View_TeilnehmerTeilnehmerHinzufuegen::View_TeilnehmerTeilnehmerHinzufuegen(
    QWidget* parent, Teilnehmer* aktuellerTeilnehmer,
    bool neuerTeilnehmer, bool hauptorganisatorErstellen) :


    QWidget(parent),
    ui(new Ui::View_TeilnehmerTeilnehmerHinzufuegen)
{
    qDebug()<< "object erstellt";
    ui->setupUi(this);

    //qDebug() << aktuellerTeilnehmer->getTeilnehmerkey();
    //bool isOrg = true;
    //qDebug() << "teseest";
//    if(aktuellerTeilnehmer != nullptr && aktuellerTeilnehmer != NULL){
//        Organisator* murks = (Organisator*)aktuellerTeilnehmer;
//        try{murks->getPasswort();}catch(exception e){isOrg = false;}
//    }
//    else{
//        isOrg = false;
//    }
//    bool isOrg = false;
//    //dynamic_cast
//    Organisator* org = static_cast<Organisator*>(aktuellerTeilnehmer);
//    if(org){
//        isOrg = true;
//    }


    //Check if Organisator
    this->isOrg = false;
    if(aktuellerTeilnehmer != nullptr){
        list<Organisator*> orgsl = *Teilnehmerliste::instance()->getOrganisatorliste();
        list<Organisator*>::iterator it;
        for (it = orgsl.begin(); it!=orgsl.end(); it++){
            if( (*it)->getTeilnehmerkey() == aktuellerTeilnehmer->getTeilnehmerkey()){
                isOrg = true;
                break;
            }
        }
    }



    qDebug() << "isOrg: " <<isOrg;

    if(isOrg){
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


    neuerTn = neuerTeilnehmer;
    if(aktuellerTeilnehmer != nullptr){
    teiln = aktuellerTeilnehmer;
}
    this->hauptorgErstellen = hauptorganisatorErstellen;
    vater = parent;

    if(this->hauptorgErstellen) {
        ui->zurueck_2->setEnabled(false);
        ui->Versionsverlauf->setEnabled(false);
        ui->OrganisatorrechteEntfernen->setEnabled(false);
    }
    //kein neuer Teilnehmer, bisherige Daten anzeigen
    if(!neuerTeilnehmer){
        ui->Versionsverlauf->setEnabled(false);
        qDebug()<<"des neue tut dinge";
    //Kein neuer Teilnehmer -> Teilnehmerdaten sind erhalten
    teilnehmerdaten = teiln->aktuelleTeilnehmerdatenVonDBErhalten();
        qDebug()<<"des Daten erhalten klappt";
        oldEmail = teilnehmerdaten->getEMail();
        qDebug()<<"getEmail hat geklappt";
        if(teilnehmerdaten->getVorname()!= "")ui->lineEdit_11->setText(QString::fromStdString(teilnehmerdaten->getVorname()));
        if(teilnehmerdaten->getNachname()!= "")ui->lineEdit_12->setText(QString::fromStdString(teilnehmerdaten->getNachname()));
        if(teilnehmerdaten->getSchulname()!= "")ui->lineEdit_13->setText(QString::fromStdString(teilnehmerdaten->getSchulname()));
        if(teilnehmerdaten->getAdresse().strasse!= "")ui->lineEdit_14->setText(QString::fromStdString(teilnehmerdaten->getAdresse().strasse));
        ui->lineEdit_15->setText(QString::number(teilnehmerdaten->getAdresse().haussnummer));
        ui->lineEdit_16->setText(QString::number(teilnehmerdaten->getAdresse().postleitzahl));
        if(teilnehmerdaten->getAdresse().stadt != "")ui->lineEdit_17->setText(QString::fromStdString(teilnehmerdaten->getAdresse().stadt));
        if(teilnehmerdaten->getAdresse().land!= "")ui->lineEdit_18->setText(QString::fromStdString(teilnehmerdaten->getAdresse().land));
        if(teilnehmerdaten->getHaupttelefonnummer()!= "")ui->lineEdit_19->setText(QString::fromStdString(teilnehmerdaten->getHaupttelefonnummer()));
        if(teilnehmerdaten->getEMail()!= "")ui->lineEdit_20->setText(QString::fromStdString(teilnehmerdaten->getEMail()));
        if(teilnehmerdaten->getKommentar() != "")ui->Komentar->setText(QString::fromStdString(teilnehmerdaten->getKommentar()));
        qDebug()<<"daten ohne weittelnr hat geklappt";
        if(!teilnehmerdaten->getWeitereTelefonnummern().empty()){
            string teles = "";
            list<string> teleList = teilnehmerdaten->getWeitereTelefonnummern();
            list<string>::iterator it = teleList.begin();
            string teleListarray[(int)teleList.size()];
            int i=0;
            while (it != teleList.end()){
                teles.append((*it));
                teles.append(", ");
                teleListarray[i]= *it;
                i++;
                it++;
            }
            ui->lineEdit_21->setText(QString::fromStdString(teles));

        }
    }
    else{
         ui->Versionsverlauf->setEnabled(false);
         ui->OrganisatorrechteEntfernen->setEnabled(false);
         ui->PwAndern->setEnabled(false);
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
    this->close();
    pwa->show();

}

void View_TeilnehmerTeilnehmerHinzufuegen::on_Versionsverlauf_clicked(){
    View_Versionsverlauf *vv = new View_Versionsverlauf(vater,this->teiln);
    this->close();
    vv->show();
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_OrganisatorrechteEntfernen_clicked(){
    //!instanceof<Organisator>(this->teiln)
    if(this->isOrg){
              qDebug()<<"Rufe von Org zu Teilnehmer auf";
              Teilnehmerliste::instance()->vonOrgZuTeilnehmer((Organisator*)this->teiln);
          }else{
              View_Passwortaenderung* tl = new View_Passwortaenderung(vater, teiln);
              tl->show();
              this->close();
          }

//Muss extern abgeändert werden
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_Speichern_clicked(){ //Die Teilnehmerdaten müssen da richtig abgeändert werden

    list<Teilnehmer*> teilnehmerliste = *Teilnehmerliste::instance()->getTeilnehmerliste();
    list<Teilnehmer*>::iterator i;
    isValid=true;
    for ( i = teilnehmerliste.begin(); i != teilnehmerliste.end(); i++)
    {
        if((*i)->getAktuelleTeilnehmerdaten()->getEMail() == ui->lineEdit_20->text().toStdString())
        {
            isValid = false;
            break;
        }
    }
    if(ui->lineEdit_20->text().toStdString() == oldEmail) isValid=true;

    if(ui->lineEdit_11->text()!=NULL && ui->lineEdit_13->text()!=NULL
            && ui->lineEdit_14->text()!=NULL && ui->lineEdit_15->text()!=NULL
            && ui->lineEdit_16->text()!=NULL && ui->lineEdit_17->text()!=NULL
            && ui->lineEdit_18->text()!=NULL && ui->lineEdit_19->text()!=NULL
            && ui->lineEdit_20->text()!=NULL && intcheck(ui->lineEdit_15->text().toStdString())
            && intcheck(ui->lineEdit_16->text().toStdString()) && isValid)
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
        teilnehmerdaten->setKommentar(ui->Komentar->toPlainText().toStdString());

        QString teleString;
        if(addnumberamount == 0){
           teleString = ui->lineEdit_21->text();
        }else{
            if(ui->lineEdit_21->text()!= NULL && ui->lineEdit_21->text().toStdString() != ""){
                addnumber.append(", " +ui->lineEdit_21->text());
            }
            teleString = addnumber;
        }

        QStringList weitereTele = teleString.split(", ");
        list<string> weitereTeleList;

        foreach(QString tel, weitereTele){
            if(tel.toStdString() != "" && tel != NULL){
             weitereTeleList.push_front(tel.toStdString());
            }
        }

        teilnehmerdaten->setWeitereTelefonnummern(weitereTeleList);
        teilnehmerdaten->setKommentar(ui->Komentar->toPlainText().toStdString());
        teilnehmer->neuenTDEintragEinfuegen(teilnehmerdaten);

        //Szenenuebergang -> View Teilnehmerliste
        View_Teilnehmerliste* tl = new View_Teilnehmerliste(this->vater);
        tl->show();
        this->close();
        return;
    }
    fehlermeldung();
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
    this->close();
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_logout_2_clicked()
{
    DAO_QT_Teilnehmer name;
    if(hauptorgErstellen)name.remove(teiln->getTeilnehmerkey());
    QApplication::quit();
}

void View_TeilnehmerTeilnehmerHinzufuegen::on_AddPhoneNumber_clicked(){
    if(ui->lineEdit_21->text() == NULL || ui->lineEdit_21->text().toStdString() == ""){
        return;
    }
   addnumberamount++;
   addnumber.append(ui->lineEdit_21->text()+ ", ");
   ui->lineEdit_21->setText("");
   ui->label_2->setText("Hinzugefügte weitere Telefonnummern: " + QString::fromStdString(to_string(addnumberamount)));
}

void View_TeilnehmerTeilnehmerHinzufuegen::fehlermeldung(){
    if(ui->lineEdit_11->text()==NULL) ui->lineEdit_11->setPlaceholderText("Plichtangabe");
    if(ui->lineEdit_13->text()==NULL) ui->lineEdit_13->setPlaceholderText("Plichtangabe");
    if(ui->lineEdit_14->text()==NULL) ui->lineEdit_14->setPlaceholderText("Plichtangabe");
    if(ui->lineEdit_15->text()==NULL) ui->lineEdit_15->setPlaceholderText("Plichtangabe");
    if(ui->lineEdit_16->text()==NULL) ui->lineEdit_16->setPlaceholderText("Plichtangabe");
    if(ui->lineEdit_17->text()==NULL) ui->lineEdit_17->setPlaceholderText("Plichtangabe");
    if(ui->lineEdit_18->text()==NULL) ui->lineEdit_18->setPlaceholderText("Plichtangabe");
    if(ui->lineEdit_19->text()==NULL) ui->lineEdit_19->setPlaceholderText("Plichtangabe");
    if(ui->lineEdit_20->text()==NULL) ui->lineEdit_20->setPlaceholderText("Plichtangabe");
    if(!isValid){
            ui->lineEdit_20->setText("");
            ui->lineEdit_20->setPlaceholderText("Email schon vergeben");
    }
    if(!intcheck(ui->lineEdit_15->text().toStdString())){
        ui->lineEdit_15->setText("");
        ui->lineEdit_15->setPlaceholderText("Muss eine Zahl sein");
    }
    if(!intcheck(ui->lineEdit_16->text().toStdString())){
        ui->lineEdit_16->setText("");
        ui->lineEdit_16->setPlaceholderText("Muss eine Zahl sein");
    }

}

bool View_TeilnehmerTeilnehmerHinzufuegen::intcheck(string teststr) //gibt true wenns eine Zahl ist
{

    for(int i=0 ; i<(int)teststr.size();i++){
        if(!isdigit(teststr[i])){
            return false;
        }
    }
    return true;
}
