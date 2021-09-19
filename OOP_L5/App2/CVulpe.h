#pragma once
#include "CAnimalCarnivor.h"
class CVulpe : public CAnimalCarnivor
{
public:
	CVulpe();
	CVulpe(string nume, string data_aducerii, float greutate, string hrana_preferata, float cantitate_consumata_pe_zi, float temperatura_maxima_de_trai, string tip);
	void afisare_informatii();
private:
	int temperatura_maxima_de_trai;
	string tip;
};

