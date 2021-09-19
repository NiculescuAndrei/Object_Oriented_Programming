#pragma once
#include "Carte.h"
#define numar_carti 2
class Biblioteca
{
public:
	~Biblioteca();
	void creare_biblioteca();
	void cautare_dupa_titlu();
	void cautare_dupa_editura();
	void cautare_dupa_isbn();
private:
	Carte* tablou = new Carte[numar_carti];
};

