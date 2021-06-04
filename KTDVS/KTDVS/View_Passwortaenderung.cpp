#include "View_Passwortaenderung.h"
#include "ui_View_Passwortaenderung.h"

View_Passwortaenderung::View_Passwortaenderung(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::View_Passwortaenderung)
{
    ui->setupUi(this);
}


void View_Passwortaenderung::onAbbrechen() // Geht es
{

}



void View_Passwortaenderung::onInit()
{
  ui->Fehlermeldung_lable -> setVisible(false);
}

View_Passwortaenderung::~View_Passwortaenderung()
{
    delete ui;
}


//ggf. Strings konvertieren: QString::fromStdString(ss), qs.toStdString(ss)

void View_Passwortaenderung::on_Zueck_Button_clicked()
{

}


void View_Passwortaenderung::on_Speichern_Button_clicked()
{
    if(erstesAnmelden){
        altesPasswortEingabe = ui -> altesPass_Edit -> text();
        altespassNormString = angemeldeterOrganisator.getPasswort();
        altesPasswortDatenbank= QString::fromStdString(altespassNormString);

        neuesPasswort = ui -> neuesPass_Edit -> text();

        if (altesPasswortEingabe == altespassNormString){
            altespassNormString = neuesPasswort.toStdString();
            angemeldeterOrganisator.setPasswort(altespassNormString);
        }
        else{
            ui->Fehlermeldung_lable -> setVisible(false);
        }
    }else{
        altespassNormString = neuesPasswort.toStdString();  // wenn HO neues PAsswort verbigt
        angemeldeterOrganisator.Setpasswort(altespassNormString);

    }
}
