#pragma once
#include "Bila.h"
class AgentieLoto
{
public:
	~AgentieLoto();
	void simulare_loto();
	int numar_aleator();
private:
	Bila* tablou = new Bila[49];
};

