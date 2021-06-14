#include "View_Einloggen.h"
#include "ui_View_Einloggen.h"
#include "Teilnehmerliste.h"
//puerefeee
#include "Organisator.h"

// -> ui-> Fehlermeldung -> setVisible(false);

View_Einloggen::View_Einloggen(QWidget *parent, bool isNeu) :
    QWidget(parent),
    ui(new Ui::View_Einloggen)
{
    this->parent = parent;
    this->isNeu = isNeu;
    ui->setupUi(this);
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
    if(this->isNeu){
        passwort = ui ->Passwort -> text();
       // eMail = ui -> EMail -> text();
        passwortString =passwort.toStdString();
       // eMailDatenbank =eMail.toStdString();
        Haupt = Teilnehmerliste::instance()->organisatorErstellen(passwortString, true);
        Teilnehmerliste::instance()->aktiverNutzer = Haupt;

        View_TeilnehmerTeilnehmerHinzufuegen* teilHin = new View_TeilnehmerTeilnehmerHinzufuegen(this->parent, Haupt, true, true);
        teilHin->show();
        this->hide();
    }
    else{

        // Fall : normales Anmelden
        passwort = ui ->Passwort -> text();
        eMail = ui -> EMail -> text();
        passwortString =passwort.toStdString();
        eMailString =eMail.toStdString();
        //org = subjekt ->login(eMailDatenbank,passwortString);


        list<Organisator*>* orglist = Teilnehmerliste::instance()->getOrganisatorliste();
        list<Organisator*>::iterator it;

        for (it = (*orglist).begin();it != (*orglist).end();it++)
        {
            org = *it;
            Organisator::Pruefung test = org ->pruefePasswort(eMailString,passwortString);

            //Richtes PW
            if (test == Organisator::Pruefung::EMailZutreffendPwRichtig && org->getVersuch() < 3){
                org -> setVersuch(0);
                Teilnehmerliste::instance()->aktiverNutzer = org;
                 //SZENE wechseln zu Teilnehmerliste
                if(org->isSystempasswort()){


                    View_Passwortaenderung* pa = new View_Passwortaenderung(this->parent,org);
                    pa->show();
                    this->hide();


                    return;
                }else{

                    View_Teilnehmerliste* tl = new View_Teilnehmerliste(this->parent);
                    tl->show();
                    this->hide();
                    return;
                }


            }
            //Falsches PW
            if(test ==  Organisator::Pruefung::EmailZutreffendPwFalsch){
               int Versuche = org->getVersuch();

               //Gesperrt
               if(Versuche >= 2){
                    org -> incVersuch(); //Versuch auf 3 gesetzt -> Gesperrt
                    ui->Gesperrt -> setVisible(true);
                    return;
               }

               //Fehleingabe
               ui ->FalschesPasswort -> setVisible(true);
               return;
            }
        }   //Ende For
        ui ->Fehlerausgabe -> setVisible(true);
    }   //Ende Else
}


void View_Einloggen::on_zurueck_clicked()
{

}
