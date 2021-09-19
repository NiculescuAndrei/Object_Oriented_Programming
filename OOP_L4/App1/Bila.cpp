#include "Bila.h"
using namespace std;

Bila::Bila()
{
	srand(time(NULL));
	stare_curenta = false;
	valoare = 0;
}

void Bila::setValoare(int valoare)
{
	this->valoare = valoare;
}

void Bila::setStareCurentaTrue()
{
	stare_curenta = true;
}

void Bila::setStareCurentaFalse()
{
	stare_curenta = false;
}

int Bila::getValoare()
{
	return valoare;
}

bool Bila::getStareCurenta()
{
	return stare_curenta;
}