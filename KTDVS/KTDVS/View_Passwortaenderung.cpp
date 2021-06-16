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


}


View_Passwortaenderung::~View_Passwortaenderung()
{
    delete ui;
}
// ändert nur die Guiansicht
void View_Passwortaenderung::onInit( bool erstanmeldung){

    erstan = erstanmeldung;
    ui -> Fehlermeldung -> setVisible(false);
    ui ->KeineEingabe -> setVisible(false);
    if(erstan){
        // Wenn passwort vom Org geändert werden muss
        ui ->Zurueck -> setDisabled(true);
        ui ->Zurueck -> setVisible(false);
       }else{
        ui -> altesPas -> setVisible(false);
        ui -> altesPasEdit -> setVisible(false);
    }

}


// Wechsel zurück auf den Bildschirm von vorher
void View_Passwortaenderung::on_Zurueck_clicked()
{
    View_Teilnehmerliste* tl = new View_Teilnehmerliste(parent);
    tl->show();
    this->close();
}


// Speichern Button und zurück zum anderen Bildschirm
void View_Passwortaenderung::on_pushButton_clicked()
{

    ui ->KeineEingabe->setVisible(false);
    ui-> Fehlermeldung ->setVisible(false);
    switch(fall){
        case 1: // Fall1= Org muss Passwort ändern beim ersten Anmelden
            {
            if(ui ->altesPasEdit ->text().isEmpty()||ui->neuesPasEdit->text().isEmpty()){
                ui ->KeineEingabe -> setVisible(true);
                return;
            }
            altPas = org ->getPasswort();
            altPasEingabe = ui ->altesPasEdit ->text();
            if(altPas == altPasEingabe.toStdString()){
                neuPasEingabe = ui ->neuesPasEdit -> text();
                org ->setPasswort(neuPasEingabe.toStdString());
                org ->setIsSystempasswort(false);
                Teilnehmerliste::instance()->updateOrganisator(*org);
                View_Teilnehmerliste* tl = new View_Teilnehmerliste(this->parent);
                tl->show();
                this->close();

            }else{
                ui-> Fehlermeldung -> setVisible(true);
            }
            break;
        }
        case 2:  // Fall2= Hauptorg ändert Teilnehmer auf Org
        {
            if(ui->neuesPasEdit->text().isEmpty()){

                ui ->KeineEingabe -> setVisible(true);
                return;
            }
            neuPasEingabe = ui ->neuesPasEdit -> text();

            org =Teilnehmerliste::instance()->vonTeilnZuOrg(teil,neuPasEingabe.toStdString());

            Teilnehmerliste::instance()->updateOrganisator(*org);
            View_Teilnehmerliste* tl = new View_Teilnehmerliste(this->parent);
            tl->show();
            this->close();
            break;
        }
        case 3: //Fall3= Hauptorg ändert Passwort von ORg
        {
            if(ui->neuesPasEdit->text().isEmpty()){

                ui ->KeineEingabe -> setVisible(true);
                return;
            }
            neuPasEingabe = ui ->neuesPasEdit -> text();
            org->setPasswort(neuPasEingabe.toStdString());
            org->setIsSystempasswort(true);
            org->setVersuch(0);
            Teilnehmerliste::instance()->updateOrganisator(*org);

            View_Teilnehmerliste* tl = new View_Teilnehmerliste(this->parent);
            tl->show();
            this->close();

            break;
        }
    }//ende Switchcase


}

