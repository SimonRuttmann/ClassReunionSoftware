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

    void setPasswort(string pw);
    string getPasswort()const;
    void setHauptorganisator(bool ho);
    bool isHauptorganisator()const;


private:
    string passwort;
    bool hauptorganisator;

};
#endif // !defined(EA_A8887EED_CA40_4b20_839B_BC83AB8B67BD__INCLUDED_)
