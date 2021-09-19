#pragma once
#include <iostream>
using namespace std;

class Complex
{
public:
	Complex();
	Complex(double);
	Complex(double, double);
	Complex(Complex&);
	void operator=(const Complex&);
	friend Complex operator+(Complex&, Complex&);
	friend Complex operator-(Complex&, Complex&);
	friend Complex operator*(Complex&, Complex&);
	friend Complex operator/(Complex&, Complex&);
	friend Complex operator^(Complex&, int);
	void afisare();
	//double operator~();
private:
	double parte_reala;
	double parte_imaginara;
};
