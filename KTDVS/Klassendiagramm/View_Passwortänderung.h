///////////////////////////////////////////////////////////
//  View_Passwortänderung.h
//  Implementation of the Class View_Passwortänderung
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_63A4B2CF_A32D_4cfd_B41F_04FC67299DCE__INCLUDED_)
#define EA_63A4B2CF_A32D_4cfd_B41F_04FC67299DCE__INCLUDED_

#include "Teilnehmer.h"
#include "Organisator.h"

class View_Passwortänderung
{

public:
	View_Passwortänderung();
	virtual ~View_Passwortänderung();
	Teilnehmer *subjekt;

	void onSpeichern();
	void onAbbrechen();
	void onInit();
	void onSchließen();

private:
	QLineEdit* altesPasswort;
	QLineEdit* neuesPasswort;
	QButton speichernORpasswortAendern;

};
#endif // !defined(EA_63A4B2CF_A32D_4cfd_B41F_04FC67299DCE__INCLUDED_)
