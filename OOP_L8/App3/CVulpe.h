#pragma once
#include "CAnimalCarnivor.h"
class CVulpe : public CAnimalCarnivor
{
public:
	void citire_date();
	void afisare_date();
private:
	int temperatura_maxima_de_trai;
	string tip;
};

