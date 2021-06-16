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

    //Einfuegen eines Teilnehmerdatenobjekts in die Datenbank
    virtual bool insert(Teilnehmerdaten& teilnehmerdaten)=0;

    //Es werden in der beschriebenen Software keine Daten geloescht
    //virtual bool remove(int teilnehmerkey)=0;

    //Selektiert die aktuellsten Teilnehmerdaten des Teilnehmers mit dem uebergebenen Key
    virtual bool selectFirstOfTeilnehmer(int teilnehmerkey, Teilnehmerdaten& teilnehmerdaten)=0;

    //Selektiert die alle Teilnehmerdaten des Teilnehmers mit dem uebergebenen Key
    virtual bool selectAllOfTeilnehmer(int teilnehmerkey,  list<Teilnehmerdaten*>& teilnehmerdatenliste)=0;


};
#endif // I_DAO_TEILNEHMERDATEN_H
