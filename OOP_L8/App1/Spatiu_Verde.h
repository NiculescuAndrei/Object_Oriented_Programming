#pragma once
#include "Zona.h"
class Spatiu_Verde : public Zona
{
public:
	void citire_date();
	void afisare_date();
	void modificare_date();
	~Spatiu_Verde();
private:
	vector <string> tablou_arbori;
};

