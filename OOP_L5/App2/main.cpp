#include "CAnimal.h"
#include "CAnimalIerbivor.h"
#include "CAnimalCarnivor.h"
#include "CLeu.h"
#include "CIepure.h"
#include "CCaprioara.h"
#include "CVulpe.h"
#include "CUrs.h"
#include "CRezervatie.h"
int main()
{
	/*CLeu leu("leu", "10.07.2007", 250, "carne", 30, 15.3, "Africa");
	leu.afisare_informatii();

	cout << endl;

	CIepure iepure("blanosul", "12.22.2017", 2, "morcovi", 0.5, "50 metri patrati");
	iepure.afisare_informatii();

	cout << endl;

	CCaprioara caprioara("bamby", "07.12.2005", 30, "verdeata", 2, 3);
	caprioara.afisare_informatii();

	cout << endl;

	CVulpe vulpe("sireata", "12.05.2008", 20, "carne", 1, 20, "polara");
	vulpe.afisare_informatii();

	cout << endl;
	*/
	//CUrs urs("fram", "12.05.2010", 350, "carne", 35, 10);
	//urs.afisare_informatii();

	CRezervatie rezervatie(1,1,1,1,1);
	rezervatie.populare_rezervatie();
	rezervatie.afisare_animale_rezervatie();
	
	return 0;
}
