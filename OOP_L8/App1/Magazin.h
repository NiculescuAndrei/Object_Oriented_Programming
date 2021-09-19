#pragma once
#include "Zona.h"
class Magazin : public Zona
{
public:
	void citire_date();
	void afisare_date();
	void modificare_date();
private:
	float inaltime;
};

