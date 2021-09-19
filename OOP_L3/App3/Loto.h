#pragma once
#include "Bila.h"
class Loto
{
public:
	~Loto();
	void simulare_loto();
	int numar_aleator();
private:
	Bila* tablou = new Bila[49];
};

