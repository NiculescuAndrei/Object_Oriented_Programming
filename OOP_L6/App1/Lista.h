#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
class Lista
{
private:
	struct Nod
	{
		int valoare;
		Nod* urmator;
		Nod(int valoare, Nod* p = 0)
		{
			this->valoare = valoare;
			urmator = p;
		}
		~Nod()
		{
			urmator = 0;
		}
		void adaugare_nod(int v)
		{
			Nod* nod_adaugat = new Nod(v);
			urmator = nod_adaugat;
		}
		void afisare_valoare_din_nod()
		{
			cout << valoare << "  ";
		}
	};
	Nod* primul;
	void stergere_lista();
public:
	Lista();
	~Lista();
	void adaugare_element_la_sfarsit(int v);
	void stergere_element_din_lista(int v);
	void stergere_elemente_sub_valoare(int v);
	void media_aritmetica_elemente();
	void afisare_lista();
};

