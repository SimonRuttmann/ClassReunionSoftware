///////////////////////////////////////////////////////////
//  View_Versionsverlauf.h
//  Implementation of the Class View_Versionsverlauf
//  Created on:      27-Mai-2021 14:19:34
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_F0DE34EE_90BD_4831_9557_FE49E906AB91__INCLUDED_)
#define EA_F0DE34EE_90BD_4831_9557_FE49E906AB91__INCLUDED_

#include "Teilnehmerliste.h"

class View_Versionsverlauf
{

public:
	View_Versionsverlauf();
	virtual ~View_Versionsverlauf();
	Teilnehmerliste *all;

	void onDetailsAnzeigen();
    void onZurueck();
	void onAusloggen();
	void onInit();
	void onUpdate();

private:
	QtTableWidget* listeTeilnehmer;
	QButton zurueck;
	QButton details;
	QButton ausloggen;

};
#endif // !defined(EA_F0DE34EE_90BD_4831_9557_FE49E906AB91__INCLUDED_)
