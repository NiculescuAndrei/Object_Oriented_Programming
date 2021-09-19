#include "Spatiu_Verde.h"

Spatiu_Verde::~Spatiu_Verde()
{
	tablou_arbori.clear();
}

void Spatiu_Verde::citire_date()
{
	cout << "\nIntroduceti indicativul spatiului verde: " << endl;
	cin >> this->indicativ;

	cin.get();

	cout << "Introduceti dimensiunile spatiului verde: " << endl;
	getline(cin, this->dimensiuni);

	int alegere;
	string element_spatiu_verde;

	cout << "Apasati 1 pentru a introduce o planta sau un arbore in tablou: " << endl;
	cin >> alegere;

	while (alegere != 2)
	{
		switch (alegere)
		{
		case 1:
			cout << "Introduceti numele plantei sau arborelui pe care vreti sa-l introduceti: " << endl;
			cin >> element_spatiu_verde;
			this->tablou_arbori.push_back(element_spatiu_verde);
			cout << "\nApasati 1 pentru a introduce o alta planta sau un alt arbore in tablou: " << endl;
			cout << "Apasati 2 pentru a incheia introducerea plantelor/arborilor " << endl;
			break;
		default:
			cout << "\nApasati 1 pentru a introduce o planta sau un arbore in tablou: " << endl;
			cout << "Apasati 2 pentru a incheia introducerea plantelor/arborilor " << endl;
			break;
		}
		cin >> alegere;
	}
}

void Spatiu_Verde::afisare_date()
{
	cout << "\nIndicativul spatiului verde este: " << this->indicativ << endl;
	cout << "Dimensiunea spatiului verde este: " << this->dimensiuni << endl;
	cout << "Spatiul verde contine urmatoarea lista de plante/arbori: " << endl;
	for (int i = 0; i < tablou_arbori.size(); i++)
	{
		cout << i + 1 << ". " << this->tablou_arbori[i] << endl;
	}
}

void Spatiu_Verde::modificare_date()
{
	int optiune;
	cout << "\nApasati 1 pentru a modifica indicativul magazinului: " << endl;
	cout << "Apasati 2 pentru a modifica dimensiunile magazinului: " << endl;
	cout << "Apasati 3 pentru a modifica lista plantelor/arborilor: " << endl;
	cin >> optiune;
	while (optiune != 4)
	{
		switch (optiune)
		{
		case 1:
			cout << "Introduceti indicativul modificat al spatiului verde: " << endl;
			cin >> this->indicativ;
			cout << "\nApasati 2 pentru a modifica dimensiunile spatiului verde: " << endl;
			cout << "Apasati 3 pentru a modifica lista plantelor/arborilor: " << endl;
			cout << "Apasati 4 pentru a incheia modificarile asupra spatiului verde. " << endl;
			break;
		case 2:
			cout << "Introduceti dimensiunile modificate ale spatiului verde: " << endl;
			cin.get();
			getline(cin, this->dimensiuni);
			cout << "\nApasati 1 pentru a modifica indicativul spatiului verde: " << endl;
			cout << "Apasati 3 pentru a modifica lista plantelor/arborilor: " << endl;
			cout << "Apasati 4 pentru a incheia modificarile asupra spatiului verde. " << endl;
			break;
		case 3:
		{
			int optiune_tablou_arbori;
			string element_adaugat;

			cout << "\nApasati 1 pentru a adauga o planta saun un arbore: " << endl;
			cout << "Apasati 2 pentru a sterge o planta sau un arbore: " << endl;
			cin >> optiune_tablou_arbori;

			while (optiune_tablou_arbori != 3)
			{
				if (optiune_tablou_arbori == 1)
				{
					cout << "Introduceti numele plantei sau arborelui pe care vreti sa-l introduceti: " << endl;
					cin >> element_adaugat;
					this->tablou_arbori.push_back(element_adaugat);
				}
				else if (optiune_tablou_arbori == 2)
				{
					if (tablou_arbori.size() != 0)
					{
						afisare_date();
						int numar;
						cout << "\nIntroduceti un numar de la 1 la " << tablou_arbori.size() << " pentru a indica planta/arborele care va fi sters: " << endl;
						cin >> numar;
						tablou_arbori.erase(tablou_arbori.begin() + numar - 1);
					}
					else
					{
						cout << "Nu exista nici o planta sau nici un arbore care poate fi sters! " << endl;
					}
				}
				cout << "\nApasati 1 pentru a adauga o planta saun un arbore: " << endl;
				cout << "Apasati 2 pentru a sterge o planta sau un arbore: " << endl;
				cout << "Apasati 3 pentru a incheia modificarea listei de plante " << endl;
				cin >> optiune_tablou_arbori;
			}

			cout << "\nApasati 1 pentru a modifica indicativul spatiului verde: " << endl;
			cout << "Apasati 2 pentru a modifica dimensiunile spatiului verde: " << endl;
			cout << "Apasati 4 pentru a incheia modificarile asupra spatiului verde. " << endl;
			break;
		}
		default:
			cout << "\nApasati 1 pentru a modifica indicativul spatiului verde: " << endl;
			cout << "Apasati 2 pentru a modifica dimensiunile spatiului verde: " << endl;
			cout << "Apasati 3 pentru a modifica lista plantelor/arborilor: " << endl;
			cout << "Apasati 4 pentru a incheia modificarile asupra spatiului verde. " << endl;
			break;
		}
		cin >> optiune;
	}
}