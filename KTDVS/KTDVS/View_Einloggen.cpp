#include "View_Einloggen.h"
#include "ui_View_Einloggen_test.h"
#include "Teilnehmerliste.h"
//puerefeee
#include "Organisator.h"

// -> ui-> Fehlermeldung -> setVisible(false);

View_Einloggen::View_Einloggen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::View_Einloggen)
{
    ui->setupUi(this);
}

View_Einloggen::~View_Einloggen()
{
    delete ui;
}

void View_Einloggen::onInit(){
    if(neuesSystem){
        ui ->Login ->setText("Hauptorganisator erstellen");
    }
    ui ->Fehlerausgabe -> setVisible(false);
    ui ->FalschesPasswort -> setVisible(false);
    ui ->Gesperrt ->setVisible(false);
}

//ggf. Strings konvertieren: QString::fromStdString(ss), qs.toStdString(ss)


void View_Einloggen::on_Login_clicked()
{
    // alle Meldungen unsichbar machen, aus Sicherheit
    ui ->Fehlerausgabe -> setVisible(false);
    ui ->FalschesPasswort -> setVisible(false);
    ui ->Gesperrt ->setVisible(false);
    // Fall:Hauptorganisator erstellen  Hier grade sehr viel Rechnerei
    if(neuesSystem){
        passwort = ui ->Passwort -> text();
       // eMail = ui -> EMail -> text();
        passwortString =passwort.toStdString();
       // eMailDatenbank =eMail.toStdString();
        Haupt = Teilnehmerliste::instance()->organisatorErstellen(passwortString, true);

        // !! noch nicht fertig hier

        // wechsel zu Daten Eingeben vom HAuptorganisator

    }
    else{

    // Fall : normales Anmelden
    passwort = ui ->Passwort -> text();
    eMail = ui -> EMail -> text();
    passwortString =passwort.toStdString();
    eMailDatenbank =eMail.toStdString();
    org = subjekt ->login(eMailDatenbank,passwortString);
    if(org == NULL){

        ui ->Fehlerausgabe -> setVisible(true);
    }
    int i =org -> getVersuch();
    if(i != 0 && i < 4  ){
        //Passwort falsch nur

        ui ->FalschesPasswort -> setVisible(true);
    }
    if(i == 4){
        //Nutzer wurde gesperrt
       ui->Gesperrt -> setVisible(true);
    }
    if(i == 0){
        //SZENE wechseln zu Teilnehmerliste

    }
    }




}

