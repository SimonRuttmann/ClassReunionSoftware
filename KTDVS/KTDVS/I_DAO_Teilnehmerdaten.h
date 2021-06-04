///////////////////////////////////////////////////////////
//  I_DAO_Teilnehmerdaten.h
//  Implementation of the Interface I_DAO_Teilnehmerdaten
///////////////////////////////////////////////////////////

#ifndef I_DAO_TEILNEHMERDATEN_H
#define I_DAO_TEILNEHMERDATEN_H

#include <list>
#include <string>
#include "Teilnehmerdaten.h"
using namespace std;

//Schnittstelle von Teilnehmerdaten-Zugriffsobjekten
class I_DAO_Teilnehmerdaten
{
public:
	I_DAO_Teilnehmerdaten() {}

	virtual ~I_DAO_Teilnehmerdaten() {}

    virtual bool insert(Teilnehmerdaten& teilnehmerdaten)=0;

    //virtual bool remove(int teilnehmerkey)=0; //Es werden in der beschriebenen Software keine Daten gelöscht
    virtual bool selectFirstOfTeilnehmer(int teilnehmerkey, Teilnehmerdaten& teilnehmerdaten)=0;
    virtual bool selectAllOfTeilnehmer(int teilnehmerkey,  list<Teilnehmerdaten*>& teilnehmerdatenliste)=0;
    virtual bool selectAll(list<Teilnehmerdaten*>& teilnehmerdatenliste)=0;

};
#endif // I_DAO_TEILNEHMERDATEN_H
