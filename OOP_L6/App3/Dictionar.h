#pragma once
#include "Cuvant.h"
#define numar_cuvinte 2
class Dictionar
{
public:
	Dictionar();
	void creeare_dictionar();
	//void afisare_dictionar();
	void consultare_dictionar();
private:
	Cuvant* tablou = new Cuvant[numar_cuvinte];
};

