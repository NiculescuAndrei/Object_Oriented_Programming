#include "Lista.h"

Lista::Lista()
{
	primul = 0;
}

Lista::~Lista()
{
	stergere_lista();
	primul = 0;
}

void Lista::stergere_lista()
{
	Nod* p = primul;
	Nod* q;
	while (p != 0)
	{
		q = p;
		p = p->urmator;
		delete q;
	}
}

void Lista::adaugare_element_la_sfarsit(int v)
{
	if (primul == 0)
	{
		primul = new Nod(v);
	}
	else
	{
		Nod* iterator = primul;
		while (iterator->urmator != 0)
		{
			iterator = iterator->urmator;
		}
		iterator->adaugare_nod(v);
	}
}

void Lista::stergere_element_din_lista(int v)
{
	bool verificare_existenta = false;
	if (primul == 0)
	{
		cout << "Lista este goala! Nu exista elemente ce pot fi sterse! " << endl;
	}
	else
	{
		// Verificare existenta element cautat in lista
		for (Nod* iterator = primul; iterator != 0; iterator = iterator->urmator)
		{
			if (iterator->valoare == v)
			{
				verificare_existenta = true;
				break;
			}
		}

		if (verificare_existenta == false)
		{
			cout << "Elementul pe care vreti sa il stergeti nu exista in lista! " << endl;
		}
		else
		{
			for (Nod* iterator = primul; iterator != 0; iterator = iterator->urmator)
			{
				if (iterator->valoare == v)
				{
					for (Nod* aux = iterator; aux != 0; aux = aux->urmator)
					{
						if (aux->urmator != 0)
						{
							aux->valoare = aux->urmator->valoare;
							if (aux->urmator->urmator == 0)
							{
								aux->urmator = 0;
							}
						}
						// In cazul in care elementul este singur in lista il stergem in loc sa deplasam valorile cu o pozitie la stanga
						else
						{
							delete aux;
							primul = 0;
							break;
						}
					}
					break;
				}
				// daca elementul ce trebuie sters este ultimul din lista facem ca penultimul element din lista sa pointeze catre NULL.
				else if (iterator->urmator->urmator == 0 && iterator->urmator->valoare == v)
				{
					iterator->urmator = 0;
				}
			}
		}
	}
	//afisare_lista();
}

void Lista::stergere_elemente_sub_valoare(int v)
{
	Nod* iterator = primul;
	Nod* precedent;
	if (primul == 0)
	{
		cout << "Lista este goala! Nu exista elemente ce pot fi sterse! " << endl;
	}
	else
	{
		while(iterator!=0)
		{
		    if (iterator->valoare < v)
			{
				for (Nod* aux = iterator; aux != 0; aux = aux->urmator)
				{
					//Daca elementul nu este ultimul din lista sau singurul din lista atunci "mutam" spre stanga cu o pozitie valorile.
					if (aux->urmator != 0)
					{
						aux->valoare = aux->urmator->valoare;
						if (aux->urmator->urmator == 0)
						{
							aux->urmator = 0;
						}
					}
					else
					{
						// Daca elementul este singur in lista il stergem.
						if (aux == primul)
						{
							primul = 0;
							delete aux;
							iterator = 0;
						}
						// Daca elementul este ultimul din lista atunci cu o variabila care pointeaza catre penultimul element din lista facem ca acest element sa pointeze
						// catre null si stergem ultimul element.
						else
						{
							for (precedent = primul; precedent->urmator != iterator; precedent = precedent->urmator);
							delete aux;
							precedent->urmator = 0;
							iterator = 0;
						}
						break;
					}
				}
			}
		    // Daca nu a fost gasit un element mai mic decat v se incrementeaza iteratorul.
		    // Daca se gaseste unu si se realizeaza deplasarea valorilor spre stanga cu o pozitie atunci iteratorul trebuie sa ramana pe loc pentru a testa noua valoare
			else
			{
				iterator = iterator->urmator;
			}
		}
	}
	//afisare_lista();
}

void Lista::media_aritmetica_elemente()
{
	float medie;
	int numar_elemente = 0;
	int suma = 0;
	for (Nod* iterator = primul; iterator != 0; iterator = iterator->urmator)
	{
		suma = suma + iterator->valoare;
		numar_elemente++;
	}
	medie = ((float)suma / (float)numar_elemente);
	cout << "\nMedia aritmetica este: " << fixed << setprecision(2) << medie << endl;
}

void Lista::afisare_lista()
{
	Nod* iterator = primul;

	if (iterator == 0)
	{
		cout << "Lista este goala! " << endl;
	}
	else
	{
		cout << "Elementele listei sunt: " << endl;
		for (iterator ; iterator != 0; iterator = iterator->urmator)
		{
			iterator->afisare_valoare_din_nod();
		}
	}

}