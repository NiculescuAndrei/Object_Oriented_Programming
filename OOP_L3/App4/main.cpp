#include "ISBN13.h"

int main()
{
	ISBN13 cod("3", "16", "148410");

	/*
	ISBN13 cod("3", "16", "148410", 0);
	cod.validare_cifra_de_control();
	*/
	

	//ISBN13 cod("1","86197", "876");

	/*
	 ISBN13 cod("1","86197", "876",9);
	 cod.validare_cifra_de_control();
	*/


	//ISBN13 cod("1", "86197", "271");

	/*
	ISBN13 cod("1", "86197", "271",2);
	cod.validare_cifra_de_control();
	*/

	return 0;
}
