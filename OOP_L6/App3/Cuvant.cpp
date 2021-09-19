#include "Cuvant.h"

Cuvant::Cuvant()
{
	cout << "Introduceti cuvantul caruia vreti sa ii realizati lista de sinonime: ";
	cin >> cuvant;
}

void Cuvant::creeare_lista_sinonime()
{
	string sinonim;
	int choice;
	cout << "Apasati 1 pentru a introduce un sinonim pentru cuvantul "<<cuvant<<endl;
	cin >> choice;
	while (choice != 2)
	{
		switch (choice)
		{
		case 1:
			cout << "Introduceti un sinonim al cuvantului " << cuvant << endl;
			cin >> sinonim;
			test.tablou_sinonime.push_back(sinonim);
			cout << "Apasati 1 pentru a introduce un alt sinonim: " << endl;
			cout << "Apasati 2 pentru a opri introducerea sinonimelor." << endl;
			break;
		default:
			cout << "Apasati 1 pentru a introduce un alt sinonim: " << endl;
			cout << "Apasati 2 pentru a opri introducerea sinonimelor." << endl;
			break;
		}
		cin >> choice;
	}
}

void Cuvant::afisare_lista_sinonime()
{
	cout << "\nLista nesortata a sinonimelor cuvantului " << cuvant << " este: " << endl;
	for (int i = 0; i < test.tablou_sinonime.size(); i++)
	{
		cout << test.tablou_sinonime[i] << " ";
	}

	cout << endl;

	cout << "\nLista sortata a sinonimelor cuvantului " << cuvant << " este: " << endl;
	sort(test.tablou_sinonime.begin(), test.tablou_sinonime.end());
	for (int i = 0; i < test.tablou_sinonime.size(); i++)
	{
		cout << test.tablou_sinonime[i] << " ";
	}
	cout << endl;
}