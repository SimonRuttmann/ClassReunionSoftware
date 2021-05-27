///////////////////////////////////////////////////////////
//  Organisator.h
//  Implementation of the Class Organisator
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_A8887EED_CA40_4b20_839B_BC83AB8B67BD__INCLUDED_)
#define EA_A8887EED_CA40_4b20_839B_BC83AB8B67BD__INCLUDED_

#include "Teilnehmer.h"

class Organisator : public Teilnehmer
{

public:
	Organisator();

	Organisator(String passwort, String e-mail, boolean isHauptorganisator);
	~Organisator();
	String Getpasswort();
	void Setpasswort(String newVal);

private:
	String passwort;

};
#endif // !defined(EA_A8887EED_CA40_4b20_839B_BC83AB8B67BD__INCLUDED_)
