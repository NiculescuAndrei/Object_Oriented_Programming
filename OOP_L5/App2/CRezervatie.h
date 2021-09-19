#pragma once
#include "CAnimal.h"
#include "CAnimalIerbivor.h"
#include "CAnimalCarnivor.h"
#include "CLeu.h"
#include "CIepure.h"
#include "CCaprioara.h"
#include "CVulpe.h"
#include "CUrs.h"
#include<bits/stdc++.h>


class CRezervatie
{
public:
	CRezervatie(int nr_lei, int nr_iepuri, int nr_caprioare, int nr_vulpi, int nr_ursi);
	~CRezervatie();
	int numar_lei;
	int numar_iepuri;
	int numar_caprioare;
	int numar_vulpi;
	int numar_ursi;
	void populare_rezervatie();
	void afisare_animale_rezervatie();
private:
	CLeu* leu = new CLeu[numar_lei];
	CIepure* iepure = new CIepure[numar_iepuri];
	CCaprioara* caprioara = new CCaprioara[numar_caprioare];
	CVulpe* vulpe = new CVulpe[numar_vulpi];
	//CUrs* urs = new CUrs[numar_ursi];
	vector< CUrs > urs;
};

