#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;
class Card
{
public:
	Card()
	{
		valoare = 0;
		suita = "inima";
		stare_curenta = false;
	}
	string suita;
	int valoare;
	bool stare_curenta;
};

