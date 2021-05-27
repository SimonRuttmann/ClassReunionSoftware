///////////////////////////////////////////////////////////
//  I_DAO_Teilnehmerdaten.h
//  Implementation of the Interface I_DAO_Teilnehmerdaten
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_248FD9DE_F6FD_420a_A509_B1B330F62379__INCLUDED_)
#define EA_248FD9DE_F6FD_420a_A509_B1B330F62379__INCLUDED_

#include <list>
#include <string>
#include "Teilnehmerdaten.h"
using namespace std;

//Schnittstelle von Teilnehmerdaten-Zugriffsobjekten
class I_DAO_Teilnehmerdaten
{

public:
	I_DAO_Teilnehmerdaten() {}

	virtual ~I_DAO_Teilnehmerdaten() {}

    virtual bool insert(Teilnehmerdaten& teilnehmerdaten) =0;
    virtual bool update(const Teilnehmerdaten& teilnehmerdaten) =0;
    virtual bool search(Teilnehmerdaten& teilnehmerdaten) =0;
    virtual bool select(string name, list<Teilnehmerdaten*>& teilnehmerdatenliste) =0;

};
#endif // !defined(EA_248FD9DE_F6FD_420a_A509_B1B330F62379__INCLUDED_)
