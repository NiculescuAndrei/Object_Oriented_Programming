#include "CAnimal.h"

CAnimal::CAnimal() {}

CAnimal::CAnimal(string nume, string data_aducerii, float greutate, string hrana_preferata, float cantitate_consumata_pe_zi)
{
	this->nume = nume;
	this->data_aducerii = data_aducerii;
	this->greutate = greutate;
	this->hrana_preferata = hrana_preferata;
	this->cantitate_consumata_pe_zi = cantitate_consumata_pe_zi;
}

void CAnimal::afisare_informatii()
{
	cout << "Numele animalului este: " << nume << endl;
	cout << "Data aducerii animalului este: " << data_aducerii << endl;
	cout << "Greutatea animalului este: " << greutate << endl;
	cout << "Hrana preferata a animalului este: " << hrana_preferata << endl;
	cout << "Cantitatea consumata pe zi de animal este: " << cantitate_consumata_pe_zi << endl;
}