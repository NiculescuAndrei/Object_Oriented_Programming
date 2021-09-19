#include "CRezervatie.h"

CRezervatie::~CRezervatie()
{
	delete[] leu;
	delete[] iepure;
	delete[] caprioara;
	delete[] vulpe;
	//delete[] urs;
	urs.clear();
}

CRezervatie::CRezervatie(int nr_lei, int nr_iepuri, int nr_caprioare, int nr_vulpi, int nr_ursi)
	: numar_lei(nr_lei), numar_iepuri(nr_iepuri), numar_caprioare(nr_caprioare), numar_vulpi(nr_vulpi), numar_ursi(nr_ursi)
{
}

void CRezervatie::populare_rezervatie()
{
	for (int i = 0; i < numar_lei; i++)
	{
		string aux_nume;
		string aux_data_aducerii;
		float aux_greutate;
		string aux_hrana_preferata;
		float aux_cantitate_consumata_pe_zi;
		float aux_temperatura_minima_suportata;
		string aux_tara_de_provenienta;

		cout << "Introduceti numele leului: " << endl;
		getline(cin,aux_nume);

		cout << "Introduceti data aducerii leului: " << endl;
		cin >> aux_data_aducerii;

		cout << "Introduceti greutatea leului: " << endl;
		cin >> aux_greutate;

		cout << "Introduceti hrana preferata a leului: " << endl;
		cin >> aux_hrana_preferata;

		cout << "Introduceti cantitatea consumata pe zi de catre leu: " << endl;
		cin >> aux_cantitate_consumata_pe_zi;

		cout << "Introduceti temperatura minima suportata de catre leu: " << endl;
		cin >> aux_temperatura_minima_suportata;

		cin.get();

		cout << "Introduceti tara de provenienta a leului: " << endl;
		getline(cin, aux_tara_de_provenienta);

		leu[i] = CLeu(aux_nume, aux_data_aducerii, aux_greutate, aux_hrana_preferata, aux_cantitate_consumata_pe_zi, aux_temperatura_minima_suportata, aux_tara_de_provenienta);
		//leu[i].afisare_informatii();
	}
	
	cout << endl;
	
	for (int i = 0; i < numar_iepuri; i++)
	{
		string aux_nume;
		string aux_data_aducerii;
		float aux_greutate;
		string aux_hrana_preferata;
		float aux_cantitate_consumata_pe_zi;
		string aux_suprafata_minima_de_trai;

		cout << "Introduceti numele iepurelui: " << endl;
		getline(cin, aux_nume);

		cout << "Introduceti data aducerii iepurelui: " << endl;
		cin >> aux_data_aducerii;

		cout << "Introduceti greutatea iepurelui: " << endl;
		cin >> aux_greutate;

		cout << "Introduceti hrana preferata a iepurelui: " << endl;
		cin >> aux_hrana_preferata;

		cout << "Introduceti cantitatea consumata pe zi de catre iepure: " << endl;
		cin >> aux_cantitate_consumata_pe_zi;

		cin.get();

		cout << "Introduceti suprafata minima de trai a iepurelui: " << endl;
		getline(cin, aux_suprafata_minima_de_trai);

		iepure[i] = CIepure(aux_nume, aux_data_aducerii, aux_greutate, aux_hrana_preferata, aux_cantitate_consumata_pe_zi, aux_suprafata_minima_de_trai);
		//iepure[i].afisare_informatii();

	}

	cout << endl;
	

	for (int i = 0; i < numar_caprioare; i++)
	{
		string aux_nume;
		string aux_data_aducerii;
		float aux_greutate;
		string aux_hrana_preferata;
		float aux_cantitate_consumata_pe_zi;
		int aux_numarul_de_pui;

		cout << "Introduceti numele caprioarei: " << endl;
		getline(cin, aux_nume);

		cout << "Introduceti data aducerii caprioarei: " << endl;
		cin >> aux_data_aducerii;

		cout << "Introduceti greutatea caprioarei: " << endl;
		cin >> aux_greutate;

		cout << "Introduceti hrana preferata a caprioarei: " << endl;
		cin >> aux_hrana_preferata;

		cout << "Introduceti cantitatea consumata pe zi de catre caprioara: " << endl;
		cin >> aux_cantitate_consumata_pe_zi;

		cout << "Introduceti numarul de pui ai caprioarei: " << endl;
		cin >> aux_numarul_de_pui;

		cin.get();

		caprioara[i] = CCaprioara(aux_nume, aux_data_aducerii, aux_greutate, aux_hrana_preferata, aux_cantitate_consumata_pe_zi, aux_numarul_de_pui);
		//caprioara[i].afisare_informatii();

	}
	
	cout << endl;
	
	for (int i = 0; i < numar_vulpi; i++)
	{
		string aux_nume;
		string aux_data_aducerii;
		float aux_greutate;
		string aux_hrana_preferata;
		float aux_cantitate_consumata_pe_zi;
		float aux_temperatura_maxima_de_trai;
		string aux_tip;

		cout << "Introduceti numele vulpii: " << endl;
		getline(cin, aux_nume);

		cout << "Introduceti data aducerii vulpii: " << endl;
		cin >> aux_data_aducerii;

		cout << "Introduceti greutatea vulpii: " << endl;
		cin >> aux_greutate;

		cout << "Introduceti hrana preferata a vulpii: " << endl;
		cin >> aux_hrana_preferata;

		cout << "Introduceti cantitatea consumata pe zi de catre vulpe: " << endl;
		cin >> aux_cantitate_consumata_pe_zi;

		cout << "Introduceti temperatura maxima de trai a vulpii: " << endl;
		cin >> aux_temperatura_maxima_de_trai;

		cout << "Introduceti tipul vulpii: " << endl;
		cin >> aux_tip;

		cin.get();

		vulpe[i] = CVulpe(aux_nume, aux_data_aducerii, aux_greutate, aux_hrana_preferata, aux_cantitate_consumata_pe_zi, aux_temperatura_maxima_de_trai, aux_tip);
		//vulpe[i].afisare_informatii();

	}

	cout << endl;
	
	for (int i = 0; i < numar_ursi; i++)
	{
		string aux_nume;
		string aux_data_aducerii;
		float aux_greutate;
		string aux_hrana_preferata;
		float aux_cantitate_consumata_pe_zi;
		int aux_perioada_de_hibernare;

		cout << "Introduceti numele ursului: " << endl;
		getline(cin, aux_nume);

		cout << "Introduceti data aducerii ursului: " << endl;
		cin >> aux_data_aducerii;

		cout << "Introduceti greutatea ursului: " << endl;
		cin >> aux_greutate;

		cout << "Introduceti hrana preferata a ursului: " << endl;
		cin >> aux_hrana_preferata;

		cout << "Introduceti cantitatea consumata pe zi de catre urs: " << endl;
		cin >> aux_cantitate_consumata_pe_zi;

		cout << "Introduceti perioada de hibernare a ursului: " << endl;
		cin >> aux_perioada_de_hibernare;

		cin.get();

		//urs[i] = CUrs(aux_nume, aux_data_aducerii, aux_greutate, aux_hrana_preferata, aux_cantitate_consumata_pe_zi, aux_perioada_de_hibernare);
		//urs[i].afisare_informatii();

		urs.push_back(CUrs(aux_nume, aux_data_aducerii, aux_greutate, aux_hrana_preferata, aux_cantitate_consumata_pe_zi, aux_perioada_de_hibernare));
		//urs[i].afisare_informatii();

	}

	cout << endl;
}

void CRezervatie::afisare_animale_rezervatie()
{
	for (int i = 0; i < numar_lei; i++)
	{
		leu[i].afisare_informatii();
	}

	cout << endl;

	for (int i = 0; i < numar_iepuri; i++)
	{
		iepure[i].afisare_informatii();
	}

	cout << endl;

	for (int i = 0; i < numar_caprioare; i++)
	{
		caprioara[i].afisare_informatii();
	}

	cout << endl;

	for (int i = 0; i < numar_vulpi; i++)
	{
		vulpe[i].afisare_informatii();
	}

	cout << endl;

	for (int i = 0; i < numar_ursi; i++)
	{
		urs[i].afisare_informatii();
	}
}