#pragma once
#include <iostream>
#include <string>
using namespace std;
class CAnimal
{
public:
	CAnimal();
	CAnimal(string , string data_aducerii, float greutate, string hrana_preferata, float cantitate_consumata_pe_zi);
	void afisare_informatii();
protected:
	string nume;
	string data_aducerii;
	float greutate;
	string hrana_preferata;
	float cantitate_consumata_pe_zi;
};

