#include "Abonat.h"
#include "carte_de_telefon.h"

int main()
{
	carte_de_telefon carte;
	int optiune;
	cout << "Apasati 1 pentru a introduce un nou abonat in cartea telefonica. " << endl;
	cin >> optiune;
	while (optiune != 3)
	{
		switch (optiune)
		{
		case 1:
			cin.get();
			carte.adaugare_abonat();
			cout << "\nApasati 1 pentru a introduce un alt abonat in cartea telefonica. " << endl;
			cout << "Apasati 2 pentru a cauta un abonat in cartea telefonica. " << endl;
			cout << "Apasati 3 pentru opri gestiunea operatiilor asupra cartii telefonice. " << endl;
			break;
		case 2:
			cin.get();
			carte.cautare_dupa_nume();
			cout << "\nApasati 1 pentru a introduce un abonat in cartea telefonica. " << endl;
			cout << "Apasati 2 pentru a cauta un alt abonat in cartea telefonica. " << endl;
			cout << "Apasati 3 pentru opri gestiunea operatiilor asupra cartii telefonice. " << endl;
			break;
		default:
			cout << "\nApasati 1 pentru a introduce un abonat in cartea telefonica. " << endl;
			cout << "Apasati 2 pentru a cauta un abonat in cartea telefonica. " << endl;
			cout << "Apasati 3 pentru opri gestiunea operatiilor asupra cartii telefonice. " << endl;
			break;
		}
		cin >> optiune;
	}

	return 0;
}
