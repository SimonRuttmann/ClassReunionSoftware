///////////////////////////////////////////////////////////
//  Teilnehmerdaten.h
//  Implementation of the Class Teilnehmerdaten
///////////////////////////////////////////////////////////

#ifndef TEILNEHMERDATEN_H
#define TEILNEHMERDATEN_H


#include "Datum.h"
#include "Adresse.h"
#include <list>
class Teilnehmerdaten
{

public:
	Teilnehmerdaten();

	Teilnehmerdaten(int teilnehmerdatenkey, int teilnehmerkey);

    int getTeilnehmerdatenkey() const;
    void setTeilnehmerdatenkey(int newVal);

    int getTeilnehmerkey() const;
    void setTeilnehmerkey(int teilnehmerkey);

    string getVorname()const;
    void setVorname(string newVal);

    string getNachname() const;
    void setNachname(string newVal);

    string getSchulname()const;
    void setSchulname(string newVal);

    string getEMail() const;
    void setEmail(string newVal);

    Datum getDatum()const;
    void setDatum(Datum newVal);

    Adresse getAdresse()const;
    void setAdresse(Adresse newVal);


    list<string> getWeitereTelefonnummern() const;
    void setWeitereTelefonnummern(list<string>& newVal);

    string getHaupttelefonnummer()const;
    void setHaupttelefonnummer(string newVal);

    string getKommentar() const;
    void setKommentar(string newVal);

    int getErstellerKey() const;
    void setErstellerKey(int newVal);
private:
    string kommentar;
	int teilnehmerdatenkey;
    string Email;
    Adresse adresse;
    string vorname;
    string nachname;
    string schulname;
    Datum datum;
    list<string> weitere_telefonnummern;
    string haupttelefonnummer;
	int teilnehmerKey;
    int erstellerKey;

};
#endif // TEILNEHMERDATEN_H
