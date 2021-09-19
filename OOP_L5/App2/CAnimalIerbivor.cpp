#include "CAnimalIerbivor.h"

CAnimalIerbivor::CAnimalIerbivor(){}

CAnimalIerbivor::CAnimalIerbivor(string nume, string data_aducerii, float greutate, string hrana_preferata, float cantitate_consumata_pe_zi) 
: CAnimal(nume, data_aducerii, greutate, hrana_preferata, cantitate_consumata_pe_zi)
{
	tipul_animalului = "ierbivor";
}