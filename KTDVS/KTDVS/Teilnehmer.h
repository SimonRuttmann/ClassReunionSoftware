///////////////////////////////////////////////////////////
//  Teilnehmer.h
//  Implementation of the Class Teilnehmer
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_6737B85E_F4CB_4e88_B320_135147C75A2E__INCLUDED_)
#define EA_6737B85E_F4CB_4e88_B320_135147C75A2E__INCLUDED_

#include <list>
#include <string>

#include "Teilnehmerdaten.h"
class I_DAO_Teilnehmer;
class I_DAO_Teilnehmerdaten;
using namespace std;


class Teilnehmer
{

public:
	Teilnehmer(Teilnehmerdaten teilnehmerdaten);
    Teilnehmer();

    ~Teilnehmer();

    Teilnehmerdaten* getAktuelleTeilnehmerdaten();
    Teilnehmerdaten* aktuelleTeilnehmerdatenErstellen();

    list<Teilnehmerdaten*>* getAlleTeilnehmerdaten();
    list<Teilnehmerdaten*>* alleTeilnehmerdatenErstellen();


    int getTeilnehmerkey()const;
    void setTeilnehmerkey(int newVal);

    bool pruefePasswort(string passwort, string email);

private:
    Teilnehmerdaten* aktuelleTeilnehmerdaten;
    I_DAO_Teilnehmer* TeilnehmerDAO;
    list<Teilnehmerdaten*>* Teilnehmerdatenliste;
    I_DAO_Teilnehmerdaten* TeilnehmerdatenDAO;
	int teilnehmerkey;

};
#endif // !defined(EA_6737B85E_F4CB_4e88_B320_135147C75A2E__INCLUDED_)
