///////////////////////////////////////////////////////////
//  View_VersionsverlaufDetailiert.h
//  Implementation of the Class View_VersionsverlaufDetailiert
//  Created on:      27-Mai-2021 14:19:34
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_CFA5AA1A_89E8_4be4_9182_8D6D49D470CE__INCLUDED_)
#define EA_CFA5AA1A_89E8_4be4_9182_8D6D49D470CE__INCLUDED_

#include "Teilnehmer.h"
#include "Teilnehmerdaten.h"

class View_VersionsverlaufDetailiert
{

public:
	View_VersionsverlaufDetailiert();
	virtual ~View_VersionsverlaufDetailiert();
	Teilnehmer *subjekt;
	set<Teilnehmerdaten*> *subjekte;

	void onZurück();
	void onAusloggen();
	void onInit();

private:
	QLabel vornameAlt;
	QLabel nachnameAlt;
	QLabel schulnameAlt;
	QLabel straßeAlt;
	QLabel hausnummerAlt;
	QLabel plzAlt;
	QLabel ortAlt;
	QLabel landAlt;
	QLabel telefonnummerAlt;
	QLabel e-MailAlt;
	QLabel kommentarAlt;
	QLabel vornameNeu;
	QLabel nachnameNeu;
	QLabel schulnameNeu;
	QLabel straßeNeu;
	QLabel hausnummerNeu;
	QLabel plzNeu;
	QLabel ortNeu;
	QLabel landNeu;
	QLabel telefonnummerNeu;
	QLabel e-MailNeu;
	QLabel kommentarNeu;
	QButton zurueck;
	QButton ausloggen;

};
#endif // !defined(EA_CFA5AA1A_89E8_4be4_9182_8D6D49D470CE__INCLUDED_)
