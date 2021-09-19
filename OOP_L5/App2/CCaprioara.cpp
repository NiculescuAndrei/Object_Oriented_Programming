#include "CCaprioara.h"

CCaprioara::CCaprioara(){}

CCaprioara::CCaprioara(string nume, string data_aducerii, float greutate, string hrana_preferata, float cantitate_consumata_pe_zi, int numarul_de_pui)
	: CAnimalIerbivor(nume, data_aducerii, greutate, hrana_preferata, cantitate_consumata_pe_zi), CAnimal(nume, data_aducerii, greutate, hrana_preferata, cantitate_consumata_pe_zi)
{
	this->numarul_de_pui = numarul_de_pui;
}

void CCaprioara::afisare_informatii()
{
	CAnimalIerbivor::afisare_informatii();
	cout << "Tipul animalului este: " << tipul_animalului << endl;
	cout << "Numarul de pui ai caprioarei este: " << numarul_de_pui << endl;
}