#pragma once
#define numar_membri 100
#include "MembruTrib.h"
class SefTrib
{
public:
	~SefTrib();
	int alegere_sef_trib();
private:
	MembruTrib* tablou = new MembruTrib[numar_membri];
};

