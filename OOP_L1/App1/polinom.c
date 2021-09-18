#include "polinom.h"

void cmmdc(polinom p1, polinom p2)
{

	polinom aux;
	aux.coef = (int*)calloc(p1.grad - p2.grad, sizeof(int)); 
	int nr_elem_aux = p1.grad - p2.grad;

	while (p1.grad >= p2.grad)
	{
		if (p1.coef[p1.grad] != 0)
		{
			int contor = p1.grad - p2.grad;
			int numar = p1.coef[p1.grad] / p2.coef[p2.grad];
			for (int i = p2.grad; i >= 0; i--)
			{
				p1.coef[i + contor] = p1.coef[i + contor] - numar * p2.coef[i];
			}
			aux.coef[contor] = numar;
			p1.grad--;
		}
		else
		{
			p1.grad--;
		}
	}
	
	printf("Cmmdc al celor doua polinoame date este: \n");
	for (int i = nr_elem_aux; i >= 0; i--)
	{	
		if (aux.coef[i] < 0)
		{
			printf("%d*x^%d", aux.coef[i], i);
		}
		else
		{
			printf("+%d*x^%d", aux.coef[i], i);
		}
	}


}