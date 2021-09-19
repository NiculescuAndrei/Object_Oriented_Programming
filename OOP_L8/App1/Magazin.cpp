#include "Magazin.h"

void Magazin::citire_date()
{
	cout << "\nIntroduceti indicativul magazinului: " << endl;
	cin >> this->indicativ;

	cin.get();

	cout << "Introduceti dimensiunile magazinului: " << endl;
	getline(cin, this->dimensiuni);

	cout << "Introduceti inaltimea magazinului: " << endl;
	cin >> inaltime;
}

void Magazin::afisare_date()
{
	cout << "\nIndicativul magazinului este: " << this->indicativ << endl;
	cout << "Dimensiunea magazinului este: " << this->dimensiuni << endl;
	cout << "Inaltimea magazinului este: " << this->inaltime << endl;
}

void Magazin::modificare_date()
{
	int optiune;
	cout << "\nApasati 1 pentru a modifica indicativul magazinului: " << endl;
	cout << "Apasati 2 pentru a modifica dimensiunile magazinului: " << endl;
	cout << "Apasati 3 pentru a modifica inaltimea magazinului: " << endl;
	cin >> optiune;
	while (optiune != 4)
	{
		switch (optiune)
		{
		case 1:
			cout << "Introduceti indicativul modificat al magazinului: " << endl;
			cin >> this->indicativ;
			cout << "\nApasati 2 pentru a modifica dimensiunile magazinului: " << endl;
			cout << "Apasati 3 pentru a modifica inaltimea magazinului: " << endl;
			cout << "Apasati 4 pentru a incheia modificarile asupra magazinului. " << endl;
			break;
		case 2:
			cout << "Introduceti dimensiunile modificate ale magazinului: " << endl;
			cin.get();
			getline(cin, this->dimensiuni);
			cout << "\nApasati 1 pentru a modifica indicativul magazinului: " << endl;
			cout << "Apasati 3 pentru a modifica inaltimea magazinului: " << endl;
			cout << "Apasati 4 pentru a incheia modificarile asupra magazinului. " << endl;
			break;
		case 3:
			cout << "Introduceti inaltimea modificata a magazinului: " << endl;
			cin >> this->inaltime;
			cout << "\nApasati 1 pentru a modifica indicativul magazinului: " << endl;
			cout << "Apasati 2 pentru a modifica dimensiunile magazinului: " << endl;
			cout << "Apasati 4 pentru a incheia modificarile asupra magazinului. " << endl;
			break;
		default:
			cout << "\nApasati 1 pentru a modifica indicativul magazinului: " << endl;
			cout << "Apasati 2 pentru a modifica dimensiunile magazinului: " << endl;
			cout << "Apasati 3 pentru a modifica inaltimea magazinului: " << endl;
			cout << "Apasati 4 pentru a incheia modificarile asupra magazinului. " << endl;
			break;
		}
		cin >> optiune;
	}

}