///////////////////////////////////////////////////////////
//  Teilnehmerliste.h
//  Implementation of the Class Teilnehmerliste
///////////////////////////////////////////////////////////

#ifndef TEILNEHMERLISTE_H
#define TEILNEHMERLISTE_H

#include "Teilnehmer.h"
//#include "ListeTeilnehmer.java"
#include "DAO_QT_Teilnehmer.h"

class Teilnehmerliste
{

public:
	Teilnehmerliste();
    ~Teilnehmerliste();

    Teilnehmer* getAktiverNutzer();
    void setAktiverNutzer(Teilnehmer* newVal);

	Teilnehmer* teilnehmerErstellen();
    //void teilnehmerLoeschen();

    Organisator* organisatorErstellen(string passwort, bool isHauptorganisator);
    //void organisatorLoeschen();

    static Teilnehmerliste* instance();

    Teilnehmer* sucheTeilnehmer(string email);

    list<Teilnehmer*>* getTeilnehmerliste();
    list<Organisator*>* getOrganisatorliste();

    bool updateOrganisator(Organisator& organisator);
    bool updateTeilnehmer(Teilnehmer& teilnehmer);


public:
    static Teilnehmerliste* uniqueInstance;
    Teilnehmer* aktiverNutzer;
    list<Teilnehmer*> teilnehmerliste;
    list<Organisator*> organisatorliste;
    I_DAO_Teilnehmer* TeilnehmerDAO;


};
#endif // TEILNEHMERLISTE_H
