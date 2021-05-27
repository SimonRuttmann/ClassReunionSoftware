///////////////////////////////////////////////////////////
//  Organisator.h
//  Implementation of the Class Organisator
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_A8887EED_CA40_4b20_839B_BC83AB8B67BD__INCLUDED_)
#define EA_A8887EED_CA40_4b20_839B_BC83AB8B67BD__INCLUDED_

#include "Teilnehmer.h"
#include <string>

class Organisator : public Teilnehmer
{

public:
	Organisator();

    Organisator(string passwort, string eMail, bool isHauptorganisator);
	~Organisator();
    string getPasswort();
    void Setpasswort(string newVal);

private:
    string passwort;

};
#endif // !defined(EA_A8887EED_CA40_4b20_839B_BC83AB8B67BD__INCLUDED_)
