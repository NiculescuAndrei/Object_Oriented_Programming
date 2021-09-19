#pragma once
#include "Zona.h"
class Casa : public Zona
{
public:
	void citire_date();
	void afisare_date();
	void modificare_date();
private:
	bool etaj;
	int numar_de_camere;
	int capacitate_persoane;
};

