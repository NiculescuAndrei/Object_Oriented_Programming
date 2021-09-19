#include "carte_de_telefon.h"

carte_de_telefon::carte_de_telefon()
{
	numar_abonati = 0;
}

void carte_de_telefon::adaugare_abonat()
{
	lista_abonati.push_back(Abonat());
	numar_abonati++;
}

void carte_de_telefon::cautare_dupa_nume()
{
	bool verificare = false;
	string nume_cautat;

	cout << "Introduceti numele abonatului caruia vreti sa ii aflati numarul de telefon: " << endl;

	getline(cin, nume_cautat);

	for (int i = 0; i < numar_abonati; i++)
	{
		if (lista_abonati[i].nume == nume_cautat)
		{
			verificare = true;
			cout << "Numarul de telefon al abonatului " << lista_abonati[i].nume << " este: " << lista_abonati[i].numar_de_telefon << endl;
		}
	}

	if (verificare == false)
	{
		cout << "Nu s-a gasit nici un abonat cu acest nume in cartea de telefon! " << endl;
	}

}