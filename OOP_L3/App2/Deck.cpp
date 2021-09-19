#include "Deck.h"
using namespace std;

void Deck::generare_pachet()
{
	srand(time(NULL));
	int number;

	for (int i = 0; i < 52; i++)
	{
		pachet[i].valoare = rand() % 13 + 1;

		number = rand() % 4;
		switch (number)
		{
		case 0:
			pachet[i].suita = "inima";
			break;
		case 1:
			pachet[i].suita = "caro";
			break;
		case 2:
			pachet[i].suita = "trefla";
			break;
		case 3:
			pachet[i].suita = "pica";
			break;
		}

		bool ok = false;
		while (ok != true)
		{
			int contor = 0;
			for (int j = 0; j < 52; j++)
			{
				if (j == i)
				{
					cout << endl;
				}
				else if (pachet[j].valoare == pachet[i].valoare && pachet[j].suita == pachet[i].suita)
				{
					pachet[i].valoare = rand() % 13 + 1;

					number = rand() % 4;
					switch (number)
					{
					case 0:
						pachet[i].suita = "inima";
						break;
					case 1:
						pachet[i].suita = "caro";
						break;
					case 2:
						pachet[i].suita = "trefla";
						break;
					case 3:
						pachet[i].suita = "pica";
						break;
					}
					contor++;
					break;
					// Daca acest bloc de instructiuni nu se executa niciodata
					// arata faptul ca actuala carte de joc nu a fost introdusa
					// inca in pachet ( din acest motiv folosim variabila contor).
					// Altfel, continuam sa generam carti pana este diferita
					// de toate celelalte carti din pachet.
				}
				
			}
			if(contor==0)
				{
					ok = true;
					cout << "valoarea cartii "<< i+1 <<" este: " << pachet[i].valoare << endl;
					cout << "suita cartii " << i+1 <<" este: "<<pachet[i].suita << endl;
					break;
				}
		}
	}
}

int Deck::simulare_blackjack()
{
	bool stare_jucator1 = true;
	bool stare_jucator2 = true;
	int suma_jucator1 = 0;
	int suma_jucator2 = 0;
	int contor1 = 0;
	int contor2 = 1;

	for (int i = 0; i < 52; i++)
	{
		if(stare_jucator1 == true)
		{
			if (pachet[contor1].valoare > 11)
			{
				cout << "\nJucatorul 1 a tras cartea " << pachet[contor1].valoare << " de " << pachet[contor1].suita << endl;

				suma_jucator1 = suma_jucator1 + 10;

				if (suma_jucator1 > 21)
				{
					cout << "Primul jucator a pierdut! \n";
					return 0;
				}

				else
				{
					cout << "Aveti " << suma_jucator1 << " in mana \n";
				}
			}
			else if (pachet[contor1].valoare == 11)
			{
				int alegere = 0;
				cout << "\nJucatorul 1 a tras cartea " << pachet[contor1].valoare << " de " << pachet[contor1].suita << endl;
				cout << "Aveti " << suma_jucator1 << " in mana. Doriti sa adaugati 1 sau 11 la mana curenta? \n";
				cout << "Apasati 1 pentru a adauga 1 sau 2 pentru a adauga 11 \n";
				cin >> alegere;

				if (alegere == 1)
				{
					suma_jucator1 += 1;
				}

				else if (alegere == 2)
				{
					suma_jucator1 += 11;
				}

				if (suma_jucator1 > 21)
				{
					cout << "Primul jucator a pierdut! \n";
					return 0;
				}

				else
				{
					cout << "Aveti " << suma_jucator1 << " in mana \n";
				}

			}
			else
			{
				cout << "\nJucatorul 1 a tras cartea " << pachet[contor1].valoare << " de " << pachet[contor1].suita << endl;

				suma_jucator1 += pachet[contor1].valoare;

				if (suma_jucator1 > 21)
				{
					cout << "Primul jucator a pierdut! \n";
					return 0;
				}

				else
				{
					cout << "Aveti " << suma_jucator1 << " in mana \n";
				}
			}

			int alegere_jucator1;

			cout << "Jucatorul 1, doriti sa continuati sau ramaneti cu mana actuala? \n";
			cout << "Apasati 1 pentru a continua sau 2 pentru a pastra mana \n";
			cin >> alegere_jucator1;

			if (alegere_jucator1 == 2)
			{
				stare_jucator1 = false;
			}

			else
			{
				cout << endl;
			}
		}

//------------------------------------------------------------------------------------------------------------------

		if(stare_jucator2 == true)
		{
			if (pachet[contor2].valoare > 11)
			{
				cout << "Al doilea jucator a tras cartea " << pachet[contor2].valoare << " de " << pachet[contor2].suita << endl;

				suma_jucator2 = suma_jucator2 + 10;

				if (suma_jucator2 > 21)
				{
					cout << "Al doilea jucator a pierdut! \n";
					return 0;
				}

				else
				{
					cout << "Aveti " << suma_jucator2 << " in mana \n";
				}
			}

			else if (pachet[contor2].valoare == 11)
			{
				int alegere = 0;
				cout << "Al doilea jucator a tras cartea " << pachet[contor2].valoare << " de " << pachet[contor2].suita << endl;
				cout << "Aveti " << suma_jucator2 << " in mana. Doriti sa adaugati 1 sau 11 la mana curenta? \n";
				cout << "Apasati 1 pentru a adauga 1 sau 2 pentru a adauga 11 \n";
				cin >> alegere;

				if (alegere == 1)
				{
					suma_jucator2 += 1;
				}

				else if (alegere == 2)
				{
					suma_jucator2 += 11;
				}

				if (suma_jucator2 > 21)
				{
					cout << "Al doilea jucator a pierdut! \n";
					return 0;
				}

				else
				{
					cout << "Aveti " << suma_jucator2 << " in mana \n";
				}

			}

			else
			{
				cout << "Al doilea jucator a tras cartea " << pachet[contor2].valoare << " de " << pachet[contor2].suita << endl;

				suma_jucator2 += pachet[contor2].valoare;

				if (suma_jucator2 > 21)
				{
					cout << "Al doilea jucator a pierdut! \n";
					return 0;
				}

				else
				{
					cout << "Aveti " << suma_jucator2 << " in mana \n";
				}
			}
			int alegere_jucator2;

			cout << "Jucatorul 2, doriti sa continuati sau ramaneti cu mana actuala? \n";
			cout << "Apasati 1 pentru a continua sau 2 pentru a pastra mana \n";
			cin >> alegere_jucator2;

			if (alegere_jucator2 == 2)
			{
				stare_jucator2 = false;
			}

			else
			{
				cout << endl;
			}
		}

//------------------------------------------------------------------------------------------------------------------

		if (stare_jucator1 == false && stare_jucator2 == false)
		{
			if (suma_jucator1 == suma_jucator2)
			{
				cout << "Egalitate! \n";
				return 0;
			}
			else if (suma_jucator1 > suma_jucator2)
			{
				cout << "Primul jucator a castigat! \n";
				return 0;
			}
			else
			{
				cout << "Al doilea jucator a castigat! \n";
				return 0;
			}
		}
		
		if (stare_jucator1 == true && stare_jucator2 == true)
		{
			contor1 += 2;
			contor2 += 2;
		}
		
		if (stare_jucator1 == false)
		{
			contor2++;
		}

		if (stare_jucator2 == false)
		{
			contor1 = ++contor2;
			contor2 = contor1;
		}
	}
}
