#include "View_Passwortaenderung.h"
#include "ui_View_Passwortaenderung.h"

View_Passwortaenderung::View_Passwortaenderung(QWidget *parent, Organisator* teilnehmer) :
    QWidget(parent),
    ui(new Ui::View_Passwortaenderung)
{
    ui->setupUi(this);
}
//Konstruktoraufruf -> Teilnehmer zu Organisator befördern
View_Passwortaenderung::View_Passwortaenderung(QWidget *parent, Teilnehmer* teilnehmer) :
    QWidget(parent),
    ui(new Ui::View_Passwortaenderung)
{
    ui->setupUi(this);
    //Teilnehmerliste::instance()->vonTeilnZuOrg(teiln,"SYSTEMPASSWORT");
}


View_Passwortaenderung::~View_Passwortaenderung()
{
    delete ui;
}

void View_Passwortaenderung::onInit(Organisator * OrgMitNeuPas, bool erstanmeldung){
    org = OrgMitNeuPas;
    erstan = erstanmeldung;
    ui -> Fehlermeldung -> setVisible(false);
    if(!erstan){ // Wenn HO PASSWORT ändert
        ui -> altesPas -> setVisible(false);
        ui -> altesPasEdit -> setVisible(false);
        ui ->Zurueck -> setDisabled(true);
        ui ->Zurueck -> setVisible(false);
       }



}


// wechsel zurück auf den Bildschirm von vorher
void View_Passwortaenderung::on_Zurueck_clicked()
{

}


// Speichern Button und zurück zum anderen Bildschirm
void View_Passwortaenderung::on_pushButton_clicked()
{
    if(erstan){
        altPas = org ->getPasswort();
        altPasEingabe = ui ->altesPasEdit ->text();
        if(altPas == altPasEingabe.toStdString()){
            neuPasEingabe = ui ->neuesPasEdit -> text();
            org ->setPasswort(neuPasEingabe.toStdString());
            org ->setIsSystempasswort(false);
            // Wechsel auf Teilnehmerliste
        }else{
           ui-> Fehlermeldung -> setVisible(true);
        }

    }else{ // Wieder zurück zum Teilnehmer DEtailansicht Wechseln
    neuPasEingabe = ui ->neuesPasEdit -> text();
    org->setPasswort(neuPasEingabe.toStdString());
    org->setIsSystempasswort(true);
   }
}

