#pragma once
#include "CAnimalCarnivor.h"
class CLeu : public CAnimalCarnivor
{
public:
	 void citire_date();
	 void afisare_date();
private:
	float temperatura_minima_suportata;
	string tara_de_provenienta;
};

