#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
using namespace std;

class ISBN13
{
public:
	ISBN13(string identificator_tara, string identificator_editura, string identificator_titlu);
	ISBN13(string identificator_tara, string identificator_editura, string identificator_titlu, int cifra_de_control);
	void validare_cifra_de_control();
private:
	string prefix;
	string identificator_tara;
	string identificator_editura;
	string identificator_titlu;
	int cifra_de_control;
	string isbn;
};

