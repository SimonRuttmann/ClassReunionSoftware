///////////////////////////////////////////////////////////
//  Teilnehmerliste.h
//  Implementation of the Class Teilnehmerliste
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_BB0DD1F2_7BC3_4503_933B_B3E850297616__INCLUDED_)
#define EA_BB0DD1F2_7BC3_4503_933B_B3E850297616__INCLUDED_

#include "Teilnehmer.h"
//#include "ListeTeilnehmer.java"
#include "Qt_DAO_Teilnehmer.h"

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

private:
    static Teilnehmerliste* uniqueInstance;
    Teilnehmer* aktiverNutzer;
    list<Teilnehmer*> teilnehmerliste;
    I_DAO_Teilnehmer* TeilnehmerDAO;

};
#endif // !defined(EA_BB0DD1F2_7BC3_4503_933B_B3E850297616__INCLUDED_)
