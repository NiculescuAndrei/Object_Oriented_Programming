#include "Casa.h"

void Casa::citire_date()
{
	cout << "\nIntroduceti indicativul casei: " << endl;
	cin >> this->indicativ;

	cin.get();

	cout << "Introduceti dimensiunile casei: " << endl;
	getline(cin, this->dimensiuni);

	cout << "Apasati 0 daca casa nu are etaj sau 1 daca are: " << endl;
	cin >> this->etaj;

	cout << "Introduceti numarul de camere ale casei: " << endl;
	cin >> this->numar_de_camere;

	cout << "Introduceti numarul de persoane pe care le poate adaposti casa: " << endl;
	cin >> this->capacitate_persoane;
}

void Casa::afisare_date()
{
	cout << "\nIndicativul casei este: " << this->indicativ << endl;
	cout << "Dimensiunea casei este: " << this->dimensiuni << endl;
	if (this->etaj == false)
	{
		cout << "Casa nu are etaj " << endl;
	}
	else
	{
		cout << "Casa are etaj " << endl;
	}
	cout << "Numarul de camere ale casei este: " << this->numar_de_camere << endl;
	cout << "Numarul de persoane pe care le poate adaposti casa este: " << this->capacitate_persoane << endl;
}

void Casa::modificare_date()
{
	int optiune;
	cout << "\nApasati 1 pentru a modifica indicativul casei: " << endl;
	cout << "Apasati 2 pentru a modifica dimensiunile casei: " << endl;
	cout << "Apasati 3 pentru a modifica daca casa are sau nu etaj: " << endl;
	cout << "Apasati 4 pentru a modifica numarul de camere ale casei: " << endl;
	cout << "Apasati 5 pentru a modifica numarul de persoane pe care le poate adaposti casa: " << endl;
	cin >> optiune;
	while (optiune != 6)
	{
		switch (optiune)
		{
		case 1:
			cout << "Introduceti indicativul modificat al casei: " << endl;
			cin >> this->indicativ;
			cout << "\nApasati 2 pentru a modifica dimensiunile casei: " << endl;
			cout << "Apasati 3 pentru a modifica daca casa are sau nu etaj: " << endl;
			cout << "Apasati 4 pentru a modifica numarul de camere ale casei: " << endl;
			cout << "Apasati 5 pentru a modifica numarul de persoane pe care le poate adaposti casa: " << endl;
			cout << "Apasati 6 pentru a incheia modificarile asupra casei. " << endl;
			break;
		case 2:
			cout << "Introduceti dimensiunile modificate ale casei: " << endl;
			cin.get();
			getline(cin, this->dimensiuni);
			cout << "\nApasati 1 pentru a modifica indicativul casei: " << endl;
			cout << "Apasati 3 pentru a modifica daca casa are sau nu etaj: " << endl;
			cout << "Apasati 4 pentru a modifica numarul de camere ale casei: " << endl;
			cout << "Apasati 5 pentru a modifica numarul de persoane pe care le poate adaposti casa: " << endl;
			cout << "Apasati 6 pentru a incheia modificarile asupra casei. " << endl;
			break;
		case 3:
			cout << "Apasati 0 daca casa nu are etaj sau 1 daca are: " << endl;
			cin >> this->etaj;
			cout << "\nApasati 1 pentru a modifica indicativul casei: " << endl;
			cout << "Apasati 2 pentru a modifica dimensiunile casei: " << endl;
			cout << "Apasati 4 pentru a modifica numarul de camere ale casei: " << endl;
			cout << "Apasati 5 pentru a modifica numarul de persoane pe care le poate adaposti casa: " << endl;
			cout << "Apasati 6 pentru a incheia modificarile asupra casei. " << endl;
			break;
		case 4:
			cout << "Introduceti numarul modificat de camere ale casei: " << endl;
			cin >> this->numar_de_camere;
			cout << "\nApasati 1 pentru a modifica indicativul casei: " << endl;
			cout << "Apasati 2 pentru a modifica dimensiunile casei: " << endl;
			cout << "Apasati 3 pentru a modifica daca casa are sau nu etaj: " << endl;
			cout << "Apasati 5 pentru a modifica numarul de persoane pe care le poate adaposti casa: " << endl;
			cout << "Apasati 6 pentru a incheia modificarile asupra casei. " << endl;
			break;
		case 5:
			cout << "Introduceti numarul modificat de persoane pe care le poate adaposti casa: " << endl;
			cin >> this->capacitate_persoane;
			cout << "\nApasati 1 pentru a modifica indicativul casei: " << endl;
			cout << "Apasati 2 pentru a modifica dimensiunile casei: " << endl;
			cout << "Apasati 3 pentru a modifica daca casa are sau nu etaj: " << endl;
			cout << "Apasati 4 pentru a modifica numarul de camere ale casei: " << endl;
			cout << "Apasati 6 pentru a incheia modificarile asupra casei. " << endl;
			break;
		default:
			cout << "\nApasati 1 pentru a modifica indicativul casei: " << endl;
			cout << "Apasati 2 pentru a modifica dimensiunile casei: " << endl;
			cout << "Apasati 3 pentru a modifica daca casa are sau nu etaj: " << endl;
			cout << "Apasati 4 pentru a modifica numarul de camere ale casei: " << endl;
			cout << "Apasati 5 pentru a modifica numarul de persoane pe care le poate adaposti casa: " << endl;
			cout << "Apasati 6 pentru a incheia modificarile asupra casei. " << endl;
			break;
		}
		cin >> optiune;
	}
}