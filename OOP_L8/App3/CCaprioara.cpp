#include "CCaprioara.h"

void CCaprioara::citire_date()
{
	cout << "Introduceti numele caprioarei: " << endl;
	getline(cin, nume);

	cout << "Introduceti data aducerii lui " << nume << endl;
	cin >> data_aducerii;

	cout << "Introduceti greutatea lui " << nume << endl;
	cin >> greutate;

	cout << "Introduceti hrana preferata a lui " << nume << endl;
	cin >> hrana_preferata;

	cout << "Introduceti cantitatea consumata pe zi de catre " << nume << endl;
	cin >> cantitate_consumata_pe_zi;

	cout << "Introduceti numarul de pui ai lui " << nume  << endl;
	cin >> numarul_de_pui;

	cin.get();
}

void CCaprioara::afisare_date()
{
	cout << endl;
	cout << "Numele caprioarei este: " << nume << endl;
	cout << "Data aducerii lui " << nume << " este: " << data_aducerii << endl;
	cout << "Greutatea lui " << nume << " este: " << greutate << endl;
	cout << "Hrana preferata a lui " << nume << " este: " << hrana_preferata << endl;
	cout << "Cantitatea consumata pe zi de catre " << nume << " este: " << cantitate_consumata_pe_zi << endl;
	cout << "Tipul animalului este: " << tipul_animalului << endl;
	cout << "Numarul de pui ai lui " << nume << " este: " << numarul_de_pui << endl;
}
