#include "Bulevard.h"
int main()
{
	Bulevard decebal;
	decebal.completare_zone();
	
	int optiune;
	cout << "Apasati 1 pentru a modifica o zona " << endl;
	cout << "Apasati 2 pentru a darama continutul unei zone " << endl;
	cout << "Apasati 3 pentru a parcurge bulevardul si de a afisa zonele " << endl;
	cin >> optiune;
	while (optiune != 4)
	{
		switch (optiune)
		{
		case 1:
			decebal.modificare_zona();
			cout << "\nApasati 1 pentru a modifica o alta zona " << endl;
			cout << "Apasati 2 pentru a darama continutul unei zone " << endl;
			cout << "Apasati 3 pentru a parcurge bulevardul si de a afisa zonele " << endl;
			cout << "Apasati 4 pentru a iesi din meniu " << endl;
			break;
		case 2:
			decebal.daramare_zona();
			cout << "\nApasati 1 pentru a modifica o zona " << endl;
			cout << "Apasati 2 pentru a darama continutul unei alte zone " << endl;
			cout << "Apasati 3 pentru a parcurge bulevardul si de a afisa zonele " << endl;
			cout << "Apasati 4 pentru a iesi din meniu " << endl;
			break;
		case 3:
			decebal.parcurgere_bulevard();
			cout << "\nApasati 1 pentru a modifica o zona " << endl;
			cout << "Apasati 2 pentru a darama continutul unei zone " << endl;
			cout << "Apasati 4 pentru a iesi din meniu " << endl;
			break;
		default:
			cout << "\nApasati 1 pentru a modifica o zona " << endl;
			cout << "Apasati 2 pentru a darama continutul unei zone " << endl;
			cout << "Apasati 3 pentru a parcurge bulevardul si de a afisa zonele " << endl;
			cout << "Apasati 4 pentru a iesi din meniu " << endl;
			break;
		}
		cin >> optiune;
	}
	

}


