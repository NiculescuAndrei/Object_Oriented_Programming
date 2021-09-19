#include "Loto.h"
#include "Bila.h"
using namespace std;

Loto::~Loto()
{
	delete[] tablou;
}

int Loto::numar_aleator()
{
	int number;
	number = rand() % 49 + 1;
	return number;
}

void Loto::simulare_loto()
{
	int bila_aleasa;
	int numar;
	int contor_bile_potrivite = 0;
	int bilele_utilizatorului[6];

	for (int i = 0; i < 49; i++)
	{
		tablou[i].setValoare(i + 1);
	}
	
	cout << "Introduceti numerele: \n";
	for (int i = 0; i < 6; i++)
	{
		cin >> numar;
		bilele_utilizatorului[i] = numar;
	}

	cout << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << bilele_utilizatorului[i] << "  ";
	}

	cout << endl;

	for (int i = 0; i < 6; i++)
	{
		do
		{
			bila_aleasa = numar_aleator();

		} while (tablou[bila_aleasa - 1].getStareCurenta() != false);

		cout << "\nA fost extrasa bila " << tablou[bila_aleasa - 1].getValoare() << endl;
		tablou[bila_aleasa - 1].setStareCurenta();

		for (int j = 0; j < 6; j++)
		{
			if (tablou[bila_aleasa - 1].getValoare() == bilele_utilizatorului[j])
			{
				contor_bile_potrivite++;
			}
		}
	}
	
	cout << "\nAti nimerit " << contor_bile_potrivite << " bile!\n";
	

}
