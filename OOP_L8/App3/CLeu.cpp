#include "CLeu.h"

void CLeu::citire_date()
{
	cout << "Introduceti numele leului: " << endl;
	getline(cin, nume);

	cout << "Introduceti data aducerii lui " << nume << endl;
	cin >> data_aducerii;

	cout << "Introduceti greutatea lui " << nume << endl;
	cin >> greutate;

	cout << "Introduceti hrana preferata a lui " << nume << endl;
	cin >> hrana_preferata;

	cout << "Introduceti cantitatea consumata pe zi de catre "<< nume << endl;
	cin >> cantitate_consumata_pe_zi;

	cout << "Introduceti temperatura minima suportata de catre " << nume << endl;
	cin >> temperatura_minima_suportata;

	cin.get();

	cout << "Introduceti tara de provenienta a lui " << nume << endl;
	getline(cin, tara_de_provenienta);
}

void CLeu::afisare_date()
{
	cout << endl;
	cout << "Numele leului este: " << nume << endl;
	cout << "Data aducerii lui "<< nume << " este: " << data_aducerii << endl;
	cout << "Greutatea lui " << nume << " este: " << greutate << endl;
	cout << "Hrana preferata a lui " << nume << " este: " << hrana_preferata << endl;
	cout << "Cantitatea consumata pe zi de catre " << nume <<" este: " << cantitate_consumata_pe_zi << endl;
	cout << "Tipul animalului este: " << tipul_animalului << endl;
	cout << "Temperatura minima suportata de "<< nume << " este: " << temperatura_minima_suportata << endl;
	cout << "Tara de provenienta a lui " << nume << " este: " << tara_de_provenienta << endl;
}