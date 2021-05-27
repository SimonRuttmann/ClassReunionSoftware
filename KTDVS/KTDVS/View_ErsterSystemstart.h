///////////////////////////////////////////////////////////
//  View_ErsterSystemstart.h
//  Implementation of the Class View_ErsterSystemstart
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_85BDDC06_E7EE_4890_873B_773CC38541D7__INCLUDED_)
#define EA_85BDDC06_E7EE_4890_873B_773CC38541D7__INCLUDED_

#include "Hauptorganisator.h"

class View_ErsterSystemstart
{

public:
	View_ErsterSystemstart();
	virtual ~View_ErsterSystemstart();
	Hauptorganisator *subjekt;

	void onNeuesSystemErstellen();
	void onBestehendemSystemBeitreten();
	void onSchlieﬂen();
	void onInit();

private:
	QButton neuesSystem;
	QButton bestehendesSystemBeitreten;

};
#endif // !defined(EA_85BDDC06_E7EE_4890_873B_773CC38541D7__INCLUDED_)
