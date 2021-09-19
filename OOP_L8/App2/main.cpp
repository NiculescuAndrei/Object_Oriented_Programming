#include "Caine.h"
#include "CaineCuPete.h"
#include "CaineFaraPete.h"

int main()
{
	Caine* dalmatian = new CaineCuPete;
	dalmatian->citire_date();
	dalmatian->afisare_date();
	delete dalmatian;
	
	cin.get();
	cout << endl;

	Caine* husky = new CaineFaraPete;
	husky->citire_date();
	husky->afisare_date();
	delete husky;

	return 0;
}
