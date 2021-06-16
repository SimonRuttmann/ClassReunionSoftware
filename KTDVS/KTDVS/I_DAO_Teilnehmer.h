#ifndef I_DAO_TEILNEHMER_H
#define I_DAO_TEILNEHMER_H

#include "Teilnehmer.h"
#include "Organisator.h"
#include <string>
#include <list>
using namespace std;


//Schnittstelle von Teilnehmer-Zugriffsobjekten
class I_DAO_Teilnehmer
{

public:
	I_DAO_Teilnehmer() {}

	virtual ~I_DAO_Teilnehmer() {}

    //Fuegt einen Organisator der DB hinzu
    virtual bool insertOrganisator(Organisator& organisator)=0;

    //Fuegt einen Teinehmer der DB hinzu
    virtual bool insertTeilnehmer(Teilnehmer& teilnehmer)=0;

    //Aktualisiert den uebergebenen Teilnehmer in der DB
    virtual bool updateTeilnehmer(const Teilnehmer& teilnehmer)=0;

    //Aktualisiert den uebergebenen Organisator in der DB
    virtual bool updateOrganisator(const Organisator& teilnehmer)=0;

    //Nicht sinnvoll, da er nur einen Teilnehmerkey besitzt und dieser zum suchen benoetigt wird
    //virtual bool searchTeilnehmer(Teilnehmer& teilnehmer)=0;

    //Sucht nach einen Organisator mit dem uebergebenen Organisatorkey
    virtual bool searchOrganisator(Organisator& organisator)=0;

    //Entfernt den Teilnehmer mit dem uebergebenen Teilnehmerkey
    virtual bool remove(int teilnehmerkey)=0;

    //Selektiert alle Teilnehmer in der Datenbank und fuegt sie der uebergebenen Liste hinzu
    virtual bool selectAllTeilnehmer(list<Teilnehmer*>& teilnehmerliste)=0;

    //Selektiert den Hautporganisator in der Datenbank und uebergibt sie dem uebergebenen Objekt
    virtual bool selectHo(Organisator& organisator)=0;

    //Selektiert alle Organisatoren in der Datenbank und fuegt sie der uebergebenen Liste hinzu
    virtual bool selectAllOrganisatoren(list<Organisator*>& organisatorliste)=0;

};
#endif // !I_DAO_TEILNEHMER_H
