#pragma once
#include "CAnimal.h"
class CAnimalCarnivor : virtual public CAnimal
{
public:
	CAnimalCarnivor();
	CAnimalCarnivor(string nume, string data_aducerii, float greutate, string hrana_preferata, float cantitate_consumata_pe_zi);
protected:
	string tipul_animalului;
};

