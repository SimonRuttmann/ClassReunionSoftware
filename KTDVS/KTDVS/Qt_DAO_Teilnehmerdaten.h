///////////////////////////////////////////////////////////
//  Qt_DAO_Teilnehmerdaten.h
//  Implementation of the Class Qt_DAO_Teilnehmerdaten
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_ECBA865B_B57C_4f10_9059_80FF3BAB8A79__INCLUDED_)
#define EA_ECBA865B_B57C_4f10_9059_80FF3BAB8A79__INCLUDED_

#include "I_DAO_Teilnehmerdaten.h"

class Qt_DAO_Teilnehmerdaten : public I_DAO_Teilnehmerdaten
{

public:
	Qt_DAO_Teilnehmerdaten();
	virtual ~Qt_DAO_Teilnehmerdaten();

	boolean insert(Teilnehmerdaten teilnehmerdaten);
	boolean update(Teilnehmerdaten teilnehmerdaten);
	boolean search(Teilnehmerdaten teilnehmerdaten);
	boolean select(String name, list<Person> ps);
	boolean select(String name, list<Teilnehmerdaten*> ps);

};
#endif // !defined(EA_ECBA865B_B57C_4f10_9059_80FF3BAB8A79__INCLUDED_)
