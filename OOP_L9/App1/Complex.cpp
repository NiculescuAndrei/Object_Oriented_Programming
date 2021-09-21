#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(Complex& c)
{
	parte_reala = c.parte_reala;
	parte_imaginara = c.parte_imaginara;
}

void Complex::setParteReala()
{
	cout << "Introduceti partea reala: ";
	cin >> parte_reala;
	cout << endl;
}

void Complex::setParteImaginara()
{
	cout << "Introduceti partea imaginara: ";
	cin >> parte_imaginara;
	cout << endl;
}

double Complex::getParteReala()
{
	return parte_reala;
}

double Complex::getParteImaginara()
{
	return parte_imaginara;
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

void Complex::afisare()
{
	if (parte_imaginara < 0)
	{
		cout << parte_reala << parte_imaginara << "i";
	}
	else if (parte_imaginara >= 0)
	{
		cout << parte_reala << "+" << parte_imaginara << "i";
	}
}