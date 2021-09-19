#include "Bulevard.h"

Bulevard::Bulevard()
{
	cout << "Introduceti numarul de zone de pe bulevard: " << endl;
	cin >> numar_zone;
}

Bulevard::~Bulevard()
{
	v.clear();
}

void Bulevard::completare_zone()
{
	int optiune;
	for (int i = 0; i < numar_zone; i++)
	{
		cout << "\nApasati 1 pentru a introduce un spatiu verde pe marginea bulevardului. " << endl;
		cout << "Apasati 2 pentru a introduce o casa pe marginea bulevardului. " << endl;
		cout << "Apasati 3 pentru a introduce un bloc pe marginea bulevardului. " << endl;
		cout << "Apasati 4 pentru a introduce un magazin pe marginea bulevardului. " << endl;
		cin >> optiune;
		if (optiune == 1)
		{
			v.push_back(new Spatiu_Verde());
			v[i]->citire_date();
		}
		else if (optiune == 2)
		{
			v.push_back(new Casa());
			v[i]->citire_date();
		}
		else if (optiune == 3)
		{
			v.push_back(new Bloc());
			v[i]->citire_date();
		}
		else
		{
			v.push_back(new Magazin());
			v[i]->citire_date();
		}
	}
}

void Bulevard::modificare_zona()
{
	if (numar_zone != 0)
	{
		int numar;
		Bulevard::parcurgere_bulevard();
		cout << "\nIntroduceti un numar de la 1 la " << numar_zone << " pentru a indica zona care va fi modificata: " << endl;
		cin >> numar;
		v[numar - 1]->modificare_date();
	}
	else
	{
		cout << "Nu exista nici o zona pe marginea bulevardului care poate fi modificata! " << endl;
	}
}

void Bulevard::daramare_zona()
{
	if (numar_zone != 0)
	{
		int numar;
		Bulevard::parcurgere_bulevard();
		cout << "\nIntroduceti un numar de la 1 la " << numar_zone << " pentru a indica zona care va fi demolata: " << endl;
		cin >> numar;
		v.erase(v.begin() + numar - 1);
		numar_zone--;
	}
	else
	{
		cout << "Nu exista nici o zona pe marginea bulevardului care poate fi demolata! " << endl;
	}
}

void Bulevard::parcurgere_bulevard()
{
	if (numar_zone != 0)
	{
		for (int i = 0; i < numar_zone; i++)
		{
			cout << endl;
			cout << "Zona " << i + 1 << ". ";
			v[i]->afisare_date();
		}
	}
	else
	{
		cout << "Nu exista nici o zona pe marginea bulevardului! " << endl;
	}
}