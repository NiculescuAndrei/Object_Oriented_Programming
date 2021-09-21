#pragma once
#include <iostream>
#include <cmath>
#include "Complex.h"
using namespace std;

template<typename T>
class Matrice;
template<typename T>
Matrice<T> operator+(Matrice<T>&, Matrice<T>&);
template<typename T>
Matrice<T> operator-(Matrice<T>&, Matrice<T>&);
template<typename T>
Matrice<T> operator*(Matrice<T>&, Matrice<T>&);
template<typename T>
Matrice<T> operator^(Matrice<T>&, int);

template <typename T>
class Matrice
{
public:
	Matrice(int ordin);
	Matrice();
	Matrice(const Matrice<T>&);
	~Matrice();
	Matrice& operator=(const Matrice<T>&);
	friend Matrice<T> operator+ <> (Matrice<T>&, Matrice<T>&);
	friend Matrice<T> operator- <> (Matrice<T>&, Matrice<T>&);
	friend Matrice<T> operator* <> (Matrice<T>&, Matrice<T>&);
	friend Matrice<T> operator^ <> (Matrice<T>&, int);
	bool calculare_determinant_matrice(Matrice<T>);
	void creare_matrice();
	void afisare_matrice();
private:
	T** matrice;
	int ordin;
};

template <typename T>
Matrice<T>::Matrice(int ordin)
{
	this->ordin = ordin;
	matrice = new T * [this->ordin];

	for (int i = 0; i < this->ordin; i++)
	{
		matrice[i] = new T[this->ordin];
	}

	for (int i = 0; i < this->ordin; i++)
	{
		for (int j = 0; j < this->ordin; j++)
		{
			matrice[i][j] = 0;
		}
	}
}

template <typename T>
Matrice<T>::Matrice()
{
	this->ordin = 0;
	matrice = nullptr;
}

template <typename T>
Matrice<T>::Matrice(const Matrice<T>& m)
{
	this->ordin = m.ordin;
	matrice = new T * [this->ordin];

	for (int i = 0; i < this->ordin; i++)
	{
		matrice[i] = new T[this->ordin];
	}

	for (int i = 0; i < this->ordin; i++)
	{
		for (int j = 0; j < this->ordin; j++)
		{
			matrice[i][j] = m.matrice[i][j];
		}
	}
}

template <typename T>
Matrice<T>::~Matrice()
{
	if (ordin > 0)
	{
		for (int i = 0; i < ordin; i++)
		{
			delete[] matrice[i];
		}
		delete[] matrice;
	}
}

template <typename T>
void Matrice<T>::creare_matrice()
{
	for (int i = 0; i < ordin; i++)
	{
		for (int j = 0; j < ordin; j++)
		{
			cout << "matrice[" << i << "][" << j << "]" << " : " << endl;
			cin >> matrice[i][j];
		}
	}
}

template <typename T>
void Matrice<T>::afisare_matrice()
{
	cout << "Elementele matricei sunt: " << endl;
	for (int i = 0; i < ordin; i++)
	{
		for (int j = 0; j < ordin; j++)
		{
			cout << matrice[i][j] << "   ";
		}
		cout << endl;
	}
}

template <typename T>
Matrice<T>& Matrice<T>::operator=(const Matrice<T>& m)
{
	if (&m==this)
	{
		return *this;
	}
	else
	{
		if (this->ordin > 0)
		{
			for (int i = 0; i < this->ordin; i++)
			{
				delete[] matrice[i];
			}
			delete[] matrice;
		}

		this->ordin = m.ordin;

		matrice = new T * [this->ordin];
		for (int i = 0; i < this->ordin; i++)
		{
			matrice[i] = new T[this->ordin];
		}

		for (int i = 0; i < this->ordin; i++)
		{
			for (int j = 0; j < this->ordin; j++)
			{
				matrice[i][j] = m.matrice[i][j];
			}
		}

		return *this;
	}
}

