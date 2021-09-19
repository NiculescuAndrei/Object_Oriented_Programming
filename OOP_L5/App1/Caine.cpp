#include "Caine.h"

Caine::Caine()
{
	
	cout << "Introduceti numele cainelui: ";
	getline(cin, nume);

	cout << "Introduceti inaltimea cainelui: ";
	cin >> inaltime;

	cout << "Introduceti greutatea cainelui: ";
	cin >> greutate;

	cout << "Introduceti varsta cainelui: ";
	cin >> varsta;

	cout << "Introduceti culoarea cainelui: ";
	cin >> culoare;
}

void Caine::afisare_informtii_caine()
{
	cout << endl;
	cout << "Numele cainelui este: " << nume << endl;
	cout << "Inaltimea cainelui este: " << inaltime << endl;
	cout << "Greutatea cainelui este: " << greutate << endl;
	cout << "Varsta cainelui este: " << varsta << endl;
	cout << "Culoarea cainelui este: " << culoare << endl;
}