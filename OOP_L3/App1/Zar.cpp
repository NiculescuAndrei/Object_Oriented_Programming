#include "Zar.h"
using namespace std;

Zar::Zar()
{
	for (int i = 0; i < 9000; i++)
	{
		numar_fata_superioara = 0;
		numere_obtinute[i] = 0;
	}
}

Zar::~Zar()
{
	delete[] numere_obtinute;
}

void Zar::simulare_aruncare_zar(Zar &z1, Zar &z2)
{
	srand(time(NULL));

	for (int i = 0; i < 9000; i++)
	{
		z1.numar_fata_superioara = rand() % 6 + 1;
		z1.numere_obtinute[i] = z1.numar_fata_superioara;
	}

	cout << endl;

	for(int i = 0; i < 9000; i++)
	{
		z2.numar_fata_superioara = rand() % 6 + 1;
		z2.numere_obtinute[i] = z2.numar_fata_superioara;
	}
}

void Zar::frecventa_aparitie_fata(Zar &z)
{
	cout << endl;
	int contorizare_aparitii[6] = { 0 };

	for (int i = 0; i < 9000; i++)
	{
		contorizare_aparitii[z.numere_obtinute[i]-1]++;
	}

	for (int i = 0; i < 6; i++)
	{
		cout << "Numarul de aparitii ale fetei " << i + 1 << " este: \n";
		cout << contorizare_aparitii[i] << endl;
	}
}

void Zar::perechea_predominanta_si_minora(Zar& z1, Zar& z2)
{
	int numar1_din_perechea_predominanta = 0;
	int numar2_din_perechea_predominanta = 0;

	int numar1_din_perechea_minora = 0;
	int numar2_din_perechea_minora = 0;

	int tablou[6][6];

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			tablou[i][j] = 0;
		}
	}

	for (int i = 0; i < 9000; i++)
	{
		if (z1.numere_obtinute[i] > z2.numere_obtinute[i])
		{
			tablou[z2.numere_obtinute[i] - 1][z1.numere_obtinute[i] - 1]++;
		}
		else
		{
			tablou[z1.numere_obtinute[i] - 1][z2.numere_obtinute[i] - 1]++;
		}
	}

	int maxim = tablou[0][0];
	int minim = 9001;
	
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (tablou[i][j] > maxim)
			{
				maxim = tablou[i][j];
				numar1_din_perechea_predominanta = i;
				numar2_din_perechea_predominanta = j;
			}

			if (tablou[i][j] != 0 && tablou[i][j] < minim)
			{
				minim = tablou[i][j];
				numar1_din_perechea_minora = i;
				numar2_din_perechea_minora = j;
			}
		}
	}

	cout << "Perechea de numere cu cele mai multe aparitii "<< "(" << tablou[numar1_din_perechea_predominanta][numar2_din_perechea_predominanta] << ")" << " este: " << numar1_din_perechea_predominanta+1 << " si " << numar2_din_perechea_predominanta+1;
	cout << endl;
	cout << "Perechea de numere cu cele mai putine aparitii " << "(" << tablou[numar1_din_perechea_minora][numar2_din_perechea_minora] << ")" << " este: " << numar1_din_perechea_minora+1 << " si " << numar2_din_perechea_minora+1;
	cout << endl;

}

void Zar::perechea_aparitii_consecutive(Zar& z1, Zar& z2)
{
	int maxim = 1;
	int numar1_din_pereche = 0;
	int numar2_din_pereche = 0;

	for (int i = 0; i < 8999; i++)
	{
		int contor = 1;
		for (int j = i+1 ; j < 9000; j++)
		{

			if (z1.numere_obtinute[j] == z1.numere_obtinute[i] && z2.numere_obtinute[j] == z2.numere_obtinute[i] ||
				z1.numere_obtinute[j] == z2.numere_obtinute[i] && z2.numere_obtinute[j] == z1.numere_obtinute[i])
			{
				contor++;
				if (contor > maxim)
				{
					maxim = contor;
					numar1_din_pereche = z1.numere_obtinute[i];
					numar2_din_pereche = z2.numere_obtinute[i];
				}
			}
			else
			{
				break;
			}
		}
	}
	if (maxim != 1)
	{
		cout << "Perechea de numere cu cele mai multe aparitii consecutive " << "(" << maxim << ")" << " este: " << numar1_din_pereche << " si " << numar2_din_pereche;
	}
	else
	{
		cout << "Nu exista cel putin 2 perechi consecutive!";
	}

}