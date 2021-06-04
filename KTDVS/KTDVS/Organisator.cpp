///////////////////////////////////////////////////////////
//  Organisator.cpp
//  Implementation of the Class Organisator
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#include "Organisator.h"


Organisator::Organisator(string passwort, bool isHauptorganisator):Teilnehmer(){
    this->passwort = passwort;
    this->hauptorganisator = isHauptorganisator;
};

Organisator::Pruefung Organisator::pruefePasswort(string passwort, string email){

   if (this->aktuelleTeilnehmerdaten->getEMail() == email) {
       if(this->passwort == passwort) return Organisator::Pruefung::EMailZutreffendPwRichtig;
       else return Organisator::Pruefung::EmailZutreffendPwFalsch;
   }
    return Organisator::Pruefung::EMailFalsch;
};

void Organisator::setPasswort(string pw) {this->passwort = pw;};
string Organisator::getPasswort()const {return this->passwort;};

void Organisator::setHauptorganisator(bool ho){this->hauptorganisator = ho;};
bool Organisator::isHauptorganisator()const{return this->hauptorganisator;};

void Organisator::incVersuch(){this->versuch++;};
void Organisator::setVersuch(int newVal){this->versuch = newVal;};
int Organisator::getVersuch()const{return this->versuch;};

void Organisator::setIsSystempasswort(bool newVal){this->systempasswort = newVal;};
bool Organisator::isSystempasswort()const{return this->systempasswort;};
