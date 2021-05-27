///////////////////////////////////////////////////////////
//  View_Teilnehmerliste.h
//  Implementation of the Class View_Teilnehmerliste
//  Created on:      27-Mai-2021 14:19:34
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_5907DC7B_BAF9_462e_9FAE_58EBE0B10D35__INCLUDED_)
#define EA_5907DC7B_BAF9_462e_9FAE_58EBE0B10D35__INCLUDED_

#include "ListeTeilnehmer.java"
#include "Teilnehmerliste.h"

class View_Teilnehmerliste
{

public:
	View_Teilnehmerliste();
	virtual ~View_Teilnehmerliste();
	ListeTeilnehmer *m_ListeTeilnehmer;
	Teilnehmerliste *all;

	void onAusloggen();
	void onTeilnehmerdatenÄndern();
	void onTeilnehmerHinzufügen();
	void onAlsOrganisatorrechteÄndern();
	void onVersionsverlaufAnzeigen();
	void onUpdate();
	void onInit();

private:
	QtTableWidget* teilnehmerList;
	QLabel schulname;
	QLabel land;
	QLabel adresse;
	QLabel haupttelefonnummer;
	QLabel e-mail;
	QLabel kommentar;
	QButton aktualisiere;
	QButton versionsverlauf;
	QButton datenAendern;
	QButton alsOrganisatorHinzufuegen;
	QButton teilnehmerHinzufuegen;

	void onTeilnehmerAuswählen();

};
#endif // !defined(EA_5907DC7B_BAF9_462e_9FAE_58EBE0B10D35__INCLUDED_)
