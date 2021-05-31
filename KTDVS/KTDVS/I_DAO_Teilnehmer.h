///////////////////////////////////////////////////////////
//  I_DAO_Teilnehmer.h
//  Implementation of the Interface I_DAO_Teilnehmer
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_43508566_3A5A_4c77_AEFA_69198D629CC9__INCLUDED_)
#define EA_43508566_3A5A_4c77_AEFA_69198D629CC9__INCLUDED_

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

    virtual bool selectAllTeilnehmer(list<Teilnehmer*>& teilnehmerliste)=0;
    virtual bool selectHo(Organisator& organisator)=0;
    virtual bool selectAllOrganisatoren(list<Organisator*>& organisatorliste)=0;

};
#endif // !defined(EA_43508566_3A5A_4c77_AEFA_69198D629CC9__INCLUDED_)