template <typename T>
Matrice<T> operator+(Matrice<T>& m1, Matrice<T>& m2)
{
	if (m1.ordin != m2.ordin)
	{
		cout << "Matricile au ordinul diferit si nu se poate efectua suma! " << endl;
		return 0;
	}
	else
	{
		Matrice<T> rezultat(m1.ordin);
		for (int i = 0; i < rezultat.ordin; i++)
		{
			for (int j = 0; j < rezultat.ordin; j++)
			{
				rezultat.matrice[i][j] = m1.matrice[i][j] + m2.matrice[i][j];
			}
		}
		return rezultat;
	}
}

template <typename T>
Matrice<T> operator-(Matrice<T>& m1, Matrice<T>& m2)
{
	if (m1.ordin != m2.ordin)
	{
		cout << "Matricile au ordinul diferit si nu se poate efectua diferenta! " << endl;
		return 0;
	}
	else
	{
		Matrice<T> rezultat(m1.ordin);
		for (int i = 0; i < rezultat.ordin; i++)
		{
			for (int j = 0; j < rezultat.ordin; j++)
			{
				rezultat.matrice[i][j] = m1.matrice[i][j] - m2.matrice[i][j];
			}
		}
		return rezultat;
	}
}

template <typename T>
Matrice<T> operator*(Matrice<T>& m1, Matrice<T>& m2)
{
	if (m1.ordin != m2.ordin)
	{
		cout << "Cele doua matrici patrate au ordinul diferit si nu se pot inmulti! " << endl;
		return 0;
	}
	else
	{
		Matrice<T> rezultat(m1.ordin);
		for (int i = 0; i < rezultat.ordin; i++)
		{
			for (int j = 0; j < rezultat.ordin; j++)
			{
				for (int k = 0; k < rezultat.ordin; k++)
				{
					T inmultire;
					inmultire = m1.matrice[i][j] * m2.matrice[j][k];
					//rezultat.matrice[i][k] = rezultat.matrice[i][k] + m1.matrice[i][j] * m2.matrice[j][k];
					rezultat.matrice[i][k] = rezultat.matrice[i][k] + inmultire;
				}
			}
		}
		return rezultat;
	}
}

// Pentru puteri negative se foloseste metoda Gauss-Montante(Algoritmul Bareiss)

