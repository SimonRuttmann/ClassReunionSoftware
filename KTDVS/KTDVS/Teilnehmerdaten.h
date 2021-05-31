///////////////////////////////////////////////////////////
//  Teilnehmerdaten.h
//  Implementation of the Class Teilnehmerdaten
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_B0DBE83D_D464_48b5_89B7_8DFF0896E9D3__INCLUDED_)
#define EA_B0DBE83D_D464_48b5_89B7_8DFF0896E9D3__INCLUDED_

//#include "Qt_DAO_Teilnehmerdaten.h"
#include "Datum.h"
#include "Adresse.h"
#include <list>
class Teilnehmerdaten
{

public:
	Teilnehmerdaten();
        //Qt_DAO_Teilnehmerdaten *TeilnehmerdatenDao;

	Teilnehmerdaten(int teilnehmerdatenkey, int teilnehmerkey);
	~Teilnehmerdaten();

	int getTeilnehmerdatenkey();
        int getTeilnehmerkey();
        void setTeilnehmerkey(int teilnehmerkey);
        string getPostleitzahl() const;
        string getNachname() const;
        void setNachname(string newVal);
        int getTeilnehmerdatenkey() const;
        void setTeilnehmerdatenkey(int newVal);
        string getEMail() const;
        void setEmail(string newVal);
        Adresse getAdresse()const;
        void setAdresse(Adresse &newVal);
        string getVorname()const;
        void setVorname(string newVal);
        string getSchulname()const;
        void setSchulname(string newVal);
        Datum getDatum()const;
        void setDatum(Datum &newVal);

        list<string>* getWeitereTelefonnummern();
        void setWeitereTelefonnummern(list<string>* newVal);

        string getHaupttelefonnummer()const;
        void setHaupttelefonnummer(string newVal);

        string getKommentar();
        void setKommentar(string kommentar);
private:
        string kommentar;
	int teilnehmerdatenkey;
        string Email;
        Adresse* adresse;
        string vorname;
        string nachname;
	int schulname;
        Datum* datum;
        list<string>* weitere_telefonnummern;
        string haupttelefonnummer;
	int teilnehmerKey;

};
#endif // !defined(EA_B0DBE83D_D464_48b5_89B7_8DFF0896E9D3__INCLUDED_)
