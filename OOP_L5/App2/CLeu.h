#pragma once
#include "CAnimalCarnivor.h"
class CLeu : public CAnimalCarnivor
{
public:
	CLeu();
	CLeu(string nume, string data_aducerii, float greutate, string hrana_preferata, float cantitate_consumata_pe_zi, float temperatura_minima_suportata, string tara_de_provenienta);
	void afisare_informatii();
private:
	float temperatura_minima_suportata;
	string tara_de_provenienta;
};

