///////////////////////////////////////////////////////////
//  View_TeilnehmerTeilnehmerHinzuf�gen.h
//  Implementation of the Class View_Teilnehmer/TeilnehmerHinzuf�gen
//  Created on:      27-Mai-2021 14:19:34
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_488AC7AD_4439_4718_8501_F0D4D41D9217__INCLUDED_)
#define EA_488AC7AD_4439_4718_8501_F0D4D41D9217__INCLUDED_

#include "ListeTeilnehmer.java"
#include "Teilnehmer.h"
#include "Teilnehmerliste.h"

class View_Teilnehmer/TeilnehmerHinzuf�gen
{

public:
	View_Teilnehmer/TeilnehmerHinzuf�gen();
	virtual ~View_Teilnehmer/TeilnehmerHinzuf�gen();
	ListeTeilnehmer *m_ListeTeilnehmer;
	Teilnehmer *subjekt;
	Teilnehmerliste *all;

	void onVersionsverlaufAnzeigen();
	void onOrganisatorrechte�ndern();
	void onPasswort�ndern();
	void onSave();
	void onAusloggen();
	void onAbbrechen();
	void onUpate();
	void onInit();

private:
	QLineEdit* vorname;
	QLineEdit* nachname;
	QLineEdit* schulname;
	QLineEdit* stra�e;
	QLineEdit* hausnummer;
	QLineEdit* plz;
	QLineEdit* ort;
	QLineEdit* land;
	QLineEdit* e-mail;
	QLineEdit* haupttelefonnummer;
	QtTableWidget* weitereTelefonnummern;
	QButton abbrechen;
	boolean isHinzuf�gen;
	QButton organisatorrechteAendern;
	QButton passwortAendern;
	QButton ausloggen;
	QButton speichern;

};
#endif // !defined(EA_488AC7AD_4439_4718_8501_F0D4D41D9217__INCLUDED_)
