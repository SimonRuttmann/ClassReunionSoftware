///////////////////////////////////////////////////////////
//  Teilnehmer.h
//  Implementation of the Class Teilnehmer
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_6737B85E_F4CB_4e88_B320_135147C75A2E__INCLUDED_)
#define EA_6737B85E_F4CB_4e88_B320_135147C75A2E__INCLUDED_

#include "Teilnehmerdaten.h"
#include "Qt_DAO_Teilnehmer.h"
#include "View_VersionsverlaufDetailiert.h"

class Teilnehmer
{

public:
	Qt_DAO_Teilnehmer *TeilnehmerDAO;
	list<Teilnehmerdaten*> *m_Teilnehmerdaten;
	View_VersionsverlaufDetailiert *m_View_VersionsverlaufDetailiert;

	Teilnehmer(Teilnehmerdaten teilnehmerdaten);
	Teilnehmer();
	~Teilnehmer();
	Teilnehmerdaten*[1..*] getTeilnehmerdaten();
	Teilnehmerdaten teilnehmerdatenErstellen();
	TeilnehmerdatenLöschen();
	int Getteilnehmerkey();
	void Setteilnehmerkey(int newVal);
	boolean prüfePasswort(String passwort);

private:
	int teilnehmerkey;

};
#endif // !defined(EA_6737B85E_F4CB_4e88_B320_135147C75A2E__INCLUDED_)
