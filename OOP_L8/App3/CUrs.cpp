#include "CUrs.h"

void CUrs::citire_date()
{
	cout << "Introduceti numele ursului: " << endl;
	getline(cin, nume);

	cout << "Introduceti data aducerii lui " << nume << endl;
	cin >> data_aducerii;

	cout << "Introduceti greutatea lui " << nume << endl;
	cin >> greutate;

	cout << "Introduceti hrana preferata a lui " << nume << endl;
	cin >> hrana_preferata;

	cout << "Introduceti cantitatea consumata pe zi de catre " << nume << endl;
	cin >> cantitate_consumata_pe_zi;

	cout << "Introduceti perioada de hibernare a lui " << nume << endl;
	cin >> perioada_de_hibernare;

	cin.get();
}

void CUrs::afisare_date()
{
	cout << endl;
	cout << "Numele ursului este: " << nume << endl;
	cout << "Data aducerii lui " << nume << " este: " << data_aducerii << endl;
	cout << "Greutatea lui " << nume << " este: " << greutate << endl;
	cout << "Hrana preferata a lui " << nume << " este: " << hrana_preferata << endl;
	cout << "Cantitatea consumata pe zi de catre " << nume << " este: " << cantitate_consumata_pe_zi << endl;
	cout << "Tipul animalului este: carnivor si ierbivor " << endl;
	cout << "Perioada de hibernare a animalului este: " << perioada_de_hibernare << endl;
}