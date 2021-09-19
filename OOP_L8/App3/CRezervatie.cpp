#include "CRezervatie.h"

void CRezervatie::populare_rezervatie()
{
	for (int i = 0; i < numar_animale; i++)
	{
		int alegere;
		cout << "Apasati 1 pentru a introduce un leu in rezervatie: " << endl;
		cout << "Apasati 2 pentru a introduce un iepure in rezervatie: " << endl;
		cout << "Apasati 3 pentru a introduce o caprioara in rezervatie: " << endl;
		cout << "Apasati 4 pentru a introduce o vulpe in rezervatie: " << endl;
		cout << "Apasati 5 pentru a introduce un urs in rezervatie: " << endl;
		cin >> alegere;
		cin.get();

		if (alegere == 1)
		{
			v.push_back(new CLeu());
			v[i]->citire_date();
		}
		else if (alegere == 2)
		{
			v.push_back(new CIepure());
			v[i]->citire_date();
		}
		else if (alegere == 3)
		{
			v.push_back(new CCaprioara());
			v[i]->citire_date();
		}
		else if (alegere == 4)
		{
			v.push_back(new CVulpe());
			v[i]->citire_date();
		}
		else if (alegere == 5)
		{
			v.push_back(new CUrs());
			v[i]->citire_date();
		}
	}
}

void CRezervatie::afisare_animale_rezervatie()
{
	for (int i = 0; i < numar_animale; i++)
	{
		v[i]->afisare_date();
	}
}