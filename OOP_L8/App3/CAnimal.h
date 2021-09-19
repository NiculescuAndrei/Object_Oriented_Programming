#pragma once
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
class CAnimal
{
public:
	virtual void citire_date() = 0;
	virtual void afisare_date() = 0;
protected:
	string nume;
	string data_aducerii;
	float greutate;
	string hrana_preferata;
	float cantitate_consumata_pe_zi;
};

