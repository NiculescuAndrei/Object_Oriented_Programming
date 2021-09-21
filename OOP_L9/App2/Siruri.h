#pragma once
#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

template <typename T>
class Siruri
{
public:
	Siruri();
	void inserare_elemente_in_sir();
	void afisare_elemente_din_sir();
	void sortare_sir();
private:
	vector <T> v;
	int numar_elemente;
};

template<typename T>
Siruri<T>::Siruri()
{
	cout << "Introduceti numarul de elemente din sir: " << endl;
	cin >> numar_elemente;
}

template <typename T>
void Siruri<T>::inserare_elemente_in_sir()
{
	T element;
	for (int i = 0; i < numar_elemente; i++)
	{
		cout << "Introduceti elementul " << i + 1 << " pe care vreti sa-l introduceti in sir: " << endl;
		cin >> element;
		v.push_back(element);
	}
}

template <typename T>
void Siruri<T>::afisare_elemente_din_sir()
{
	cout << "\nElementele sirului sunt: " << endl;
	for (int i = 0; i < numar_elemente; i++)
	{
		cout << v[i] << "  " << endl;
	}
}

template <typename T>
void Siruri<T>::sortare_sir()
{
	sort(v.begin(), v.end());
}

template<>
void Siruri<vector<vector<int>>>::inserare_elemente_in_sir()
{
	int numar_linii, numar_coloane;
	int element;

	for (int k = 0; k < numar_elemente; k++)
	{
		vector<vector<int>> v2;

		cout << "Introduceti numarul de linii: " << endl;
		cin >> numar_linii;

		cout << "Introduceti numarul de coloane: " << endl;
		cin >> numar_coloane;

		for (int i = 0; i < numar_linii; i++)
		{
			vector <int> v1;
			for (int j = 0; j < numar_coloane; j++)
			{
				cout << "Introduceti elementul v[" << i << "][" << j << "] din matricea " << k + 1 << endl;
				cin >> element;

				v1.push_back(element);
			}
			v2.push_back(v1);
		}
		v.push_back(v2);
	}
}

template<>
void Siruri<vector<vector<int>>>::afisare_elemente_din_sir()
{
	cout << endl;
	for (int k = 0; k < v.size(); k++)
	{
		cout << "Matricea " << k + 1 << endl;
		for (int i = 0; i < v[k].size(); i++)
		{
			for (int j = 0; j < v[k][i].size(); j++)
			{
				cout << v[k][i][j] << "  ";
			}
			cout << endl;
		}
		cout << endl;
	}
}

template<>
void Siruri<vector<vector<int>>>::sortare_sir()
{
	vector<float> norma_matrice;
	float radical_din_suma;

	for (int k = 0; k < v.size(); k++)
	{
		int suma_patratelor_elementelor = 0;
		for (int i = 0; i < v[k].size(); i++)
		{
			for (int j = 0; j < v[k][i].size(); j++)
			{
				suma_patratelor_elementelor += v[k][i][j] * v[k][i][j];
			}
		}
		radical_din_suma = sqrt(suma_patratelor_elementelor);
		norma_matrice.push_back(radical_din_suma);
	}

	cout << endl;
	for (int i = 0; i < norma_matrice.size(); i++)
	{
		cout << "Norma matricei " << i + 1 << " este: " << norma_matrice[i] << endl;
	}

	while (norma_matrice.size() != 0)
	{
		float minim = norma_matrice[0];
		int pozitie_minim = 0;
		for (int i = 0; i < norma_matrice.size(); i++)
		{
			if (norma_matrice[i] < minim)
			{
				minim = norma_matrice[i];
				pozitie_minim = i;
			}
		}

		norma_matrice.erase(norma_matrice.begin() + pozitie_minim);

		v.push_back(v[pozitie_minim]);
		v.erase(v.begin() + pozitie_minim);
	}

	cout << "\nDupa sortare sirul arata astfel: " << endl;
	
}