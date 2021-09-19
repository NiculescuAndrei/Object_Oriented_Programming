#include "CaineCuPete.h"

CaineCuPete::CaineCuPete()
	: Caine()
{
	cout << "Introduceti numarul de pete ale cainelui: ";
	cin >> this->numar_pete;
}

void CaineCuPete::afisare_informtii_caine()
{
	Caine::afisare_informtii_caine();
	cout << "Numarul de pete ale cainelui este: " << this->numar_pete << endl;
}