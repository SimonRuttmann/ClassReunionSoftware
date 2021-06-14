///////////////////////////////////////////////////////////
//  I_DAO_Teilnehmer.h
//  Implementation of the Interface I_DAO_Teilnehmer
///////////////////////////////////////////////////////////

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

    virtual bool insertOrganisator(Organisator& organisator)=0;
    virtual bool insertTeilnehmer(Teilnehmer& teilnehmer)=0;

    virtual bool updateTeilnehmer(const Teilnehmer& teilnehmer)=0;
    virtual bool updateOrganisator(const Organisator& teilnehmer)=0;

  // Nicht sinnvoll, da er nur einen Teilnehmerkey besitzt und dieser zum suchen benötigt wird
  //  virtual bool searchTeilnehmer(Teilnehmer& teilnehmer)=0;

    virtual bool searchOrganisator(Organisator& organisator)=0;

    virtual bool remove(int teilnehmerkey)=0;
    //NUR TEILNEHMER
    virtual bool selectAllTeilnehmer(list<Teilnehmer*>& teilnehmerliste)=0;
    virtual bool selectHo(Organisator& organisator)=0;
    virtual bool selectAllOrganisatoren(list<Organisator*>& organisatorliste)=0;

};
#endif // !I_DAO_TEILNEHMER_H
