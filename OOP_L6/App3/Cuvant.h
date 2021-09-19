#pragma once
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Cuvant
{
private:
	struct Sinonim
	{
		vector <string> tablou_sinonime;
		~Sinonim() { tablou_sinonime.clear(); }
	};
	Sinonim test;
public:
	Cuvant();
	string cuvant;
	void creeare_lista_sinonime();
	void afisare_lista_sinonime();
};

