///////////////////////////////////////////////////////////
//  Teilnehmerliste.cpp
//  Implementation of the Class Teilnehmerliste
///////////////////////////////////////////////////////////

#include "Teilnehmerliste.h"


Teilnehmerliste::Teilnehmerliste(){
    this->TeilnehmerDAO = new DAO_QT_Teilnehmer();

    this->TeilnehmerDAO->selectAllTeilnehmer(teilnehmerliste);
    this->TeilnehmerDAO->selectAllOrganisatoren(organisatorliste);
}


Teilnehmerliste::~Teilnehmerliste(){
    delete aktiverNutzer;
    delete this->TeilnehmerDAO;
    list<Teilnehmer*>::iterator it = this->teilnehmerliste.begin();

    while(it != teilnehmerliste.end()){
        this->teilnehmerliste.erase(it);
        delete(*it);
        //it++;
    }


    //Organisatorliste wird nicht gelöscht, da
    //alle Organisatoren in der Teilnehmerliste sind
    //-> Liste an Nullpointern
}



Teilnehmer* Teilnehmerliste::getAktiverNutzer(){return this->aktiverNutzer;};
void Teilnehmerliste::setAktiverNutzer(Teilnehmer* newVal) {this->aktiverNutzer = newVal;};

Teilnehmer* Teilnehmerliste::teilnehmerErstellen(){
    Teilnehmer* teilnehmer = new Teilnehmer();

    this->TeilnehmerDAO->insertTeilnehmer(*teilnehmer);
    this->teilnehmerliste.push_back(teilnehmer);
    return teilnehmer;
};



Organisator* Teilnehmerliste::organisatorErstellen(string passwort, bool isHauptorganisator){
    Organisator* organisator = new Organisator(passwort, isHauptorganisator);

    this->TeilnehmerDAO->insertOrganisator(*organisator);
    this->teilnehmerliste.push_back(organisator);
    this->organisatorliste.push_back(organisator);
    return organisator;
};

//Initialize of static member
Teilnehmerliste* Teilnehmerliste::uniqueInstance = 0;

Teilnehmerliste* Teilnehmerliste::instance(){
    if(!uniqueInstance){
       uniqueInstance = new Teilnehmerliste();
    }
    return uniqueInstance;
};


bool Teilnehmerliste::updateOrganisator(Organisator& organisator){
    return this->TeilnehmerDAO->updateOrganisator(organisator);
};

bool Teilnehmerliste::updateTeilnehmer(Teilnehmer& teilnehmer){
    return this->TeilnehmerDAO->updateTeilnehmer(teilnehmer);
};

list<Organisator*>* Teilnehmerliste::getOrganisatorliste(){return &(this->organisatorliste);};

list<Teilnehmer*>* Teilnehmerliste::getTeilnehmerliste(){return &(this->teilnehmerliste);};

//      Teilnehmer      3843
//          ^
//          |
//      Pointer Teilnehmer zeigt auf 3843, hat 934934
//
/*
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


Organisator* login(string email, string passwort); //VERo
list<Organisator*> orglist; //Vero
Organisator *org; //VERo
*/
