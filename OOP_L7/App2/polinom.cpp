#include "polinom.h"

polinom::polinom(int grad_polinom)
{
	grad = grad_polinom;
	coeficienti = new double[grad+1];
}

polinom::polinom()
{
	coeficienti = 0;
	grad = 0;
}

polinom::polinom(const polinom& pel)
{
	this->grad = pel.grad;
	this->coeficienti = new double[grad + 1];

	for (int i = 0; i <= pel.grad; i++)
	{
		coeficienti[i] = pel.coeficienti[i];
	}
}

polinom::~polinom()
{
	delete[] coeficienti;
	coeficienti = 0;
	grad = 0;
}

polinom& polinom::operator=(const polinom& p)
{
	if (&p == this)
	{
		return *this;
	}
	else
	{
		delete[] this->coeficienti;
		this->grad = p.grad;
		this->coeficienti = new double[grad + 1];
		for (int i = 0; i <= grad; i++)
		{
			coeficienti[i] = p.coeficienti[i];
		}
		return *this;
	}
}

polinom operator+(polinom& p1, polinom& p2)
{
	if (p1.grad == p2.grad)
	{
		polinom p3(p1.grad);
		for (int i = 0; i <= p3.grad; i++)
		{
			p3.coeficienti[i] = 0;
		}

		for (int i = 0; i <= p3.grad; i++)
		{
			p3.coeficienti[i] = p1.coeficienti[i] + p2.coeficienti[i];
		}

		return p3;
	}
	else if (p1.grad > p2.grad)
	{
		polinom p3(p1.grad);
		for (int i = 0; i <= p3.grad; i++)
		{
			p3.coeficienti[i] = 0;
		}

		for (int i = 0; i <= p2.grad; i++)
		{
			p3.coeficienti[i] = p1.coeficienti[i] + p2.coeficienti[i];
		}

		for (int i = p2.grad + 1; i <= p1.grad; i++)
		{
			p3.coeficienti[i] += p1.coeficienti[i];
		}

		return p3;
	}
	else
	{
		polinom p3(p2.grad);
		for (int i = 0; i <= p3.grad; i++)
		{
			p3.coeficienti[i] = 0;
		}

		for (int i = 0; i <= p1.grad; i++)
		{
			p3.coeficienti[i] = p1.coeficienti[i] + p2.coeficienti[i];
		}

		for (int i = p1.grad + 1; i <= p2.grad; i++)
		{
			p3.coeficienti[i] += p2.coeficienti[i];
		}

		return p3;
	}
}

polinom operator-(polinom& p1, polinom& p2)
{
	if (p1.grad == p2.grad)
	{
		polinom p3(p1.grad);
		for (int i = 0; i <= p3.grad; i++)
		{
			p3.coeficienti[i] = 0;
		}

		for (int i = 0; i <= p3.grad; i++)
		{
			p3.coeficienti[i] = p1.coeficienti[i] - p2.coeficienti[i];
		}

		return p3;
	}
	else if (p1.grad > p2.grad)
	{
		polinom p3(p1.grad);
		for (int i = 0; i <= p3.grad; i++)
		{
			p3.coeficienti[i] = 0;
		}

		for (int i = 0; i <= p2.grad; i++)
		{
			p3.coeficienti[i] = p1.coeficienti[i] - p2.coeficienti[i];
		}

		for (int i = p2.grad + 1; i <= p1.grad; i++)
		{
			p3.coeficienti[i] -= p1.coeficienti[i];
		}

		return p3;
	}
	else
	{
		polinom p3(p2.grad);
		for (int i = 0; i <= p3.grad; i++)
		{
			p3.coeficienti[i] = 0;
		}

		for (int i = 0; i <= p1.grad; i++)
		{
			p3.coeficienti[i] = p1.coeficienti[i] - p2.coeficienti[i];
		}

		for (int i = p1.grad + 1; i <= p2.grad; i++)
		{
			p3.coeficienti[i] -= p2.coeficienti[i];
		}

		return p3;
	}
}

polinom operator*(polinom& p1, polinom& p2)
{
	polinom p3(p1.grad + p2.grad);
	for (int i = 0; i <= p3.grad; i++)
	{
		p3.coeficienti[i] = 0;
	}
	if (p1.grad >= p2.grad)
	{
		for (int i = 0; i <= p1.grad; i++)
		{
			for (int j = 0; j <= p2.grad; j++)
			{
				p3.coeficienti[i + j] += p1.coeficienti[i] * p2.coeficienti[j];
			}
		}
	}
	else
	{
		for (int i = 0; i <= p2.grad; i++)
		{
			for (int j = 0; j <= p1.grad; j++)
			{
				p3.coeficienti[i + j] += p2.coeficienti[i] * p1.coeficienti[j];
			}
		}
		for (int i = 0; i <= p3.grad; i++)
		{
			cout << p3.coeficienti[i] << endl;
		}
	}
	return p3;
}

double polinom::operator()(double x)
{
	double rezultat = 0;
	for (int i = 0; i <= grad; i++)
	{
		rezultat += coeficienti[i] * pow(x,i);
	}
	return rezultat;
}

void polinom::afisare()
{
	cout << coeficienti[0];
	for (int i = 1; i <= grad; i++)
	{
		if (coeficienti[i] >= 0)
		{
			cout << "+" << coeficienti[i] << "*x^" << i;
		}
		else if (coeficienti[i] < 0)
		{
			cout << coeficienti[i] << "*x^" << i;
		}
	}
}

void polinom::citire_date()
{
	double coeficient;

	for (int i = 0; i <= grad; i++)
	{
		cout << "Introduceti coeficientul lui x^" << i << ": "<<endl;
		cin >> coeficient;
		coeficienti[i] = coeficient;
	}
}

/*double polinom::operator[](int i)
{
	return coeficienti[i];
}*/