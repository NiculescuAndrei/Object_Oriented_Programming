#include "CaineCuPete.h"

CaineCuPete::CaineCuPete()
{
	cout << "Caine cu pete" << endl;
}

void CaineCuPete::citire_date()
{
	Caine::citire_date();
	cout << "Introduceti numarul de pete ale cainelui: ";
	cin >> numar_pete;
}

void CaineCuPete::afisare_date()
{
	Caine::afisare_date();
	cout << "Numarul de pete ale cainelui este: " << numar_pete << endl;
}