#include "CVulpe.h"

CVulpe::CVulpe(){}

CVulpe::CVulpe(string nume, string data_aducerii, float greutate, string hrana_preferata, float cantitate_consumata_pe_zi, float temperatura_maxima_de_trai, string tip)
	:CAnimalCarnivor(nume, data_aducerii, greutate, hrana_preferata, cantitate_consumata_pe_zi), CAnimal(nume, data_aducerii, greutate, hrana_preferata, cantitate_consumata_pe_zi)
{
	this->temperatura_maxima_de_trai = temperatura_maxima_de_trai;
	this->tip = tip;
}

void CVulpe::afisare_informatii()
{
	CAnimalCarnivor::afisare_informatii();
	cout << "Tipul animalului este: " << tipul_animalului << endl;
	cout << "Temperatura maxima de trai a vulpii este: " << temperatura_maxima_de_trai << endl;
	cout << "Tipul vulpii este: " << tip << endl;
}