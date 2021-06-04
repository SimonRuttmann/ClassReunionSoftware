#include "View_Einloggen.h"
#include "ui_View_Einloggen.h"
#include "Organisator.h"

View_Einloggen::View_Einloggen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::View_Einloggen)
{
    ui->setupUi(this);
}

View_Einloggen::~View_Einloggen()
{
    delete ui;
}
void View_Einloggen::onInit(){
     ui-> Fehlermeldung -> setVisible(false);
}

//ggf. Strings konvertieren: QString::fromStdString(ss), qs.toStdString(ss)
void View_Einloggen::on_pushButton_clicked() // LoginButton
{
    passwort = ui -> Passwort_Edit -> text();
    eMail = ui -> EMail_Edit -> text();

    teilnehmer = sucheTeilnehmer(passwort.toStdString());
    if(teilnehmer == NULL){
        ui -> Fehlermeldung -> setVisible(true);
    }
    // hier abprüfen ob passwort stimmt

}

