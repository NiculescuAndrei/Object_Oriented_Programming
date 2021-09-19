#pragma once
#include "Zona.h"
class Bloc : public Zona
{
public:
	void citire_date();
	void afisare_date();
	void modificare_date();
private:
	int numar_etaje;
	bool magazin_parter;
	float inaltime;
};