template <typename T>
Matrice<T> operator^(Matrice<T>& m1, int rang_putere)
{
	if (rang_putere == 0)
	{
		Matrice<T> rezultat(m1.ordin);
		for (int i = 0; i < m1.ordin; i++)
		{
			for (int j = 0; j < m1.ordin; j++)
			{
				rezultat.matrice[i][j] = (i == j);
			}
		}
		return rezultat;
	}
	else if (rang_putere == 1)
	{
		return m1;
	}
	
	else if (rang_putere == -1)
	{
		bool verificare = m1.calculare_determinant_matrice(m1);
		if (verificare == true)
		{
			cout << "Matricea are determinantul 0 si nu poate fi inversata! " << endl;
			return m1;
		}
		Matrice<T> rezultat;
		rezultat.ordin = m1.ordin;
		rezultat.matrice = new T * [rezultat.ordin];

		for (int i = 0; i < rezultat.ordin; i++)
		{
			rezultat.matrice[i] = new T[2 * rezultat.ordin];
		}

		for (int i = 0; i <  rezultat.ordin; i++)
		{
			for (int j = 0; j < 2 * rezultat.ordin; j++)
			{
				if (j == i + rezultat.ordin)
				{
					rezultat.matrice[i][j] = 1;
				}
				else if (j >= rezultat.ordin)
				{
					rezultat.matrice[i][j] = 0;
				}
				else
				{
					rezultat.matrice[i][j] = m1.matrice[i][j];
				}
			}
		}

		// Daca avem 0 pe diagonala principala interschimbam linii astfel incat sa nu avem
		if (rezultat.matrice[0][0] == 0)
		{
			for (int contor = 1; contor < rezultat.ordin; contor++)
			{
				if (rezultat.matrice[contor][0] != 0)
				{
					T aux;
					for (int i = 0; i < 2 * rezultat.ordin; i++)
					{
						T aux = rezultat.matrice[0][i];
						rezultat.matrice[0][i] = rezultat.matrice[contor][i];
						rezultat.matrice[contor][i] = aux;
					}
					break;
				}
			}
		}

		T p1 = rezultat.matrice[0][0];
		T p0 = 1;

		int contor = 0;

		Matrice<T> matrice_auxiliara;
		matrice_auxiliara.ordin = rezultat.ordin;
		matrice_auxiliara.matrice = new T * [matrice_auxiliara.ordin];

		for (int i = 0; i < matrice_auxiliara.ordin; i++)
		{
			matrice_auxiliara.matrice[i] = new T[2 * matrice_auxiliara.ordin];
		}

		for (int i = 0; i < matrice_auxiliara.ordin; i++)
		{
			for (int j = 0; j < 2 * matrice_auxiliara.ordin; j++)
			{
				matrice_auxiliara.matrice[i][j] = rezultat.matrice[i][j];
			}
		}

		cout << "\nElementele matricei extinse la inceput sunt: " << endl;
		for (int i = 0; i < rezultat.ordin; i++)
		{
			for (int j = 0; j < 2 * rezultat.ordin; j++)
			{
				cout << rezultat.matrice[i][j] << "   ";
			}
			cout << endl;
		}

		while (contor < rezultat.ordin)
		{
			for (int i = 0; i < rezultat.ordin; i++)
			{
				for (int j = 0; j < 2 * rezultat.ordin; j++)
				{
					if (i == contor)
					{
						cout << "";
					}
					else
					{
						rezultat.matrice[i][j] = (p1 * matrice_auxiliara.matrice[i][j] - matrice_auxiliara.matrice[i][contor] * matrice_auxiliara.matrice[contor][j]) / p0;
					}
				}
			}
			if (contor + 1 < rezultat.ordin)
			{
				if (rezultat.matrice[contor+1][contor + 1] == 0)
				{
					if (contor + 2 < rezultat.ordin)
					{
						for (int iterator = contor + 2; iterator < rezultat.ordin; iterator++)
						{
							if (rezultat.matrice[iterator][contor + 1] != 0)
							{
								T aux;
								for (int i = 0; i < 2 * rezultat.ordin; i++)
								{
									T aux = rezultat.matrice[iterator][i];
									rezultat.matrice[iterator][i] = rezultat.matrice[contor + 1][i];
									rezultat.matrice[contor + 1][i] = aux;
								}
								break;
							}
						}
					}
				}
				cout << "\nElementele matricei extinse la iteratia " << contor + 1 << "/" << rezultat.ordin << " sunt: " << endl;
				for (int i = 0; i < rezultat.ordin; i++)
				{
					for (int j = 0; j < 2 * rezultat.ordin; j++)
					{
						cout << rezultat.matrice[i][j] << "   ";
					}
					cout << endl;
				}
				p0 = p1;
				contor++;
				p1 = rezultat.matrice[contor][contor];

				for (int i = 0; i < matrice_auxiliara.ordin; i++)
				{
					for (int j = 0; j < 2 * matrice_auxiliara.ordin; j++)
					{
						matrice_auxiliara.matrice[i][j] = rezultat.matrice[i][j];
					}
				}

			}
			else
			{
				contor++;
			}
		}

		cout << "\nElementele matricei extinse la iteratia " << contor << "/" << rezultat.ordin << " sunt: " << endl;
		for (int i = 0; i < rezultat.ordin; i++)
		{
			for (int j = 0; j < 2 * rezultat.ordin; j++)
			{
				cout << rezultat.matrice[i][j] <<"   ";
			}
			cout << endl;
		}

		Matrice<T> rezultat_final(m1.ordin);

		cout << "\nElementele matricei inverse sunt: " << endl;
		for (int i = 0; i <  rezultat.ordin; i++)
		{
			for (int j = rezultat.ordin; j < 2 * rezultat.ordin; j++)
			{
				cout << rezultat.matrice[i][j] << "*(1/" << rezultat.matrice[0][0] << ")" << "   ";
				rezultat_final.matrice[i][j - rezultat.ordin] = rezultat.matrice[i][j]*1/rezultat.matrice[rezultat.ordin-1][rezultat.ordin-1];
			}
			cout << endl;
		}

		return rezultat_final;
	}
	else
	{
		bool verificare = m1.calculare_determinant_matrice(m1);
		if (verificare == true)
		{
			cout << "Matricea are determinantul 0 si nu poate fi inversata! " << endl;
			return m1;
		}

		Matrice<T> matrice_la_putere(m1.ordin);

		Matrice<T> matrice_unitate(m1.ordin);
		for (int i = 0; i < matrice_unitate.ordin; i++)
		{
			for (int j = 0; j < matrice_unitate.ordin; j++)
			{
				matrice_unitate.matrice[i][j] = (i == j);
			}
		}

		for (int numar_inmultiri = 1; numar_inmultiri <= abs(rang_putere); numar_inmultiri++)
		{
			for (int i = 0; i < matrice_la_putere.ordin; i++)
			{
				for (int j = 0; j < matrice_la_putere.ordin; j++)
				{
					for (int k = 0; k < matrice_la_putere.ordin; k++)
					{
						matrice_la_putere.matrice[i][k] = matrice_la_putere.matrice[i][k] + m1.matrice[i][j] * matrice_unitate.matrice[j][k];
					}
				}
			}
			if (numar_inmultiri < abs(rang_putere))
			{
				matrice_unitate = matrice_la_putere;
				for (int i = 0; i < matrice_la_putere.ordin; i++)
				{
					for (int j = 0; j < matrice_la_putere.ordin; j++)
					{
						matrice_la_putere.matrice[i][j] = 0;
					}
				}
			}
		}

		if (rang_putere > 0)
		{
			return matrice_la_putere;
		}
		else
		{
			cout << "\nElementele matricei patratice: " << endl;
			for (int i = 0; i < matrice_la_putere.ordin; i++)
			{
				for (int j = 0; j < matrice_la_putere.ordin; j++)
				{
					cout << matrice_la_putere.matrice[i][j] << "	";
				}
				cout << endl;
			}
			Matrice<T> rezultat;
			rezultat.ordin = matrice_la_putere.ordin;
			rezultat.matrice = new T * [rezultat.ordin];

			for (int i = 0; i < rezultat.ordin; i++)
			{
				rezultat.matrice[i] = new T[2 * rezultat.ordin];
			}

			for (int i = 0; i < rezultat.ordin; i++)
			{
				for (int j = 0; j < 2 * rezultat.ordin; j++)
				{
					if (j == i + rezultat.ordin)
					{
						rezultat.matrice[i][j] = 1;
					}
					else if (j >= rezultat.ordin)
					{
						rezultat.matrice[i][j] = 0;
					}
					else
					{
						rezultat.matrice[i][j] = matrice_la_putere.matrice[i][j];
					}
				}
			}

			if (rezultat.matrice[0][0] == 0)
			{
				for (int contor = 1; contor < rezultat.ordin; contor++)
				{
					if (rezultat.matrice[contor][0] != 0)
					{
						T aux;
						for (int i = 0; i < 2 * rezultat.ordin; i++)
						{
							T aux = rezultat.matrice[0][i];
							rezultat.matrice[0][i] = rezultat.matrice[contor][i];
							rezultat.matrice[contor][i] = aux;
						}
						break;
					}
				}
			}

			T p1 = rezultat.matrice[0][0];
			T p0 = 1;

			int contor = 0;

			Matrice<T> matrice_auxiliara;
			matrice_auxiliara.ordin = rezultat.ordin;
			matrice_auxiliara.matrice = new T * [matrice_auxiliara.ordin];

			for (int i = 0; i < matrice_auxiliara.ordin; i++)
			{
				matrice_auxiliara.matrice[i] = new T[2 * matrice_auxiliara.ordin];
			}

			for (int i = 0; i < matrice_auxiliara.ordin; i++)
			{
				for (int j = 0; j < 2 * matrice_auxiliara.ordin; j++)
				{
					matrice_auxiliara.matrice[i][j] = rezultat.matrice[i][j];
				}
			}
			cout << "\nElementele matricei extinse la inceput sunt: " << endl;
			for (int i = 0; i < rezultat.ordin; i++)
			{
				for (int j = 0; j < 2 * rezultat.ordin; j++)
				{
					cout << rezultat.matrice[i][j] << "   ";
				}
				cout << endl;
			}

			while (contor < rezultat.ordin)
			{
				for (int i = 0; i < rezultat.ordin; i++)
				{
					for (int j = 0; j < 2 * rezultat.ordin; j++)
					{
						if (i == contor)
						{
							cout << "";
						}
						else
						{
							rezultat.matrice[i][j] = (p1 * matrice_auxiliara.matrice[i][j] - matrice_auxiliara.matrice[i][contor] * matrice_auxiliara.matrice[contor][j]) / p0;
						}
					}
				}
				if (contor + 1 < rezultat.ordin)
				{
					if (rezultat.matrice[contor + 1][contor + 1] == 0)
					{
						if (contor + 2 < rezultat.ordin)
						{
							for (int iterator = contor + 2; iterator < rezultat.ordin; iterator++)
							{
								if (rezultat.matrice[iterator][contor] != 0)
								{
									T aux;
									for (int i = 0; i < 2 * rezultat.ordin; i++)
									{
										T aux = rezultat.matrice[iterator][i];
										rezultat.matrice[iterator][i] = rezultat.matrice[contor + 1][i];
										rezultat.matrice[contor + 1][i] = aux;
									}
									break;
								}
							}
						}
					}
					cout << "\nElementele matricei extinse la iteratia " << contor + 1 << "/" << rezultat.ordin << " sunt: " << endl;
					for (int i = 0; i < rezultat.ordin; i++)
					{
						for (int j = 0; j < 2 * rezultat.ordin; j++)
						{
							cout << rezultat.matrice[i][j] << "   ";
						}
						cout << endl;
					}
					p0 = p1;
					contor++;
					p1 = rezultat.matrice[contor][contor];

					for (int i = 0; i < matrice_auxiliara.ordin; i++)
					{
						for (int j = 0; j < 2 * matrice_auxiliara.ordin; j++)
						{
							matrice_auxiliara.matrice[i][j] = rezultat.matrice[i][j];
						}
					}

				}
				else
				{
					contor++;
				}
			}

			cout << "\nElementele matricei extinse la iteratia " << contor << "/" << rezultat.ordin << " sunt: " << endl;
			for (int i = 0; i < rezultat.ordin; i++)
			{
				for (int j = 0; j < 2 * rezultat.ordin; j++)
				{
					cout << rezultat.matrice[i][j] << "   ";
				}
				cout << endl;
			}

			Matrice<T> rezultat_final(matrice_la_putere.ordin);

			cout << "\nElementele matricei inverse sunt: " << endl;
			for (int i = 0; i < rezultat.ordin; i++)
			{
				for (int j = rezultat.ordin; j < 2 * rezultat.ordin; j++)
				{
					cout << rezultat.matrice[i][j] << "*(1/" << rezultat.matrice[0][0] << ")" << "   ";
					rezultat_final.matrice[i][j - rezultat.ordin] = rezultat.matrice[i][j] * 1 / rezultat.matrice[rezultat.ordin-1][rezultat.ordin-1];
				}
				cout << endl;
			}

			return rezultat_final;
		}
	}
}

