#pragma once
#include "CAnimal.h"
#include "CAnimalIerbivor.h"
#include "CAnimalCarnivor.h"
#include "CLeu.h"
#include "CIepure.h"
#include "CCaprioara.h"
#include "CVulpe.h"
#include "CUrs.h"
#define numar_animale 2
class CRezervatie
{
public:
	~CRezervatie() { v.clear(); }
	void populare_rezervatie();
	void afisare_animale_rezervatie();
private:
	vector <CAnimal*> v;
};

