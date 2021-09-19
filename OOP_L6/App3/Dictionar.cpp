#include "Dictionar.h"

Dictionar::Dictionar()
{
}

void Dictionar::creeare_dictionar()
{
	for (int i = 0; i < numar_cuvinte; i++)
	{
		tablou[i].creeare_lista_sinonime();
	}
}

/*void Dictionar::afisare_dictionar()
{
	for (int i = 0; i < numar_cuvinte; i++)
	{
		tablou[i].afisare_lista_sinonime();
	}
}*/

void Dictionar::consultare_dictionar()
{
	string cuvant_cautat;
	int choice;
	cout << "\nApasati 1 pentru a cauta un cuvant in dictionar " << endl;
	cin >> choice;

	while (choice != 2)
	{
		switch (choice)
		{
		case 1:
		{
			bool verificare = false;
			cout << "Introduceti cuvantul pe care doriti sa il cautati " << endl;
			cin >> cuvant_cautat;

			for (int i = 0; i < numar_cuvinte; i++)
			{
				if (tablou[i].cuvant == cuvant_cautat)
				{
					verificare = true;
					cout << "\nCuvantul a fost gasit in dictionar! Uitati sinonimele: " << endl;
					tablou[i].afisare_lista_sinonime();
				}
			}

			if (verificare == false)
			{
				cout << "Cuvantul nu a fost gasit in dictionar! Incercati alt cuvant " << endl;
			}

			cout << "\nApasati 1 pentru a cauta un alt cuvant: " << endl;
			cout << "Apasati 2 pentru a opri cautarea cuvintelor." << endl;
			break;
		}
			
		default:
			cout << "\nApasati 1 pentru a cauta un alt cuvant: " << endl;
			cout << "Apasati 2 pentru a opri cautarea cuvintelor." << endl;
			break;
		}
		cin >> choice;
	}
}