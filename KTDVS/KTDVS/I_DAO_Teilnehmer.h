///////////////////////////////////////////////////////////
//  I_DAO_Teilnehmer.h
//  Implementation of the Interface I_DAO_Teilnehmer
//  Created on:      27-Mai-2021 14:19:33
//  Original author: Simon Ruttmann
///////////////////////////////////////////////////////////

#if !defined(EA_43508566_3A5A_4c77_AEFA_69198D629CC9__INCLUDED_)
#define EA_43508566_3A5A_4c77_AEFA_69198D629CC9__INCLUDED_

#include "Teilnehmer.h"

class I_DAO_Teilnehmer
{

public:
	I_DAO_Teilnehmer() {

	}

	virtual ~I_DAO_Teilnehmer() {

	}

	virtual boolean insert(Teilnehmer teilnehmer) =0;
	virtual boolean update(Teilnehmer* teilnehmer) =0;
	virtual boolean search(Teilnehmer teilnehmer) =0;
	virtual boolean remove(int id) =0;
	virtual boolean select(String name, list<Teilnehmer*> ps) =0;

};
#endif // !defined(EA_43508566_3A5A_4c77_AEFA_69198D629CC9__INCLUDED_)
