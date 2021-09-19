#include "CAnimalCarnivor.h"

CAnimalCarnivor::CAnimalCarnivor(){}

CAnimalCarnivor::CAnimalCarnivor(string nume, string data_aducerii, float greutate, string hrana_preferata, float cantitate_consumata_pe_zi)
: CAnimal(nume, data_aducerii, greutate, hrana_preferata, cantitate_consumata_pe_zi)
{
	tipul_animalului = "carnivor";
}