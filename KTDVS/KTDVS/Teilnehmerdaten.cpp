///////////////////////////////////////////////////////////
//  Teilnehmerdaten.cpp
//  Implementation of the Class Teilnehmerdaten
///////////////////////////////////////////////////////////

#include "Teilnehmerdaten.h"

Teilnehmerdaten::Teilnehmerdaten(){};

Teilnehmerdaten::Teilnehmerdaten(int teilnehmerdatenkey, int teilnehmerkey){
    this->teilnehmerdatenkey = teilnehmerdatenkey;
    this->teilnehmerKey = teilnehmerkey;
};

int Teilnehmerdaten::getTeilnehmerdatenkey() const {return this->teilnehmerdatenkey;};
void Teilnehmerdaten::setTeilnehmerdatenkey(int newVal){this->teilnehmerdatenkey = newVal;};

int Teilnehmerdaten::getTeilnehmerkey() const {return this->teilnehmerKey;};
void Teilnehmerdaten::setTeilnehmerkey(int newVal){this->teilnehmerKey = newVal;};

string Teilnehmerdaten::getVorname()const{return this->vorname;};
void Teilnehmerdaten::setVorname(string newVal){this->vorname = newVal;};

string Teilnehmerdaten::getNachname() const{return this->nachname;};
void Teilnehmerdaten::setNachname(string newVal){this->nachname = newVal;};

string Teilnehmerdaten::getSchulname()const{return this->schulname;};
void Teilnehmerdaten::setSchulname(string newVal){this->schulname = newVal;};

string Teilnehmerdaten::getEMail() const {return this->Email;};
void Teilnehmerdaten::setEmail(string newVal){this->Email = newVal;};

Datum Teilnehmerdaten::getDatum()const {return this->datum;};
void Teilnehmerdaten::setDatum(Datum newVal){this->datum = newVal;};

Adresse Teilnehmerdaten::getAdresse()const {return this->adresse;};
void Teilnehmerdaten::setAdresse(Adresse newVal){this->adresse = newVal;};

list<string> Teilnehmerdaten::getWeitereTelefonnummern() const {return this->weitere_telefonnummern;};
void Teilnehmerdaten::setWeitereTelefonnummern(list<string>& newVal){this->weitere_telefonnummern = newVal;};

string Teilnehmerdaten::getHaupttelefonnummer()const {return this->haupttelefonnummer;};
void Teilnehmerdaten::setHaupttelefonnummer(string newVal){this->haupttelefonnummer = newVal;};

string Teilnehmerdaten::getKommentar() const {return this->kommentar;};
void Teilnehmerdaten::setKommentar(string kommentar){this->kommentar = kommentar;};

int Teilnehmerdaten::getErstellerKey() const{return this->erstellerKey;};
void Teilnehmerdaten::setErstellerKey(int newVal){this->erstellerKey = newVal;};
