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
	virtual ~Teilnehmerliste();
	list<Teilnehmer*> *m_Teilnehmer;
	Qt_DAO_Teilnehmer *TeilnehmerDAO;

	Teilnehmer* teilnehmerErstellen();
    void teilnehmerLoeschen();
    static Teilnehmerliste* instance();
    Teilnehmer* sucheTeilnehmer(string email);
	Teilnehmer* GetaktiverNutzer();
	void SetaktiverNutzer(Teilnehmer* newVal);

private:
	static Teilnehmerliste uniqueInstance;
	Teilnehmer aktiverNutzer;

};
#endif // !defined(EA_BB0DD1F2_7BC3_4503_933B_B3E850297616__INCLUDED_)
