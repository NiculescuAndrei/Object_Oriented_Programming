#pragma once
#include "CAnimalCarnivor.h"
#include "CAnimalIerbivor.h"
class CUrs : public CAnimalIerbivor, public CAnimalCarnivor
{
public:
	void citire_date();
	void afisare_date();
private:
	int perioada_de_hibernare;
};

