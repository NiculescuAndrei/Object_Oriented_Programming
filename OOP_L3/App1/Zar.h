#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>

class Zar
{
public:
	Zar();
	~Zar();
	int numar_fata_superioara;
	int* numere_obtinute = new int[9000];
	void simulare_aruncare_zar(Zar &z1, Zar &z2);
	void frecventa_aparitie_fata(Zar &z);
	void perechea_predominanta_si_minora(Zar& z1, Zar& z2);
	void perechea_aparitii_consecutive(Zar& z1, Zar& z2);
};

