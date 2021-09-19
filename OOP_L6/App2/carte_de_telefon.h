#pragma once
#include "Abonat.h"
class carte_de_telefon
{
public:
	carte_de_telefon();
	void adaugare_abonat();
	void cautare_dupa_nume();
private:
	int numar_abonati;
	vector <Abonat> lista_abonati;
};