template <>
void Matrice<Complex>::creare_matrice()
{
	for (int i = 0; i < ordin; i++)
	{
		for (int j = 0; j < ordin; j++)
		{
			cout << "matrice[" << i << "][" << j << "]" << " : " << endl;
			matrice[i][j].setParteReala();
			matrice[i][j].setParteImaginara();
		}
	}
}

template <>
void Matrice<Complex>::afisare_matrice()
{
	cout << "\nElementele matricei sunt: " << endl;
	for (int i = 0; i < ordin; i++)
	{
		for (int j = 0; j < ordin; j++)
		{
			matrice[i][j].afisare();
			cout << "   ";
		}
		cout << endl;
	}
}

template<>
Matrice<Complex> operator^(Matrice<Complex>& m1, int rang_putere)
{
	if (rang_putere == 0)
	{
		Matrice<Complex> rezultat(m1.ordin);
		for (int i = 0; i < m1.ordin; i++)
		{
			for (int j = 0; j < m1.ordin; j++)
			{
				rezultat.matrice[i][j] = (i == j);
			}
		}
		return rezultat;
	}
	else if (rang_putere == 1)
	{
		return m1;
	}
	else if (rang_putere >= 2)
	{
		Matrice<Complex> matrice_la_putere(m1.ordin);

		Matrice<Complex> matrice_unitate(m1.ordin);
		for (int i = 0; i < matrice_unitate.ordin; i++)
		{
			for (int j = 0; j < matrice_unitate.ordin; j++)
			{
				matrice_unitate.matrice[i][j] = (i == j);
			}
		}

		for (int numar_inmultiri = 1; numar_inmultiri <= abs(rang_putere); numar_inmultiri++)
		{
			for (int i = 0; i < matrice_la_putere.ordin; i++)
			{
				for (int j = 0; j < matrice_la_putere.ordin; j++)
				{
					for (int k = 0; k < matrice_la_putere.ordin; k++)
					{
						Complex inmultire;
						inmultire = m1.matrice[i][j] * matrice_unitate.matrice[j][k];
						matrice_la_putere.matrice[i][k] = matrice_la_putere.matrice[i][k] + inmultire;
					}
				}
			}
			if (numar_inmultiri < abs(rang_putere))
			{
				matrice_unitate = matrice_la_putere;
				for (int i = 0; i < matrice_la_putere.ordin; i++)
				{
					for (int j = 0; j < matrice_la_putere.ordin; j++)
					{
						matrice_la_putere.matrice[i][j] = 0;
					}
				}
			}
		}
		return matrice_la_putere;
	}
}

