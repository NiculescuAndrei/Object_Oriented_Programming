#include "CUrs.h"

CUrs::CUrs(){}

CUrs::CUrs(string nume, string data_aducerii, float greutate, string hrana_preferata, float cantitate_consumata_pe_zi, int perioada_de_hibernare)
	:CAnimal(nume, data_aducerii, greutate, hrana_preferata, cantitate_consumata_pe_zi)
{
	this->perioada_de_hibernare = perioada_de_hibernare;
}

void CUrs::afisare_informatii()
{
	CAnimal::afisare_informatii();
	cout << "Tipul animalului este: carnivor si ierbivor " << endl;
	cout << "Perioada de hibernare a animalului este: " << perioada_de_hibernare << endl;
}