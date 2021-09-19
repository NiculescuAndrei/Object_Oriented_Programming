#include "CLeu.h"

CLeu::CLeu(){}

CLeu::CLeu(string nume, string data_aducerii, float greutate, string hrana_preferata, float cantitate_consumata_pe_zi, float temperatura_minima_suportata, string tara_de_provenienta)
: CAnimalCarnivor(nume, data_aducerii, greutate, hrana_preferata, cantitate_consumata_pe_zi), CAnimal(nume, data_aducerii, greutate, hrana_preferata, cantitate_consumata_pe_zi)
{
	this->temperatura_minima_suportata = temperatura_minima_suportata;
	this->tara_de_provenienta = tara_de_provenienta;
}

void CLeu::afisare_informatii()
{
	CAnimalCarnivor::afisare_informatii();
	cout << "Tipul animalului este: " << tipul_animalului << endl;
	cout << "Temperatura minima suportata de leu este: " << temperatura_minima_suportata << endl;
	cout << "Tara de provenienta a leului este: " << tara_de_provenienta << endl;
}