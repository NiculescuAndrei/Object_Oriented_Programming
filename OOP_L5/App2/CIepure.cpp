#include "CIepure.h"

CIepure::CIepure(){}

CIepure::CIepure(string nume, string data_aducerii, float greutate, string hrana_preferata, float cantitate_consumata_pe_zi, string suprafata_minima_de_trai)
	: CAnimalIerbivor(nume, data_aducerii, greutate, hrana_preferata, cantitate_consumata_pe_zi), CAnimal(nume, data_aducerii, greutate, hrana_preferata, cantitate_consumata_pe_zi)
{
	this->suprafata_minima_de_trai = suprafata_minima_de_trai;
}

void CIepure::afisare_informatii()
{
	CAnimalIerbivor::afisare_informatii();
	cout << "Tipul animalului este: " << tipul_animalului << endl;
	cout << "Suprafata minima de trai a iepurelui este: " << suprafata_minima_de_trai << endl;
}