///////////////////////////////////////////////////////////
//  Teilnehmer.cpp
//  Implementation of the Class Teilnehmer
///////////////////////////////////////////////////////////

#include "Teilnehmer.h"
#include "I_DAO_Teilnehmer.h"
#include "DAO_QT_Teilnehmer.h"
#include "DAO_QT_Teilnehmerdaten.h"

    Teilnehmer::Teilnehmer(Teilnehmerdaten teilnehmerdaten){
        this->aktuelleTeilnehmerdaten = &teilnehmerdaten;
        this->TeilnehmerdatenDAO = new DAO_QT_Teilnehmerdaten();
    };

    Teilnehmer::Teilnehmer(){
        this->TeilnehmerdatenDAO = new DAO_QT_Teilnehmerdaten();
        this->aktuelleTeilnehmerdaten = new Teilnehmerdaten();

    };

    Teilnehmer::~Teilnehmer(){

        delete this->aktuelleTeilnehmerdaten;
        list<Teilnehmerdaten*>::iterator it = this->Teilnehmerdatenliste.begin();

        while(it != Teilnehmerdatenliste.end()){
            this->Teilnehmerdatenliste.erase(it);
            delete(*it);
            //it++;
        }
    };

    Teilnehmerdaten* Teilnehmer::getAktuelleTeilnehmerdaten(){
        return this->aktuelleTeilnehmerdaten;
    };

    Teilnehmerdaten* Teilnehmer::aktuelleTeilnehmerdatenErstellen(){

        this->TeilnehmerdatenDAO->selectFirstOfTeilnehmer(this->teilnehmerkey, *this->aktuelleTeilnehmerdaten);
        return this->aktuelleTeilnehmerdaten;
    };

    list<Teilnehmerdaten*>* Teilnehmer::getAlleTeilnehmerdaten(){
        return &(this->Teilnehmerdatenliste);
    };


    list<Teilnehmerdaten*>* Teilnehmer::alleTeilnehmerdatenErstellen(){
         this->TeilnehmerdatenDAO->selectAllOfTeilnehmer(this->teilnehmerkey, this->Teilnehmerdatenliste);
         return &(this->Teilnehmerdatenliste);
    };


    int Teilnehmer::getTeilnehmerkey()const{
        return this->teilnehmerkey;
    };

    void Teilnehmer::setTeilnehmerkey(int neuerTeilnehmerkey){
        this->teilnehmerkey = neuerTeilnehmerkey;
    };

    Organisator* Teilnehmer::login(string email, string passwort){
        DAO_QT_Teilnehmer* DAOTeil;
        DAOTeil ->selectAllOrganisatoren(orglist);
        list<Organisator*>::iterator it;

        for (it = orglist.begin();it != orglist.end();it++){
            org = *it;
            Organisator::Pruefung test = org ->pruefePasswort(email,passwort);
            if (test == Organisator::Pruefung::EMailZutreffendPwRichtig ){
                org -> setVersuch(0);
                return org;
            }
            if(test ==  Organisator::Pruefung::EmailZutreffendPwFalsch){
               int Versuche = org->getVersuch();
               if(Versuche < 4){
               org -> incVersuch();
               }
               return org;
            }

        }
        Organisator* fail = NULL;
        return fail;
    }





