#pragma once
class Complex
{
public:
	Complex(double p_reala = 0, double p_imaginara = 0) :parte_reala(p_reala), parte_imaginara(p_imaginara) {}
	Complex(Complex&);
	void setParteReala();
	void setParteImaginara();
	double getParteReala();
	double getParteImaginara();
	void afisare();
	void operator=(const Complex&);
	friend Complex operator+(Complex&, Complex&);
	friend Complex operator-(Complex&, Complex&);
	friend Complex operator*(Complex&, Complex&);
private:
	double parte_reala;
	double parte_imaginara;
};

