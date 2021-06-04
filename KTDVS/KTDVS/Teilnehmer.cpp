///////////////////////////////////////////////////////////
//  Teilnehmer.cpp
//  Implementation of the Class Teilnehmer
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#include "Teilnehmer.h"
#include "I_DAO_Teilnehmer.h"
#include "Qt_DAO_Teilnehmer.h"
#include "Qt_DAO_Teilnehmerdaten.h"

    Teilnehmer::Teilnehmer(Teilnehmerdaten teilnehmerdaten){
        this->aktuelleTeilnehmerdaten = &teilnehmerdaten;
        this->TeilnehmerdatenDAO = new Qt_DAO_Teilnehmerdaten();
    };

    Teilnehmer::Teilnehmer(){
        this->TeilnehmerdatenDAO = new Qt_DAO_Teilnehmerdaten();
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



