#define _CRT_SECURE_NO_WARNINGS
#include "complex.h"

int main()
{
	complex c1;
	printf("Introduceti partea reala si cea imaginara a primului numar complex: ");
	scanf("%f %f", &c1.rl, &c1.im);
	
	complex c2;
	printf("Introduceti partea reala si cea imaginara a celui de-al doilea numar complex: ");
	scanf("%f %f", &c2.rl, &c2.im);

	complex c3;
	c3 = impartirea_numerelor_complexe(c1, c2);
	printf("Impartirea: \n");
	afisare(c3);

	complex c4;
	c4 = adunarea_numerelor_complexe(c1, c2);
	printf("Adunarea: \n");
	afisare(c4);

	complex c5;
	c5 = scaderea_numerelor_complexe(c1, c2);
	printf("Scaderea: \n");
	afisare(c5);

	complex c6;
	c6 = inmultirea_numerelor_complexe(c1, c2);
	printf("Inmultirea: \n");
	afisare(c6);

	return 0;
}
