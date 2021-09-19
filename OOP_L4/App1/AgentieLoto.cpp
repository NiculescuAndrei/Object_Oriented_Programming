#include "AgentieLoto.h"
#include "Bila.h"
using namespace std;

AgentieLoto::~AgentieLoto()
{
	delete[] tablou;
}

int AgentieLoto::numar_aleator()
{
	int number;
	number = rand() % 49 + 1;
	return number;
}

void AgentieLoto::simulare_loto()
{
	int contor_bile_potrivite = 0;
	int bila_aleasa;
	int bilet[3][6];
	int bile_extrase[6];
	bool bilet_castigator = false;

	// Initializam tabloul cu toate valorile posibile ale bilelor(de la 1 la 49)
	for (int i = 0; i < 49; i++)
	{
		tablou[i].setValoare(i + 1);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			// pentru fiecare vector de 6 bile testam daca una dintre bile nu a fost cumva adaugata deja pentru a evita repetarea acesteia.
			do
			{
				bilet[i][j] = numar_aleator();
			} while (tablou[bilet[i][j] - 1].getStareCurenta() != false);
			tablou[bilet[i][j] - 1].setStareCurentaTrue();
		}
		// atunci cand trecem la urmatorul vector de 6 bile initializam din nou bilele ca nefiind folosite.
		for (int k = 0; k < 49; k++)
		{
			tablou[k].setStareCurentaFalse();
		}
	}

	cout << "Biletul introdus este: \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << bilet[i][j] << " ";
		}
		cout << endl;
	}

	// Extragerea celor 6 bile
	for (int i = 0; i < 6; i++)
	{
		do
		{
			bila_aleasa = numar_aleator();

		} while (tablou[bila_aleasa - 1].getStareCurenta() != false);

		bile_extrase[i] = bila_aleasa;
		cout << "\nA fost extrasa bila " << tablou[bila_aleasa - 1].getValoare() << endl;
		tablou[bila_aleasa - 1].setStareCurentaTrue();
	}

	cout << endl;	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			for (int k = 0; k < 6; k++)
			{
				if (bile_extrase[j] == bilet[i][k])
				{
					contor_bile_potrivite++;
				}
			}
		}
		if (contor_bile_potrivite == 6)
		{
			bilet_castigator = true;
		}
		else
		{
			cout << "Ati nimerit " << contor_bile_potrivite << " bile din setul " << i + 1 << " de bile alese. \n";
		}
		contor_bile_potrivite = 0;
	}

	if (bilet_castigator == false)
	{
		cout << "\nBiletul dumneavoastra nu este castigator. \n";
	}
	else
	{
		cout << "\nFelicitari! Aveti un bilet castigator.";
	}

}