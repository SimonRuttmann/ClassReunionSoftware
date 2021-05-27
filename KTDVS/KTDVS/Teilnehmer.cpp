///////////////////////////////////////////////////////////
//  Teilnehmer.cpp
//  Implementation of the Class Teilnehmer
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#include "Teilnehmer.h"




Teilnehmer::Teilnehmer(Teilnehmerdaten teilnehmerdaten){

}


Teilnehmer::Teilnehmer(){

}


Teilnehmer::~Teilnehmer(){

}


Teilnehmerdaten*[1..*] Teilnehmer::getTeilnehmerdaten(){

	return  NULL;
}


Teilnehmerdaten Teilnehmer::teilnehmerdatenErstellen(){

	return  NULL;
}


Teilnehmer::TeilnehmerdatenLöschen(){

}


int Teilnehmer::Getteilnehmerkey(){

	return teilnehmerkey;
}


void Teilnehmer::Setteilnehmerkey(int newVal){

	teilnehmerkey = newVal;
}


boolean Teilnehmer::prüfePasswort(String passwort){

	return  NULL;
}