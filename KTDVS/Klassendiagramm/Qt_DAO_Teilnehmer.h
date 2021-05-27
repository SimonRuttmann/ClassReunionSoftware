///////////////////////////////////////////////////////////
//  Qt_DAO_Teilnehmer.h
//  Implementation of the Class Qt_DAO_Teilnehmer
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_1F693830_6283_4e37_B639_A49F2ADA0073__INCLUDED_)
#define EA_1F693830_6283_4e37_B639_A49F2ADA0073__INCLUDED_

#include "Teilnehmer.h"
#include "I_DAO_Teilnehmer.h"

class Qt_DAO_Teilnehmer : public I_DAO_Teilnehmer
{

public:
	Qt_DAO_Teilnehmer();
	virtual ~Qt_DAO_Teilnehmer();

	boolean insert(Teilnehmer teilnehmer);
	boolean update(Teilnehmer* teilnehmer);
	boolean search(Teilnehmer teilnehmer);
	boolean remove(int id);
	boolean select(String name, list<Person> ps);
	boolean select(String name, list<Teilnehmer*> ps);

};
#endif // !defined(EA_1F693830_6283_4e37_B639_A49F2ADA0073__INCLUDED_)
