#include "ISBN13.h"

ISBN13::ISBN13(string identificator_tara, string identificator_editura, string identificator_titlu)
{
	int suma = 0;
	int aux;
	prefix = "978";

	this->identificator_tara = identificator_tara;
	this->identificator_editura = identificator_editura;
	this->identificator_titlu = identificator_titlu;
	
	isbn = prefix + '-' + this->identificator_tara + '-' + this->identificator_editura + '-' + this->identificator_titlu;
	cout << "ISBN-ul fara cifra de control este: " << isbn << endl;

	for (int i = 0; i < prefix.size(); i++)
	{
		if (i % 2 == 0)
		{
			aux = prefix[i]-'0';
			suma += aux;
		}
		else
		{
			aux = prefix[i]-'0';
			suma += aux*3;
		}
	}

	for (int i = 0; i < this->identificator_tara.size(); i++)
	{
		if (prefix.size() % 2 != 0)
		{
			if (i % 2 == 0)
			{
				aux = this->identificator_tara[i] - '0';
				suma += aux * 3;
			}
			else
			{
				aux = this->identificator_tara[i] - '0';
				suma += aux;
			}
		}
		else
		{
			if (i % 2 == 0)
			{
				aux = this->identificator_tara[i] - '0';
				suma += aux;
			}
			else
			{
				aux = this->identificator_tara[i] - '0';
				suma += aux * 3;
			}
		}
	}


	for (int i = 0; i < this->identificator_editura.size(); i++)
	{
		if (this->identificator_tara.size() % 2 != 0)
		{
			if (i % 2 == 0)
			{
				aux = this->identificator_editura[i] - '0';
				suma += aux ;
			}
			else
			{
				aux = this->identificator_editura[i] - '0';
				suma += aux * 3;
			}
		}
		else
		{
			if (i % 2 == 0)
			{
				aux = this->identificator_editura[i] - '0';
				suma += aux * 3;
			}
			else
			{
				aux = this->identificator_editura[i] - '0';
				suma += aux;
			}
		}
	}

	for (int i = 0; i < this->identificator_titlu.size(); i++)
	{
		if (this->identificator_editura.size() % 2 != 0)
		{
			if (i % 2 == 0)
			{
				aux = this->identificator_titlu[i] - '0';
				suma += aux * 3;
			}
			else
			{
				aux = this->identificator_titlu[i] - '0';
				suma += aux ;
			}
		}
		else
		{
			if (i % 2 == 0)
			{
				aux = this->identificator_titlu[i] - '0';
				suma += aux;
			}
			else
			{
				aux = this->identificator_titlu[i] - '0';
				suma += aux * 3;
			}
		}
	}

	if (suma % 10 == 0)
	{
		cifra_de_control = 0;
	}
	else
	{
		cifra_de_control = 10 - (suma % 10);
	}

	cout << "\nCifra de control este: " << cifra_de_control << endl;

	char cifra = cifra_de_control + '0';

	isbn = prefix + '-' + this->identificator_tara + '-' + this->identificator_editura + '-' + this->identificator_titlu + '-' + cifra;
	cout << endl << "ISBN-ul cu cifra de control este: " << isbn << endl;
}

ISBN13::ISBN13(string identificator_tara, string identificator_editura, string identificator_titlu, int cifra_de_control)
{
	prefix = "978";
	this->identificator_tara = identificator_tara;
	this->identificator_editura = identificator_editura;
	this->identificator_titlu = identificator_titlu;
	this->cifra_de_control = cifra_de_control;

	char cifra = cifra_de_control + '0';

	isbn = prefix + '-' + this->identificator_tara + '-' + this->identificator_editura + '-' + this->identificator_titlu + '-' + cifra;
	cout << "ISBN-ul introdus este: "<< isbn << endl;;
}

void ISBN13::validare_cifra_de_control()
{
	cout << endl; 
	int aux;
	int suma = 0;

	for (int i = 0; i < prefix.size(); i++)
	{
		if (i % 2 == 0)
		{
			aux = prefix[i] - '0';
			suma += aux;
		}
		else
		{
			aux = prefix[i] - '0';
			suma += aux * 3;
		}
	}

	for (int i = 0; i < this->identificator_tara.size(); i++)
	{
		if (prefix.size() % 2 != 0)
		{
			if (i % 2 == 0)
			{
				aux = this->identificator_tara[i] - '0';
				suma += aux * 3;
			}
			else
			{
				aux = this->identificator_tara[i] - '0';
				suma += aux;
			}
		}
		else
		{
			if (i % 2 == 0)
			{
				aux = this->identificator_tara[i] - '0';
				suma += aux;
			}
			else
			{
				aux = this->identificator_tara[i] - '0';
				suma += aux * 3;
			}
		}
	}

	for (int i = 0; i < this->identificator_editura.size(); i++)
	{
		if (this->identificator_tara.size() % 2 != 0)
		{
			if (i % 2 == 0)
			{
				aux = this->identificator_editura[i] - '0';
				suma += aux;
			}
			else
			{
				aux = this->identificator_editura[i] - '0';
				suma += aux * 3;
			}
		}
		else
		{
			if (i % 2 == 0)
			{
				aux = this->identificator_editura[i] - '0';
				suma += aux * 3;
			}
			else
			{
				aux = this->identificator_editura[i] - '0';
				suma += aux;
			}
		}
	}

	for (int i = 0; i < this->identificator_titlu.size(); i++)
	{
		if (this->identificator_editura.size() % 2 != 0)
		{
			if (i % 2 == 0)
			{
				aux = this->identificator_titlu[i] - '0';
				suma += aux * 3;
			}
			else
			{
				aux = this->identificator_titlu[i] - '0';
				suma += aux;
			}
		}
		else
		{
			if (i % 2 == 0)
			{
				aux = this->identificator_titlu[i] - '0';
				suma += aux;
			}
			else
			{
				aux = this->identificator_titlu[i] - '0';
				suma += aux * 3;
			}
		}
	}
	
	if (this->identificator_titlu.size() % 2 != 0)
	{
		suma += cifra_de_control;
	}
	else
	{
		suma += 3 * cifra_de_control;
	}

	if (suma % 10 != 0)
	{
		cout << "ISBN nu este corect! Cifra de control nu corespunde. \n";
	}
	else
	{
		cout << "ISBN este corect! \n";
	}
}