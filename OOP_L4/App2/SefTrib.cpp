#include "SefTrib.h"
#include "MembruTrib.h"

SefTrib::~SefTrib()
{
	delete[] tablou;
}

int SefTrib::alegere_sef_trib()
{

	int candidat_pozitie1 = 0; // contorizam numarul de voturi in turul 2 pentru candidatul de pe pozitia 1
	int numar_candidat_pozitie1; // retinem numarul candidatului de pe pozitia 1

	int candidat_pozitie2 = 0; // contorizam numarul de voturi in turul 2 pentru candidatul de pe pozitia 2
	int numar_candidat_pozitie2; // retinem numarul candidatului de pe pozitia 2

	int maxim = -1;

	int numar_aleator;

	int total_voturi = 0;

	int voturi_candidati[6] = { 0 };

	cout << "Numarul de membri este: " << numar_membri<<endl;
	for (int i = 0; i < numar_membri; i++)
	{
		total_voturi += tablou[i].getNumarVoturi();
	}
	cout << "Numarul total de voturi este: "<<total_voturi << endl;
	cout << endl;

	//Turul 1
	// Fiecare membru voteaza de atatea ori cat are voie
	for (int i = 0; i < numar_membri; i++)
	{
		for (int j = 0; j < tablou[i].getNumarVoturi(); j++)
		{
			numar_aleator = rand() % 6 + 1;
			voturi_candidati[numar_aleator - 1]++;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		cout << "Candidatul " << i + 1 << " are " << voturi_candidati[i] << " voturi \n";
		if (voturi_candidati[i] >= (total_voturi / 2 + 1))
		{
			cout << "Candidatul " << i + 1 << " a castigat alegerile si este acum sef de trib!";
			return 0;
		}
	}

	// Determinam candidatul de pe pozitia 1 din turul 1
	for (int i = 0; i < 6; i++)
	{
		if (voturi_candidati[i] > maxim)
		{
			maxim = voturi_candidati[i];
			numar_candidat_pozitie1 = i + 1;
		}
	}

	maxim = -1;

	// Determinam candidatul de pe pozitia 2 din turul 1
	for (int i = 0; i < 6; i++)
	{
		if (voturi_candidati[i] > maxim && i != numar_candidat_pozitie1 - 1)
		{
			maxim = voturi_candidati[i];
			numar_candidat_pozitie2 = i + 1;
		}
	}

	cout << "\nPrimii doi candidati care merg in turul 2 sunt: " << numar_candidat_pozitie1 << " si " << numar_candidat_pozitie2 << endl;

	//Turul 2
	while (1)
	{
		for (int i = 0; i < numar_membri; i++)
		{
			for (int j = 0; j < tablou[i].getNumarVoturi(); j++)
			{
				numar_aleator = rand() % 6 + 1;
				if (numar_aleator == 1 || numar_aleator == 2 || numar_aleator == 3)
				{
					candidat_pozitie1++;
				}
				else
				{
					candidat_pozitie2++;
				}
			}
		}

		cout << "\nCandidatul " << numar_candidat_pozitie1 << " a obtinut " << candidat_pozitie1 << " voturi in turul 2 \n";
		cout << "Candidatul " << numar_candidat_pozitie2 << " a obtinut " << candidat_pozitie2 << " voturi in turul 2 \n";
		if (candidat_pozitie1 >= (total_voturi / 2 + 1))
		{
			cout << "Candidatul " << numar_candidat_pozitie1 << " a castigat alegerile si este acum sef de trib! \n";
			return 0;
		}
		else if (candidat_pozitie2 >= (total_voturi / 2 + 1))
		{
			cout << "Candidatul " << numar_candidat_pozitie2 << " a castigat alegerile si este acum sef de trib! \n";
			return 0;
		}
		else
		{
			cout << "Se reia turul 2 deoarece nici unul dintre candidati nu a castigat \n";
			candidat_pozitie1 = 0;
			candidat_pozitie2 = 0;
		}
	}



}