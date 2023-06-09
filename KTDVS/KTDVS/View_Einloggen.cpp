#include "View_Einloggen.h"
#include "ui_View_Einloggen.h"
#include "Teilnehmerliste.h"

#include "Organisator.h"
#include "View_ErsterSystemstart.h"
#include <QDebug>


View_Einloggen::View_Einloggen(QWidget *parent, bool isNeu, bool direkterStart) :
    QWidget(parent),
    ui(new Ui::View_Einloggen)
{

    this->parent = parent;
    this->isNeu = isNeu;
    ui->setupUi(this);
    if(direkterStart) {
        ui->zurueck->setVisible(false);
        ui->logout_2->setVisible(false);
    }
    this->onInit();
}

View_Einloggen::~View_Einloggen()
{
    delete ui;
}

void View_Einloggen::onInit(){
    if(this->isNeu){
        ui ->Login ->setText("Hauptorganisator erstellen");
        ui->EMail->setVisible(false);
        ui->Labl1->setVisible(false);
    }
    ui->LabelOben->setVisible(false);
    ui->LabelUnten->setVisible(false);
    ui->LabelOben->setStyleSheet("Color:yellow");
    ui->LabelUnten->setStyleSheet("Color:yellow");
}



void View_Einloggen::on_Login_clicked()
{

    ui->LabelOben->setVisible(false);
    ui->LabelUnten->setVisible(false);
    // Fall:Hauptorganisator erstellen
    if(this->isNeu){
        if(ui ->Passwort ->text().isEmpty()){

            ui->LabelOben->setText("Bitte füllen Sie alle Felder erst aus.");
            ui->LabelOben->setVisible(true);

            return;
        }
        passwort = ui ->Passwort -> text();

        passwortString =passwort.toStdString();

        Haupt = Teilnehmerliste::instance()->organisatorErstellen(passwortString, true);
        Teilnehmerliste::instance()->aktiverNutzer = Haupt;

        View_TeilnehmerTeilnehmerHinzufuegen* teilHin = new View_TeilnehmerTeilnehmerHinzufuegen(this->parent, Haupt, true, true);
        teilHin->show();
        this->close();
    }
    else{
        // Fall : normales Anmelden
        if(ui ->Passwort ->text().isEmpty()||ui->EMail->text().isEmpty()){

            ui->LabelOben->setText("Bitte füllen Sie alle Felder erst aus.");
            ui->LabelOben->setVisible(true);
            return;
        }
        passwort = ui ->Passwort -> text();
        eMail = ui -> EMail -> text();
        passwortString =passwort.toStdString();
        eMailString =eMail.toStdString();



        list<Organisator*>* orglist = Teilnehmerliste::instance()->getOrganisatorliste();
        list<Organisator*>::iterator it;

        for (it = (*orglist).begin();it != (*orglist).end();it++)
        {


            org = *it;
            Organisator::Pruefung test = org ->pruefePasswort(passwortString,eMailString);

            //Richtes PW
            if (test == Organisator::Pruefung::EMailZutreffendPwRichtig && org->getVersuch() < 3){
                org -> setVersuch(0);
                Teilnehmerliste::instance()->updateOrganisator(*org);
                Teilnehmerliste::instance()->aktiverNutzer = org;

                 //SZENE wechseln zu Teilnehmerliste
                if(org->isSystempasswort() && !org->isHauptorganisator()){

                    View_Passwortaenderung* pa = new View_Passwortaenderung(this->parent,org);
                    pa->show();
                    this->close();

                    return;
                }else{

                    View_Teilnehmerliste* tl = new View_Teilnehmerliste(this->parent);
                    tl->show();
                    this->close();
                    return;
                }


            } // ende if richtiger Passwort

            //Falsches PW
            if(test ==  Organisator::Pruefung::EmailZutreffendPwFalsch){
               int Versuche = org->getVersuch();

               //Gesperrt
               if(Versuche >= 2 && !org->isHauptorganisator()){

                    Teilnehmerliste::instance()->updateOrganisator(*org);
                    ui->LabelOben->setText("Passwort wurde zu oft falsch Eingegeben.");
                    ui->LabelUnten->setText("Bitte melden Sie sich beim Hauptorganisator.");
                    ui->LabelOben->setVisible(true);
                    ui->LabelUnten->setVisible(true);

                    return;
               }

               //Fehleingabe
               org -> incVersuch();
                Teilnehmerliste::instance()->updateOrganisator(*org);
               if(org->isHauptorganisator()){
                   QString output= "Falsches Passwort. Das wird Ihr x Versuch sein";
                   output.replace("x",QString::number( org ->getVersuch()+1));
                   ui->LabelOben->setText(output);

               }else{
                   QString ausgabe= "Falsches Passwort.Das wird Ihr x/3 Versuch sein.";
                   ausgabe.replace("x",QString::number( org ->getVersuch()+1));
                    ui->LabelOben->setText(ausgabe);

               }

               ui->LabelUnten->setText("Bitte versuchen Sie es erneut.");
               ui->LabelOben->setVisible(true);
               ui->LabelUnten->setVisible(true);

               return;
            }

            if( test == Organisator::Pruefung::EMailZutreffendPwRichtig && org->getVersuch() >= 3 ){
                if(!org->isHauptorganisator()){
                    //ist schon gesperrt keine erhöhung nötig
                    ui->LabelOben->setText("Passwort wurde zu oft falsch Eingegeben.");
                    ui->LabelUnten->setText("Bitte melden Sie sich beim Hauptorganisator.");
                    ui->LabelOben->setVisible(true);
                    ui->LabelUnten->setVisible(true);

                    return;
                }else{
                    org -> setVersuch(0);
                    Teilnehmerliste::instance()->updateOrganisator(*org);
                    Teilnehmerliste::instance()->aktiverNutzer = org;

                    View_Teilnehmerliste* tl = new View_Teilnehmerliste(this->parent);
                    tl->show();
                    this->close();

                    return;  
                }

            }
        }   //Ende For
        ui->LabelOben->setText("Fehlerhafte Eingabe.");
        ui->LabelUnten->setText("Bitte versuchen Sie es erneut.");
        ui->LabelOben->setVisible(true);
        ui->LabelUnten->setVisible(true);

    }   //Ende Else
}


void View_Einloggen::on_zurueck_clicked()
{
    View_ErsterSystemstart* ersterSystemstart = new View_ErsterSystemstart(parent);
    ersterSystemstart->show();
    this->close();
}
