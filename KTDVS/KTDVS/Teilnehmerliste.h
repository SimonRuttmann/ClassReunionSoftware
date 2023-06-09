
#ifndef TEILNEHMERLISTE_H
#define TEILNEHMERLISTE_H

#include "Teilnehmer.h"
#include "DAO_QT_Teilnehmer.h"

//Repraesentiert eine Objektverwaltung der Objekte Teilnehmer
//Er verwaltet die Erstellung, Loeschung, Aktualisierung und Ernennung/Entlassung von Teilnehmer
class Teilnehmerliste
{

public:
	Teilnehmerliste();
    ~Teilnehmerliste();

    Organisator* getAktiverNutzer();
    void setAktiverNutzer(Organisator* newVal);

	Teilnehmer* teilnehmerErstellen();

    Organisator* organisatorErstellen(string passwort, bool isHauptorganisator);

    Teilnehmer* vonOrgZuTeilnehmer(Organisator* org);

    Organisator* vonTeilnZuOrg(Teilnehmer* teiln, string systempasswort);

    static Teilnehmerliste* instance();

    Teilnehmer* sucheTeilnehmer(string email);

    list<Teilnehmer*>* getTeilnehmerliste();
    list<Organisator*>* getOrganisatorliste();

    bool updateOrganisator(Organisator& organisator);
    bool updateTeilnehmer(Teilnehmer& teilnehmer);


public:
    static Teilnehmerliste* uniqueInstance;
    Organisator* aktiverNutzer;

    //Liste ALLER Teilnehmer
    list<Teilnehmer*> teilnehmerliste;

    //Liste ALLER Organsiatoren
    list<Organisator*> organisatorliste;

    //Liste NUR Teilnehmer
    list<Teilnehmer*> nurTeilnehmerliste;

    I_DAO_Teilnehmer* TeilnehmerDAO;


};
#endif // TEILNEHMERLISTE_H
