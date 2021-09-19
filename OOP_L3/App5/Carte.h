#pragma once
#include <iostream>
#include <string>
using namespace std;

class Carte
{
public:
	void setTitlu();
	string getTitlu();

	void setAutor();
	string getAutor();

	void setEditura();
	string getEditura();

	void setIsbn();
	string getIsbn();

	void setAnulAparitiei();
	int getAnulAparitiei();

	void setPret();
	int getPret();

private:
	string titlul;
	string autorul;
	string editura;
	string isbn;
	int anul_aparitiei;
	int pret;
};

