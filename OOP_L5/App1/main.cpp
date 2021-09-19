#include "Caine.h"
#include "CaineCuPete.h"
#include "CaineFaraPete.h"

int main()
{
	CaineCuPete dalmatian;
	dalmatian.afisare_informtii_caine();

	cin.get();
	cout << endl;

	CaineFaraPete husky;
	husky.afisare_informtii_caine();

	return 0;
}
