#include "View_Passwortaenderung.h"
#include "ui_View_Passwortaenderung.h"
#include <QDebug>
#include "View_Teilnehmerliste.h"

// Fall1= Org muss Passwort ändern
// Fall2= Hauptorg ändert Teilnehmer auf Org
// Fall3= Hauptorg ändert Passwort von ORg

// FALL: 1 -> Konstruktoraufruf ->  Passwort von Org ändern beim ersten anmelden
// FALL: 3 -> HAUPTORG ändert passwort von ORG
View_Passwortaenderung::View_Passwortaenderung(QWidget *parent, Organisator* teilnehmer) :
    QWidget(parent),
    ui(new Ui::View_Passwortaenderung)
{
    this->parent = parent;
    ui->setupUi(this);
    qDebug() <<"View_Passwortaenderung";
    org = teilnehmer;

    Organisator * HAupt=Teilnehmerliste::instance()->getAktiverNutzer() ;
    if (HAupt->isHauptorganisator()){
        onInit(false);
        fall=3;
    }
    else{
        onInit(true);
        fall=1;
    }
     qDebug() <<"View_Passwortaenderung: ende Konstruktor von Fall 1 &3";
}
//FALL :Konstruktoraufruf -> Teilnehmer zu Organisator befördern
View_Passwortaenderung::View_Passwortaenderung(QWidget *parent, Teilnehmer* teilnehmer) :
    QWidget(parent),
    ui(new Ui::View_Passwortaenderung)
{
    this->parent = parent;
    ui->setupUi(this);
    onInit(false);
    teil= teilnehmer;
    fall=2;
    qDebug() <<"View_Passwortaenderung: Teilnehmer zu ORganisator befördern";
    //Teilnehmerliste::instance()->vonTeilnZuOrg(teiln,"SYSTEMPASSWORT");
}


View_Passwortaenderung::~View_Passwortaenderung()
{
    delete ui;
}
// ändert nur die Guiansicht
void View_Passwortaenderung::onInit( bool erstanmeldung){

    erstan = erstanmeldung;
    ui -> Fehlermeldung -> setVisible(false);
    if(erstan){ // Wenn passwort vom ORg geändert werden muss
        ui ->Zurueck -> setDisabled(true);
        ui ->Zurueck -> setVisible(false);
       }else{
        ui -> altesPas -> setVisible(false);
        ui -> altesPasEdit -> setVisible(false);
    }

}


// wechsel zurück auf den Bildschirm von vorher
void View_Passwortaenderung::on_Zurueck_clicked()
{
    View_Teilnehmerliste* tl = new View_Teilnehmerliste(parent);
    tl->show();
    this->hide();
}


// Speichern Button und zurück zum anderen Bildschirm
void View_Passwortaenderung::on_pushButton_clicked()
{
    qDebug() <<"View_Passwortaenderung: Button wird geklickt";
    switch(fall){
        case 1: // Fall1= Org muss Passwort ändern beim ersten Anmelden
        {   qDebug() <<"case1";
            altPas = org ->getPasswort();
            altPasEingabe = ui ->altesPasEdit ->text();
            if(altPas == altPasEingabe.toStdString()){
                neuPasEingabe = ui ->neuesPasEdit -> text();
                org ->setPasswort(neuPasEingabe.toStdString());
                org ->setIsSystempasswort(false);
                bool updated = Teilnehmerliste::instance()->updateOrganisator(*org);
                qDebug()<<"MUHAHAHAHAHHAHAHAHAHAHAHHAHAH"<<updated;
                View_Teilnehmerliste* tl = new View_Teilnehmerliste(this->parent); //statt 'this' muss es vermutlich eine globale Var mit dem Hauptfenster geben.
                tl->show();
                this->hide();

            }else{
                ui-> Fehlermeldung -> setVisible(true);
            }
            break;
        }
        case 2:  // Fall2= Hauptorg ändert Teilnehmer auf Org
        {   qDebug() <<"case2";
            neuPasEingabe = ui ->neuesPasEdit -> text();
            qDebug() <<"Passwort wurde aus der Gui geholt";
            org =Teilnehmerliste::instance()->vonTeilnZuOrg(teil,neuPasEingabe.toStdString());
            bool updated = Teilnehmerliste::instance()->updateOrganisator(*org);
            qDebug()<<"MUHAHAHAHAHHAHAHAHAHAHAHHAHAH"<<updated;
            qDebug() <<"Teilnehmer wurde zum Organisator gemacht";
            View_Teilnehmerliste* tl = new View_Teilnehmerliste(this->parent); //statt 'this' muss es vermutlich eine globale Var mit dem Hauptfenster geben.
            tl->show();
            this->hide();
            break;
        }
        case 3: //Fall3= Hauptorg ändert Passwort von ORg
        {   qDebug() <<"case3";
            neuPasEingabe = ui ->neuesPasEdit -> text();
            org->setPasswort(neuPasEingabe.toStdString());
            org->setIsSystempasswort(true);
            bool updated = Teilnehmerliste::instance()->updateOrganisator(*org);
            qDebug()<<"MUHAHAHAHAHHAHAHAHAHAHAHHAHAH"<<updated;
            View_Teilnehmerliste* tl = new View_Teilnehmerliste(this->parent); //statt 'this' muss es vermutlich eine globale Var mit dem Hauptfenster geben.
            tl->show();
            this->hide();

            break;
        }
    }//ende Switchcase


}

