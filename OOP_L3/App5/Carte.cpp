#include "Carte.h"

void Carte::setTitlu()
{
	getline(cin, titlul);
}

string Carte::getTitlu()
{
	return titlul;
}

void Carte::setAutor()
{
	getline(cin, autorul);
}

string Carte::getAutor()
{
	return autorul;
}

void Carte::setEditura()
{
	getline(cin, editura);
}

string Carte::getEditura()
{
	return editura;
}
void Carte::setIsbn()
{
	getline(cin, isbn);
}

string Carte::getIsbn()
{
	return isbn;
}

void Carte::setAnulAparitiei()
{
	cin >> anul_aparitiei;
}

int Carte::getAnulAparitiei()
{
	return anul_aparitiei;
}

void Carte::setPret()
{
	cin >> pret;
}

int Carte::getPret()
{
	return pret;
}
