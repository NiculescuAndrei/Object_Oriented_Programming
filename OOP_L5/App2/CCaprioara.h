#pragma once
#include "CAnimalIerbivor.h"
class CCaprioara : public CAnimalIerbivor
{
public:
	CCaprioara();
	CCaprioara(string nume, string data_aducerii, float greutate, string hrana_preferata, float cantitate_consumata_pe_zi, int numarul_de_pui);
	void afisare_informatii();
private:
	int numarul_de_pui;
};

