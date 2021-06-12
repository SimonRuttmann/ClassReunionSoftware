// /////////////////////////////////////////////////////////
//  Teilnehmer.h
//  Implementation of the Class Teilnehmer
// /////////////////////////////////////////////////////////

#ifndef TEILNEHMER_H
#define TEILNEHMER_H

#include <list>
#include <string>


#include "Teilnehmerdaten.h"
class I_DAO_Teilnehmer;
class I_DAO_Teilnehmerdaten;
using namespace std;


class Teilnehmer
{

public:
    Teilnehmer(Teilnehmerdaten* teilnehmerdaten);
    Teilnehmer();

    ~Teilnehmer();
    void neuenTDEintragEinfuegen(Teilnehmerdaten*);

    Teilnehmerdaten* getAktuelleTeilnehmerdaten();
    Teilnehmerdaten* aktuelleTeilnehmerdatenVonDBErhalten();

    list<Teilnehmerdaten*>* getAlleTeilnehmerdaten();
    list<Teilnehmerdaten*>* alleTeilnehmerdatenErstellen();

    int getTeilnehmerkey()const;
    void setTeilnehmerkey(int newVal);

protected:
    Teilnehmerdaten* aktuelleTeilnehmerdaten;
    list<Teilnehmerdaten*> Teilnehmerdatenliste;
    I_DAO_Teilnehmerdaten* TeilnehmerdatenDAO;
	int teilnehmerkey;



};
#endif // QT_TEILNEHMER_H
