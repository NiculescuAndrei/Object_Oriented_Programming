#pragma once
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Zona
{
public:
	virtual void citire_date() = 0;
	virtual void afisare_date() = 0;
	virtual void modificare_date() = 0;
	virtual ~Zona() {};
protected:
	int indicativ;
	string dimensiuni;
};

