#include "adunare.h"
using namespace std;

void Add(int rezultat[numar_elemente], int tablou1[numar_elemente], int tablou2[numar_elemente], int tablou3[numar_elemente], int tablou4[numar_elemente])
{
	for (int i = 0; i < numar_elemente; i++)
	{
		rezultat[i] = tablou1[i] + tablou2[i] + tablou3[i] + tablou4[i];
	}
	
	cout << "\nVectorul rezultat este: \n";

	for (int i = 0; i < numar_elemente; i++)
	{
		cout << rezultat[i] << "  ";
	}
	cout << "\n";
}

void citire_tablou(int tablou[numar_elemente])
{
	for (int i = 0; i < numar_elemente; i++)
	{
		cout << "Introduceti elementul tablou" << '[' << i << ']' << ':';
		cin >> tablou[i];
	}
}