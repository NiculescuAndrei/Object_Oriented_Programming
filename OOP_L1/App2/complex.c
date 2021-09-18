#include "complex.h"

complex impartirea_numerelor_complexe(complex c1, complex c2)
{
	complex c3;
	c3.rl = (c1.rl * c2.rl + c1.im * c2.im) / ((c2.rl * c2.rl) + (c2.im * c2.im));
	c3.im = (c2.rl * c1.im - c1.rl * c2.im) / ((c2.rl * c2.rl) + (c2.im * c2.im));

	/*(c1.rl + c1.im) / (c2.rl + c2.im) = [(c1.rl + c1.im) * (c2.rl - c2.im)] / (c2.rl + c2.im) * (c2.rl - c2.im) = (c1.rl * c2.rl - c1.rl * c2.im + c1.im * c2.rl - (-c1.im * c2.im)) / ((c2.rl * c2.rl) + (c2.im * c2.im))=
									    = (c1.rl * c2.rl + c1.im * c2.im) / ((c2.rl * c2.rl) + (c2.im * c2.im)) + (c2.rl * c1.im - c1.rl * c2.im) / ((c2.rl * c2.rl) + (c2.im * c2.im)) = c3.rl + c3.im
	*/
	return c3;
}

complex adunarea_numerelor_complexe(complex c1, complex c2)
{
	complex c3;
	c3.rl = c1.rl + c2.rl;
	c3.im = c1.im + c2.im;
	return c3;
}

complex scaderea_numerelor_complexe(complex c1, complex c2)
{
	complex c3;
	c3.rl = c1.rl - c2.rl;
	c3.im = c1.im - c2.im;
	return c3;
}

complex inmultirea_numerelor_complexe(complex c1, complex c2)
{
	complex c3;
	c3.rl = (c1.rl * c2.rl - c1.im * c2.im);
	c3.im = (c1.rl * c2.im + c1.im * c2.rl);
	return c3;
}

void afisare(complex c)
{
	if (c.im != 0 && c.im < 0)
	{
		printf("%.2f - %.2f*i", c.rl, c.im);
	}
	else if (c.im != 0 && c.im > 0)
	{
		printf("%.2f + %.2f*i", c.rl, c.im);
	}
	printf("\n");
}
