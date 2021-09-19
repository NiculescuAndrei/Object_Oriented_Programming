#include "Complex.h"

Complex::Complex()
{
	parte_reala = 0;
	parte_imaginara = 0;
}

Complex::Complex(double parte_reala)
{
	this->parte_reala = parte_reala;
	parte_imaginara = 0;
}

Complex::Complex(double parte_reala, double parte_imaginara)
{
	this->parte_reala = parte_reala;
	this->parte_imaginara = parte_imaginara;
}

Complex::Complex(Complex& c)
{
	parte_reala = c.parte_reala;
	parte_imaginara = c.parte_imaginara;
}

void Complex::afisare()
{
	if (parte_imaginara < 0)
	{
		cout << parte_reala << parte_imaginara << "i" << endl;
	}
	else if (parte_imaginara >= 0)
	{
		cout << parte_reala << "+" << parte_imaginara << "i" << endl;
	}
}

void Complex::operator=(const Complex& c)
{
	parte_reala = c.parte_reala;
	parte_imaginara = c.parte_imaginara;
}

Complex operator+(Complex& c1, Complex& c2)
{
	Complex c3;
	c3.parte_reala = c1.parte_reala + c2.parte_reala;
	c3.parte_imaginara = c1.parte_imaginara + c2.parte_imaginara;
	return c3;
}

Complex operator-(Complex& c1, Complex& c2)
{
	Complex c3;
	c3.parte_reala = c1.parte_reala - c2.parte_reala;
	c3.parte_imaginara = c1.parte_imaginara - c2.parte_imaginara;
	return c3;
}

Complex operator*(Complex& c1, Complex& c2)
{
	Complex c3;
	c3.parte_reala = (c1.parte_reala * c2.parte_reala) - (c1.parte_imaginara * c2.parte_imaginara);
	c3.parte_imaginara = (c1.parte_reala * c2.parte_imaginara) + (c1.parte_imaginara * c2.parte_reala);
	return c3;
}

Complex operator/(Complex& c1, Complex& c2)
{
	Complex c3;
	c3.parte_reala = (c1.parte_reala * c2.parte_reala + c1.parte_imaginara * c2.parte_imaginara) / ((c2.parte_reala * c2.parte_reala) + (c2.parte_imaginara * c2.parte_imaginara));
	c3.parte_imaginara = (c2.parte_reala * c1.parte_imaginara - c1.parte_reala * c2.parte_imaginara) / ((c2.parte_reala * c2.parte_reala) + (c2.parte_imaginara * c2.parte_imaginara));
	return c3;
}

Complex operator^(Complex& c1, int power)
{
	if (power == 1)
	{
		return c1;
	}
	else if (power == 2)
	{
		Complex c;
		c = c1 * c1;
		return c;
	}
	else
	{
		Complex precedent;
		Complex curent;
		precedent = c1 * c1;
		for (int i = 1; i <= power - 2; i++)
		{
			curent = precedent * c1;
			precedent = curent;
		}
		return curent;
	}
}

/*double Complex::operator~()
{
	double modul_numar_complex;

	modul_numar_complex = this->parte_reala * this->parte_reala + this->parte_imaginara * this->parte_imaginara;

	return modul_numar_complex;
}*/