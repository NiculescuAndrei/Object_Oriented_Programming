#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h> 
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int numar_siruri_de_caractere = 0;
    bool verificare = false;
    int numar_aparitii = 0;

    cout << "Introduceti numarul de siruri de caractere: ";
    cin >> numar_siruri_de_caractere;

    vector <string> v;
    string sir_de_caractere;
    string sir_de_caractere_cautat;

    for (int i = 0; i < numar_siruri_de_caractere; i++)
    {
        cout << "Introduceti sirul " << "v" << '[' << i <<']' << " din tablou: ";
        cin >> sir_de_caractere;
        v.push_back(sir_de_caractere);
    }

    cout << "Introduceti sirul de caractere ce urmeaza a fi cautat in tablou: ";
    cin >> sir_de_caractere_cautat;

    for (int i = 0; i < numar_siruri_de_caractere; i++)
    {
        if (v[i] == sir_de_caractere_cautat)
        {
            verificare = true;
            numar_aparitii++;
        }
    }

    if (verificare == true)
    {
        cout << "\nSirul cautat a fost gasit de " << numar_aparitii << " ori\n";
    }
    else
    {
        cout << "\nSirul cautat nu a fost gasit!\n";
    }

}
