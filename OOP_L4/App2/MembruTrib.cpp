#include "MembruTrib.h"

MembruTrib::MembruTrib()
{
	numar_voturi = rand() % 6 + 1;
}

int MembruTrib::getNumarVoturi()
{
	return numar_voturi;
}