#pragma once
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Abonat
{
public:
	Abonat();
	friend class carte_de_telefon;
private:
	string nume;
	string adresa;
	string numar_de_telefon;
};

