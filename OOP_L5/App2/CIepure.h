#pragma once
#include "CAnimalIerbivor.h"
class CIepure : public CAnimalIerbivor
{
public:
	CIepure();
	CIepure(string nume, string data_aducerii, float greutate, string hrana_preferata, float cantitate_consumata_pe_zi, string suprafata_minima_de_trai);
	void afisare_informatii();
private:
	string suprafata_minima_de_trai;
};

