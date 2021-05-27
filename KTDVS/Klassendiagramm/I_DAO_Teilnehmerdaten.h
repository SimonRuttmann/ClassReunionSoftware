///////////////////////////////////////////////////////////
//  I_DAO_Teilnehmerdaten.h
//  Implementation of the Interface I_DAO_Teilnehmerdaten
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_248FD9DE_F6FD_420a_A509_B1B330F62379__INCLUDED_)
#define EA_248FD9DE_F6FD_420a_A509_B1B330F62379__INCLUDED_

class I_DAO_Teilnehmerdaten
{

public:
	I_DAO_Teilnehmerdaten() {

	}

	virtual ~I_DAO_Teilnehmerdaten() {

	}

	virtual boolean insert(Teilnehmerdaten teilnehmerdaten) =0;
	virtual boolean update(Teilnehmerdaten teilnehmerdaten) =0;
	virtual boolean search(Teilnehmerdaten teilnehmerdaten) =0;
	virtual boolean select(String name, list<Teilnehmerdaten*> ps) =0;

};
#endif // !defined(EA_248FD9DE_F6FD_420a_A509_B1B330F62379__INCLUDED_)
