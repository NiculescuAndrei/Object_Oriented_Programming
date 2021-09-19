#pragma once
#include <iostream>
#include <time.h>
#include <stdlib.h>

class Bila
{
public:
	Bila();
	void setValoare(int valoare);
	void setStareCurenta();
	int getValoare();
	bool getStareCurenta();
private:
	int valoare;
	bool stare_curenta;
};

