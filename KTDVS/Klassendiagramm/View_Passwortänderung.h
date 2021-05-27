///////////////////////////////////////////////////////////
//  View_Passwort‰nderung.h
//  Implementation of the Class View_Passwort‰nderung
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_63A4B2CF_A32D_4cfd_B41F_04FC67299DCE__INCLUDED_)
#define EA_63A4B2CF_A32D_4cfd_B41F_04FC67299DCE__INCLUDED_

#include "Teilnehmer.h"
#include "Organisator.h"

class View_Passwort‰nderung
{

public:
	View_Passwort‰nderung();
	virtual ~View_Passwort‰nderung();
	Teilnehmer *subjekt;

	void onSpeichern();
	void onAbbrechen();
	void onInit();
	void onSchlieﬂen();

private:
	QLineEdit* altesPasswort;
	QLineEdit* neuesPasswort;
	QButton speichernORpasswortAendern;

};
#endif // !defined(EA_63A4B2CF_A32D_4cfd_B41F_04FC67299DCE__INCLUDED_)
