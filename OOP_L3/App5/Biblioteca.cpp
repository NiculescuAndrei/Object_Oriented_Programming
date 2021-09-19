#include "Biblioteca.h"
#include "Carte.h"
using namespace std;

Biblioteca::~Biblioteca()
{
	delete[] tablou;
}

void Biblioteca::creare_biblioteca()
{
	for (int i = 0; i < numar_carti; i++)
	{
		cout << "Introduceti titlul cartii: \n";
		tablou[i].setTitlu();

		cout << "Introduceti autorul/autorii cartii: \n";
		tablou[i].setAutor();

		cout << "Introduceti editura cartii: \n";
		tablou[i].setEditura();

		cout << "Introduceti numarul ISBN al cartii: \n";
		tablou[i].setIsbn();

		cout << "Introduceti anul aparitiei cartii: \n";
		tablou[i].setAnulAparitiei();

		cout << "Introduceti pretul cartii: \n";
		tablou[i].setPret();

		cin.get();
	}

	for (int i = 0; i < numar_carti; i++)
	{
		cout << "\nCartea " << i + 1 << endl;
		cout << "Titlul cartii: " << tablou[i].getTitlu() << endl;
		cout << "Autorul/Autorii cartii: " << tablou[i].getAutor() << endl;
		cout << "Editura cartii: " << tablou[i].getEditura() << endl;
		cout << "ISBN-ul cartii: " << tablou[i].getIsbn() << endl;
		cout << "Anul aparitiei cartii: " << tablou[i].getAnulAparitiei() << endl;
		cout << "Pretul cartii: " << tablou[i].getPret() << endl;
	}
}

void Biblioteca::cautare_dupa_titlu()
{
	int optiune = 0;
	string titlu_cautat;
	cout << "Apasati 1 pentru a introduce titlul cartii cautate. \n";
	while (optiune != 3)
	{
		cin >> optiune;
		cin.get();
		switch (optiune)
		{
		case 1:
			cout << "\nIntroduceti titlul cartii cautate. \n";
			getline(cin, titlu_cautat);
			cout << "\nApasati 2 pentru a cauta cartea in biblioteca. \n";
			break;
		case 2:
		{
			int count = 0;
			for (int i = 0; i < 2; i++)
			{
				if (tablou[i].getTitlu() == titlu_cautat)
				{
					cout << "Cartea a fost gasita in biblioteca! \n";
					break;
				}
				else
				{
					count++;
				}
				if (count == numar_carti)
				{
					cout << "Cartea nu a fost gasita! \n";
				}
			}
			cout << "\nApasati 1 pentru a cauta alta carte in biblioteca. \n";
			cout << "Apasati 3 pentru a inceta cautarea. \n";
			break;
		}
		cin >> optiune;
		}
	}
}

void Biblioteca::cautare_dupa_editura()
{
	int optiune = 0;
	string editura_cautata;
	cout << "Apasati 1 pentru a introduce editura cartii cautate. \n";
	while (optiune != 3)
	{
		cin >> optiune;
		cin.get();
		switch (optiune)
		{
		case 1:
			cout << "\nIntroduceti editura cartii cautate. \n";
			getline(cin, editura_cautata);
			cout << "\nApasati 2 pentru a cauta cartea in biblioteca. \n";
			break;
		case 2:
		{
			int count = 0;
			for (int i = 0; i < 2; i++)
			{
				if (tablou[i].getEditura() == editura_cautata)
				{
					cout << "A fost gasita cartea " << tablou[i].getTitlu() << " din aceasta editura \n";
				}
				else
				{
					count++;
				}
				if (count == numar_carti)
				{
					cout << "Nu a fost gasita nici-o carte din aceasta editura! \n";
				}
			}
			cout << "\nApasati 1 pentru a cauta alta carte in biblioteca. \n";
			cout << "Apasati 3 pentru a inceta cautarea. \n";
			break;
		}
		cin >> optiune;
		}
	}
}

void Biblioteca::cautare_dupa_isbn()
{
	int optiune = 0;
	string isbn_cautat;
	cout << "Apasati 1 pentru a introduce isbn-ul cartii cautate. \n";
	while (optiune != 3)
	{
		cin >> optiune;
		cin.get();
		switch (optiune)
		{
		case 1:
			cout << "\nIntroduceti isbn-ul cartii cautate. \n";
			getline(cin, isbn_cautat);
			cout << "\nApasati 2 pentru a cauta cartea in biblioteca. \n";
			break;
		case 2:
		{
			int count = 0;
			for (int i = 0; i < 2; i++)
			{
				if (tablou[i].getIsbn() == isbn_cautat)
				{
					cout << "Cartea a fost gasita in biblioteca! \n";
					break;
				}
				else
				{
					count++;
				}
				if (count == numar_carti)
				{
					cout << "Cartea nu a fost gasita! \n";
				}
			}
			cout << "\nApasati 1 pentru a cauta alta carte in biblioteca. \n";
			cout << "Apasati 3 pentru a inceta cautarea. \n";
			break;
		}
		cin >> optiune;
		}
	}
}