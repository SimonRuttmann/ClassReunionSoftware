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
