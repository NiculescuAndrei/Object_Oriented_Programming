#include "Complex.h"

int main()
{
	int numar_elemente_complexe;
	cout << "Introduceti numarul de elemente complexe: " << endl;
	cin >> numar_elemente_complexe;

	Complex* tablou = new Complex[numar_elemente_complexe];

	for (int i = 0; i < numar_elemente_complexe; i++)
	{
		double parte_reala;
		double parte_imaginara;

		cout << "Introduceti partea reala a numarului complex " << i + 1 << " :" << endl;
		cin >> parte_reala;

		cout << "Introduceti partea imaginara a numarului complex " << i + 1 << " :" << endl;
		cin >> parte_imaginara;

		if (parte_reala == 0 && parte_imaginara == 0)
		{
			tablou[i] = Complex();
		}
		else if (parte_reala != 0 && parte_imaginara == 0)
		{
			tablou[i] = Complex(parte_reala);
		}
		else if (parte_reala != 0 && parte_imaginara != 0)
		{
			tablou[i] = Complex(parte_reala, parte_imaginara);
		}
	}

	cout << "Tabloul contine urmatoarele elemente complexe: " << endl;
	for (int i = 0; i < numar_elemente_complexe; i++)
	{
		cout << "Elementul " << i + 1 << ": ";
		tablou[i].afisare();
	}

	Complex suma_puteri_3;
	Complex suma_puteri_4;
	Complex rezultat;

	cout << endl;

	for (int i = 0; i < numar_elemente_complexe; i = i + 2)
	{
		Complex putere;
		putere = tablou[i] ^ 3;
		cout << "Elementul " << i + 1 << " ridicat la puterea a 3-a este: ";
		putere.afisare();
		suma_puteri_3 = suma_puteri_3 + putere;
	}

	cout << "\nSuma puterilor 3 ale elementelor cu rang impar din tablou este: ";
	suma_puteri_3.afisare();

	cout << endl;

	for (int i = 1; i < numar_elemente_complexe; i = i + 2)
	{
		Complex putere;
		putere = tablou[i] ^ 4;
		cout << "Elementul " << i + 1 << " ridicat la puterea a 4-a este: ";
		putere.afisare();
		suma_puteri_4 = suma_puteri_4 + putere;
	}

	cout << "\nSuma puterilor 4 ale elementelor cu rand par din tablou este: ";
	suma_puteri_4.afisare();

	rezultat = suma_puteri_3 / suma_puteri_4;
	cout << "\nRezultatul expresiei este: ";
	rezultat.afisare();

	delete[] tablou;

    return 0;  
}