template <typename T>
bool Matrice<T>::calculare_determinant_matrice(Matrice<T> m)
{
	bool ok = false;

	if (m.matrice[0][0] == 0)
	{
		for (int contor = 1; contor < m.ordin; contor++)
		{
			if (m.matrice[contor][0] != 0)
			{
				T aux;
				for (int i = 0; i <  m.ordin; i++)
				{
					T aux = m.matrice[0][i];
					m.matrice[0][i] = m.matrice[contor][i];
					m.matrice[contor][i] = -aux;
				}
				break;
			}
		}
	}

	T p1 = m.matrice[0][0];
	T p0 = 1;

	int contor = 0;

	Matrice<T> matrice_auxiliara(m.ordin);
	for (int i = 0; i < matrice_auxiliara.ordin; i++)
	{
		for (int j = 0; j < matrice_auxiliara.ordin; j++)
		{
			matrice_auxiliara.matrice[i][j] = m.matrice[i][j];
		}
	}


	while (contor < m.ordin)
	{
		for (int i = 0; i < m.ordin; i++)
		{
			for (int j = 0; j <  m.ordin; j++)
			{
				if (i == contor)
				{
					cout << "";
				}
				else
				{
					m.matrice[i][j] = (p1 * matrice_auxiliara.matrice[i][j] - matrice_auxiliara.matrice[i][contor] * matrice_auxiliara.matrice[contor][j]) / p0;
				}
			}
		}
		if (contor + 1 < m.ordin)
		{
			if (m.matrice[contor + 1][contor + 1] == 0)
			{
				if (contor + 2 < m.ordin)
				{
					for (int iterator = contor + 2; iterator < m.ordin; iterator++)
					{
						if (m.matrice[iterator][contor + 1] != 0)
						{
							T aux;
							for (int i = 0; i < m.ordin; i++)
							{
								T aux = m.matrice[iterator][i];
								m.matrice[iterator][i] = m.matrice[contor + 1][i];
								m.matrice[contor + 1][i] = -aux;
							}
							break;
						}
					}
				}
			}

			p0 = p1;
			contor++;
			p1 = m.matrice[contor][contor];

			for (int i = 0; i < matrice_auxiliara.ordin; i++)
			{
				for (int j = 0; j < matrice_auxiliara.ordin; j++)
				{
					matrice_auxiliara.matrice[i][j] = m.matrice[i][j];
				}
			}

		}
		else
		{
			contor++;
		}
	}
	cout << "Determinantul este: " << m.matrice[m.ordin - 1][m.ordin - 1] << endl;
	if (m.matrice[m.ordin - 1][m.ordin - 1] == 0)
	{
		ok = true;
	}
	return ok;
}