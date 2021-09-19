#pragma once
#include "Zona.h"
#include "Spatiu_Verde.h"
#include "Casa.h"
#include "Bloc.h"
#include "Magazin.h"
class Bulevard
{
public:
	Bulevard();
	~Bulevard();
	void completare_zone();
	void modificare_zona();
	void daramare_zona();
	void parcurgere_bulevard();
private:
	int numar_zone;
	vector <Zona*> v;
};

