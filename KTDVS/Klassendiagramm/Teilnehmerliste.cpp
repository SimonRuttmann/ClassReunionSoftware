///////////////////////////////////////////////////////////
//  Teilnehmerliste.cpp
//  Implementation of the Class Teilnehmerliste
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#include "Teilnehmerliste.h"


Teilnehmerliste::Teilnehmerliste(){

}



Teilnehmerliste::~Teilnehmerliste(){

}


Teilnehmerliste Teilnehmerliste::uniqueInstance;





Teilnehmer* Teilnehmerliste::teilnehmerErstellen(){

	return  NULL;
}


Teilnehmerliste::teilnehmerLöschen(){

}


Teilnehmerliste Teilnehmerliste::instance(){

	return  NULL;
}


Teilnehmer* Teilnehmerliste::sucheTeilnehmer(String e-mail){

	return  NULL;
}


Teilnehmer* Teilnehmerliste::GetaktiverNutzer(){

	return aktiverNutzer;
}


void Teilnehmerliste::SetaktiverNutzer(Teilnehmer* newVal){

	aktiverNutzer = newVal;
}