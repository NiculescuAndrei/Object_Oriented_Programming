#pragma once
#include "CAnimalIerbivor.h"
#include "CAnimalCarnivor.h"
class CUrs : public CAnimalIerbivor, public CAnimalCarnivor
{
public:
	CUrs();
	CUrs(string nume, string data_aducerii, float greutate, string hrana_preferata, float cantitate_consumata_pe_zi, int perioada_de_hibernare);
	void afisare_informatii() ;
private:
	int perioada_de_hibernare;
};

