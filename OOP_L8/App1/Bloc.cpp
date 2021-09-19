#include "Bloc.h"

void Bloc::citire_date()
{
	cout << "\nIntroduceti indicativul blocului: " << endl;
	cin >> this->indicativ;

	cin.get();

	cout << "Introduceti dimensiunile blocului: " << endl;
	getline(cin, this->dimensiuni);

	cout << "Introduceti numarul de etaje ale blocului: " << endl;
	cin >> this->numar_etaje;

	cout << "Apasati 0 daca blocul nu are magazin la parter sau 1 daca are: " << endl;
	cin >> this->magazin_parter;

	cout << "Introduceti inaltimea blocului: " << endl;
	cin >> this->inaltime;
}

void Bloc::afisare_date()
{
	cout << "\nIndicativul blocului este: " << this->indicativ << endl;
	cout << "Dimensiunea blocului este: " << this->dimensiuni << endl;
	cout << "Numarul de etaje ale blocului este: " << this->numar_etaje << endl;
	if (this->magazin_parter == false)
	{
		cout << "Blocul nu are magazin la parter " << endl;
	}
	else
	{
		cout << "Blocul are magazin la parter " << endl;
	}
	cout << "Inaltimea blocului este: " << this->inaltime << endl;
}

void Bloc::modificare_date()
{
	int optiune;
	cout << "\nApasati 1 pentru a modifica indicativul blocului: " << endl;
	cout << "Apasati 2 pentru a modifica dimensiunile blocului: " << endl;
	cout << "Apasati 3 pentru a modifica numarul de etaje ale blocului " << endl;
	cout << "Apasati 4 pentru a modifica daca blocul are sau nu magazin la parter: " << endl;
	cout << "Apasati 5 pentru a modifica inaltimea blocului: " << endl;
	cin >> optiune;
	while (optiune != 6)
	{
		switch (optiune)
		{
		case 1:
			cout << "Introduceti indicativul modificat al blocului: " << endl;
			cin >> this->indicativ;
			cout << "\nApasati 2 pentru a modifica dimensiunile blocului: " << endl;
			cout << "Apasati 3 pentru a modifica numarul de etaje ale blocului " << endl;
			cout << "Apasati 4 pentru a modifica daca blocul are sau nu magazin la parter: " << endl;
			cout << "Apasati 5 pentru a modifica inaltimea blocului: " << endl;
			cout << "Apasati 6 pentru a incheia modificarile asupra blocului. " << endl;
			break;
		case 2:
			cout << "Introduceti dimensiunile modificate ale blocului: " << endl;
			cin.get();
			getline(cin, this->dimensiuni);
			cout << "\nApasati 1 pentru a modifica indicativul blocului: " << endl;
			cout << "Apasati 3 pentru a modifica numarul de etaje ale blocului " << endl;
			cout << "Apasati 4 pentru a modifica daca blocul are sau nu magazin la parter: " << endl;
			cout << "Apasati 5 pentru a modifica inaltimea blocului: " << endl;
			cout << "Apasati 6 pentru a incheia modificarile asupra blocului. " << endl;
			break;
		case 3:
			cout << "Introduceti numarul de etaje modificate ale blocului: " << endl;
			cin >> this->numar_etaje;
			cout << "\nApasati 1 pentru a modifica indicativul blocului: " << endl;
			cout << "Apasati 2 pentru a modifica dimensiunile blocului: " << endl;
			cout << "Apasati 4 pentru a modifica daca blocul are sau nu magazin la parter: " << endl;
			cout << "Apasati 5 pentru a modifica inaltimea blocului: " << endl;
			cout << "Apasati 6 pentru a incheia modificarile asupra blocului. " << endl;
			break;
		case 4:
			cout << "Apasati 0 daca blocul nu are magazin la parter sau 1 daca are: " << endl;
			cin >> this->magazin_parter;
			cout << "\nApasati 1 pentru a modifica indicativul blocului: " << endl;
			cout << "Apasati 2 pentru a modifica dimensiunile blocului: " << endl;
			cout << "Apasati 3 pentru a modifica numarul de etaje ale blocului " << endl;
			cout << "Apasati 5 pentru a modifica inaltimea blocului: " << endl;
			cout << "Apasati 6 pentru a incheia modificarile asupra blocului. " << endl;
			break;
		case 5:
			cout << "Introduceti inaltimea modificata a blocului: " << endl;
			cin >> this->inaltime;
			cout << "\nApasati 1 pentru a modifica indicativul blocului: " << endl;
			cout << "Apasati 2 pentru a modifica dimensiunile blocului: " << endl;
			cout << "Apasati 3 pentru a modifica numarul de etaje ale blocului " << endl;
			cout << "Apasati 4 pentru a modifica daca blocul are sau nu magazin la parter: " << endl;
			cout << "Apasati 6 pentru a incheia modificarile asupra blocului. " << endl;
			break;
		default:
			cout << "\nApasati 1 pentru a modifica indicativul blocului: " << endl;
			cout << "Apasati 2 pentru a modifica dimensiunile blocului: " << endl;
			cout << "Apasati 3 pentru a modifica numarul de etaje ale blocului " << endl;
			cout << "Apasati 4 pentru a modifica daca blocul are sau nu magazin la parter: " << endl;
			cout << "Apasati 5 pentru a modifica inaltimea blocului: " << endl;
			cout << "Apasati 6 pentru a incheia modificarile asupra blocului. " << endl;
			break;
		}
		cin >> optiune;
	}
}