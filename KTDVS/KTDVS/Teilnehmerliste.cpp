///////////////////////////////////////////////////////////
//  Teilnehmerliste.cpp
//  Implementation of the Class Teilnehmerliste
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#include "Teilnehmerliste.h"


Teilnehmerliste::Teilnehmerliste(){
    this->TeilnehmerDAO = new Qt_DAO_Teilnehmer();
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
    return organisator;
};

Teilnehmerliste* Teilnehmerliste::instance(){
    if(uniqueInstance == nullptr){
       uniqueInstance = new Teilnehmerliste();
    }
    return uniqueInstance;
};

list<Teilnehmer*>* Teilnehmerliste::getTeilnehmerliste(){return &(this->teilnehmerliste);};

//      Teilnehmer      3843
//          ^
//          |
//      Pointer Teilnehmer zeigt auf 3843, hat 934934
//
