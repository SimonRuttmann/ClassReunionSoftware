///////////////////////////////////////////////////////////
//  Teilnehmerdaten.cpp
//  Implementation of the Class Teilnehmerdaten
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#include "Teilnehmerdaten.h"


Teilnehmerdaten::Teilnehmerdaten(){

}





Teilnehmerdaten::Teilnehmerdaten(int teilnehmerdatenkey, int teilnehmerkey){

}


Teilnehmerdaten::~Teilnehmerdaten(){

}


int Teilnehmerdaten::getTeilnehmerdatenkey(){

	return 0;
}


String Teilnehmerdaten::Getnachname(){

	return nachname;
}


void Teilnehmerdaten::Setnachname(String newVal){

	nachname = newVal;
}


int Teilnehmerdaten::Getteilnehmerdatenkey(){

	return teilnehmerdatenkey;
}


void Teilnehmerdaten::Setteilnehmerdatenkey(int newVal){

	teilnehmerdatenkey = newVal;
}


String Teilnehmerdaten::Gete-mail(){

	return e-mail;
}


void Teilnehmerdaten::Sete-mail(String newVal){

	e-mail = newVal;
}


Adresse Teilnehmerdaten::Getadresse(){

	return adresse;
}


void Teilnehmerdaten::Setadresse(Adresse newVal){

	adresse = newVal;
}


String Teilnehmerdaten::Getvorname(){

	return vorname;
}


void Teilnehmerdaten::Setvorname(String newVal){

	vorname = newVal;
}


int Teilnehmerdaten::Getschulname(){

	return schulname;
}


void Teilnehmerdaten::Setschulname(int newVal){

	schulname = newVal;
}


Datum Teilnehmerdaten::Getdatum(){

	return datum;
}


void Teilnehmerdaten::Setdatum(Datum newVal){

	datum = newVal;
}


String Teilnehmerdaten::Getweitere_telefonnummern(){

	return weitere_telefonnummern;
}


void Teilnehmerdaten::Setweitere_telefonnummern(String newVal){

	weitere_telefonnummern = newVal;
}


int Teilnehmerdaten::Gethaupttelefonnummer(){

	return haupttelefonnummer;
}


void Teilnehmerdaten::Sethaupttelefonnummer(int newVal){

	haupttelefonnummer = newVal;
}