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

        this->TeilnehmerDAO = new Qt_DAO_Teilnehmer();
        this->TeilnehmerdatenDAO = new Qt_DAO_Teilnehmerdaten();

        this->Teilnehmerdatenliste = new list<Teilnehmerdaten*>();
    };

    Teilnehmer::Teilnehmer(){
        this->TeilnehmerDAO = new Qt_DAO_Teilnehmer();
        this->TeilnehmerdatenDAO = new Qt_DAO_Teilnehmerdaten();

        this->aktuelleTeilnehmerdaten = new Teilnehmerdaten();
        this->Teilnehmerdatenliste = new list<Teilnehmerdaten*>();
    };

    Teilnehmer::~Teilnehmer(){
        delete this->Teilnehmerdatenliste;
        delete this->aktuelleTeilnehmerdaten;
        delete this->TeilnehmerDAO;
    };

    Teilnehmerdaten* Teilnehmer::getAktuelleTeilnehmerdaten(){
        return this->aktuelleTeilnehmerdaten;
    };

    Teilnehmerdaten* Teilnehmer::aktuelleTeilnehmerdatenErstellen(){

        this->TeilnehmerdatenDAO->selectFirstOfTeilnehmer(this->teilnehmerkey, *this->aktuelleTeilnehmerdaten);
        return this->aktuelleTeilnehmerdaten;
    };

    list<Teilnehmerdaten*>* Teilnehmer::getAlleTeilnehmerdaten(){
        this->TeilnehmerdatenDAO->selectAllOfTeilnehmer()
    };
    list<Teilnehmerdaten*>* Teilnehmer::alleTeilnehmerdatenErstellen(){};


    int Teilnehmer::getTeilnehmerkey()const{};
    void Teilnehmer::setTeilnehmerkey(int newVal){};

    bool Teilnehmer::pruefePasswort(string passwort, string email){};

//private:
//    Qt_DAO_Teilnehmer* TeilnehmerDAO;
//    list<Teilnehmerdaten*>* Teilnehmerdatenliste;

//	int teilnehmerkey;



