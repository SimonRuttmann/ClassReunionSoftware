///////////////////////////////////////////////////////////
//  View_Einloggen.h
//  Implementation of the Class View_Einloggen
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_7692ED0D_30E6_4a39_8371_DD5FE800E21C__INCLUDED_)
#define EA_7692ED0D_30E6_4a39_8371_DD5FE800E21C__INCLUDED_

#include "Teilnehmer.h"
#include "Teilnehmerliste.h"

class View_Einloggen
{

public:
	View_Einloggen();
	virtual ~View_Einloggen();
	Teilnehmer *subjekt;
	Teilnehmerliste *all;

	void onEinloggen();
	void onSchlieﬂen();
	void onErstelleHauptorganisator();
	void onInit();

private:
	QLineEdit* e-mail;
	QLineEdit* passwort;
	QButton login;
	QButton zurueck;

};
#endif // !defined(EA_7692ED0D_30E6_4a39_8371_DD5FE800E21C__INCLUDED_)
