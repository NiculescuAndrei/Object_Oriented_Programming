#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class polinom
{
public:
	polinom(int grad_polinom);
	polinom();
	polinom(const polinom&);
	~polinom();
	polinom& operator=(const polinom&);
	friend polinom operator+(polinom&, polinom&);
	friend polinom operator-(polinom&, polinom&);
	friend polinom operator*(polinom&, polinom&);
	double operator()(double x);
	void afisare();
	void citire_date();
	//double operator[](int i);
private:
	double* coeficienti;
	int grad;
};

