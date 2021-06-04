///////////////////////////////////////////////////////////
//  Teilnehmerdaten.h
//  Implementation of the Class Teilnehmerdaten
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_B0DBE83D_D464_48b5_89B7_8DFF0896E9D3__INCLUDED_)
#define EA_B0DBE83D_D464_48b5_89B7_8DFF0896E9D3__INCLUDED_


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
    void setWeitereTelefonnummern(list<string> newVal);

    string getHaupttelefonnummer()const;
    void setHaupttelefonnummer(string newVal);

    string getKommentar() const;
    void setKommentar(string kommentar);

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

};
#endif // !defined(EA_B0DBE83D_D464_48b5_89B7_8DFF0896E9D3__INCLUDED_)
