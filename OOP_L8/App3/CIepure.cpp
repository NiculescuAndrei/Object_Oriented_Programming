#include "CIepure.h"

void CIepure::citire_date()
{
	cout << "Introduceti numele iepurelui: " << endl;
	getline(cin, nume);

	cout << "Introduceti data aducerii lui " << nume << endl;
	cin >> data_aducerii;

	cout << "Introduceti greutatea lui " << nume << endl;
	cin >> greutate;

	cout << "Introduceti hrana preferata a lui " << nume << endl;
	cin >> hrana_preferata;

	cout << "Introduceti cantitatea consumata pe zi de catre " << nume << endl;
	cin >> cantitate_consumata_pe_zi;

	cin.get();

	cout << "Introduceti suprafata minima de trai a lui " << nume << endl;
	getline(cin, suprafata_minima_de_trai);
}

void CIepure::afisare_date()
{
	cout << endl;
	cout << "Numele iepurelui este: " << nume << endl;
	cout << "Data aducerii lui " << nume << " este: " << data_aducerii << endl;
	cout << "Greutatea lui " << nume << " este: " << greutate << endl;
	cout << "Hrana preferata a lui " << nume << " este: " << hrana_preferata << endl;
	cout << "Cantitatea consumata pe zi de catre " << nume << " este: " << cantitate_consumata_pe_zi << endl;
	cout << "Tipul animalului este: " << tipul_animalului << endl;
	cout << "Suprafata minima de trai a lui " << nume << " este: " << suprafata_minima_de_trai << endl;
}