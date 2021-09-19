#pragma once
#include <iostream>
#include <time.h>
#include <stdlib.h>

class Bila
{
public:
	Bila();
	void setValoare(int valoare);
	void setStareCurentaTrue();
	void setStareCurentaFalse();
	int getValoare();
	bool getStareCurenta();
private:
	int valoare;
	bool stare_curenta;
};
