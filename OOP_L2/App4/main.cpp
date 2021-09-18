#include "adunare.h"
using namespace std;

int main()
{
	int alegere;
	int tablou3[numar_elemente] = { 0 };
	int tablou4[numar_elemente] = { 0 };

	cout << "Apasati 2 pentru adunarea a 2 vectori! " << endl;
	cout << "Apasati 3 pentru adunarea a 3 vectori! " << endl;
	cout << "Apasati 4 pentru adunarea a 4 vectori! " << endl;
	cin >> alegere;

	switch (alegere)
	{

	case 2:
	{
		int tablou1[numar_elemente];
		int tablou2[numar_elemente];
		int rezultat[numar_elemente];

		citire_tablou(tablou1);
		cout << endl;

		citire_tablou(tablou2);

		Add(rezultat, tablou1, tablou2,tablou3,tablou4);
		break;
	}
	case 3:
	{
		int tablou1[numar_elemente];
		int tablou2[numar_elemente];
		int rezultat[numar_elemente];

	
		citire_tablou(tablou1);
		cout << endl;

		citire_tablou(tablou2);
		cout << endl;

		citire_tablou(tablou3);

		Add(rezultat, tablou1, tablou2, tablou3, tablou4);
		break;
	}

	case 4:
	{
		int tablou1[numar_elemente];
		int tablou2[numar_elemente];
		int rezultat[numar_elemente];

		citire_tablou(tablou1);
		cout << endl;

		citire_tablou(tablou2);
		cout << endl;

		citire_tablou(tablou3);
		cout << endl;

		citire_tablou(tablou4);

		Add(rezultat, tablou1, tablou2, tablou3, tablou4);
		break;
	}

	}

	return 0;

}
