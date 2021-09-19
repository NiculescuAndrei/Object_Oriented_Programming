#include "Abonat.h"

Abonat::Abonat()
{
	cout << "Introduceti numele abonatului: " << endl;
	getline(cin, nume);

	cout << "Introduceti adresa abonatului: " << endl;
	getline(cin, adresa);

	cout << "Introduceti numarul de telefon al abonatului: " << endl;
	cin >> numar_de_telefon;

	cout << endl;
	cin.get();
}