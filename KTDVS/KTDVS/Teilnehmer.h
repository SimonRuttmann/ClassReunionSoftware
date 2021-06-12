// /////////////////////////////////////////////////////////
//  Teilnehmer.h
//  Implementation of the Class Teilnehmer
// /////////////////////////////////////////////////////////

#ifndef TEILNEHMER_H
#define TEILNEHMER_H

#include <list>
#include <string>

#include <Organisator.h> //Vero

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

    Organisator* login(string email, string passwort); //VERo
    list<Organisator*> orglist; //Vero

    int getTeilnehmerkey()const;
    void setTeilnehmerkey(int newVal);
    bool existiertHauptOrg();

protected:
    Teilnehmerdaten* aktuelleTeilnehmerdaten;
    list<Teilnehmerdaten*> Teilnehmerdatenliste;
    I_DAO_Teilnehmerdaten* TeilnehmerdatenDAO;
	int teilnehmerkey;
    Organisator *org; //VERo


};
#endif // QT_TEILNEHMER_H
