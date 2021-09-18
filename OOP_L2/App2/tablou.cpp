#define _CRT_SECURE_NO_WARNINGS
#include "tablou.h"
using namespace std;

void citire_tablou(int tablou[], int numar_elemente)
{
    for (int i = 0; i < numar_elemente; i++)
    {
        cout << "Introduceti elementul tablou" << '[' << i << ']' << ':' ;
        cin >> tablou[i];
    }
}

void sortare_tablou(int tablou[], int numar_elemente)
{
    int aux;
    int contor1, contor2;
    int contor_final = numar_elemente;
    while (contor_final >= 2)
    {
        contor1 = 0;
        contor2 = 1;
        while (contor2 < contor_final)
        {
            if (tablou[contor2] < tablou[contor1])
            {
                aux = tablou[contor2];
                tablou[contor2] = tablou[contor1];
                tablou[contor1] = aux;
            }
            contor1++;
            contor2++;
        }
        contor_final--;
    }
}

void afisare_tablou(int tablou[], int numar_elemente)
{
    for (int i = 0; i < numar_elemente; i++)
    {
        cout << tablou[i] << "  ";
    }
}

void citire_tablou(float tablou[], int numar_elemente)
{
    for (int i = 0; i < numar_elemente; i++)
    {
        cout << "Introduceti elementul tablou" << '[' << i << ']' << ':';
        cin >> tablou[i];
    }
}

void sortare_tablou(float tablou[], int numar_elemente)
{
    float aux;
    int contor1, contor2;
    int contor_final = numar_elemente;
    while (contor_final >= 2)
    {
        contor1 = 0;
        contor2 = 1;
        while (contor2 < contor_final)
        {
            if (tablou[contor2] < tablou[contor1])
            {
                aux = tablou[contor2];
                tablou[contor2] = tablou[contor1];
                tablou[contor1] = aux;
            }
            contor1++;
            contor2++;
        }
        contor_final--;
    }
}

void afisare_tablou(float tablou[], int numar_elemente)
{
    for (int i = 0; i < numar_elemente; i++)
    {
        cout<<fixed<<setprecision(2)<<tablou[i]<<"  ";
    }
}
