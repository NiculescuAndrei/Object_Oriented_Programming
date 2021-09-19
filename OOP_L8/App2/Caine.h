#pragma once
#include <iostream>
#include <string>
using namespace std;

class Caine
{
public:
	virtual void citire_date();
	virtual void afisare_date();
protected:
	string nume;
	float inaltime;
	float greutate;
	int varsta;
	string culoare;


};

