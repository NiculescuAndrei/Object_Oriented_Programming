#include "CVulpe.h"

void CVulpe::citire_date()
{
	cout << "Introduceti numele vulpii: " << endl;
	getline(cin, nume);

	cout << "Introduceti data aducerii lui " << nume << endl;
	cin >> data_aducerii;

	cout << "Introduceti greutatea lui " << nume << endl;
	cin >> greutate;

	cout << "Introduceti hrana preferata a lui " << nume << endl;
	cin >> hrana_preferata;

	cout << "Introduceti cantitatea consumata pe zi de catre " << nume << endl;
	cin >> cantitate_consumata_pe_zi;

	cout << "Introduceti temperatura maxima de trai a lui " << nume << endl;
	cin >> temperatura_maxima_de_trai;

	cout << "Introduceti tipul lui " << nume << endl;
	cin >> tip;

	cin.get();
}

void CVulpe::afisare_date()
{
	cout << endl;
	cout << "Numele vulpii este: " << nume << endl;
	cout << "Data aducerii lui " << nume << " este: " << data_aducerii << endl;
	cout << "Greutatea lui " << nume << " este: " << greutate << endl;
	cout << "Hrana preferata a lui " << nume << " este: " << hrana_preferata << endl;
	cout << "Cantitatea consumata pe zi de catre " << nume << " este: " << cantitate_consumata_pe_zi << endl;
	cout << "Tipul animalului este: " << tipul_animalului << endl;
	cout << "Temperatura maxima de trai a lui " << nume << " este: " << temperatura_maxima_de_trai << endl;
	cout << "Tipul lui " << nume << " este: " << tip << endl;
}