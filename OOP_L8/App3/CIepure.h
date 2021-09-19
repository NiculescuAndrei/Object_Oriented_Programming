#pragma once
#include "CAnimalIerbivor.h"

class CIepure : public CAnimalIerbivor
{
public:
	void citire_date();
	void afisare_date();
private:
	string suprafata_minima_de_trai;
};

