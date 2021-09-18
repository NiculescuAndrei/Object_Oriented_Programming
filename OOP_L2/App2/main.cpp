#define _CRT_SECURE_NO_WARNINGS
#include "tablou.h"
#include <algorithm>
using namespace std;


int main()
{
    // Tabloul numerelor intregi

    int n1;
    cout<< "Introduceti numarul de elemente intregi din tablou: ";
    cin >> n1;
    int* tablou1 = new int[n1];

    citire_tablou(tablou1, n1);
    cout << "\nTabloul nesortat este: ";
    afisare_tablou(tablou1, n1);

    sortare_tablou(tablou1, n1);
    cout << "\nTabloul sortat este: ";
    afisare_tablou(tablou1, n1);

    // Tabloul numerelor reale

    int n2;
    cout << "\nIntroduceti numarul de elemente reale din tablou: ";
    cin >> n2;
    float* tablou2 = new float[n2];

    citire_tablou(tablou2, n2);
    cout << "\nTabloul nesortat este: ";
    afisare_tablou(tablou2, n2);

    sortare_tablou(tablou2, n2);
    cout << "\nTabloul sortat este: ";
    afisare_tablou(tablou2, n2);

    // Tabloul sirurilor de caractere

    int n3;
    string s;
    cout << "\nIntroduceti numarul de siruri de caractere din tablou: ";
    cin >> n3;
    
    vector< string > tablou3;

    for (int i = 0; i < n3; i++)
    {
        cout << "Introduceti elementul tablou" << '[' << i << ']' << ':';
        cin >> s;
        tablou3.push_back(s);
    }

    cout << "\nTabloul nesortat este: ";

    for (int i = 0; i < n3; i++)
    {
        cout << tablou3[i] << "  ";
    }

    cout << "\nTabloul sortat este: ";

    sort(tablou3.begin(), tablou3.end());

    for (int i = 0; i < n3; i++)
    {
        cout << tablou3[i] << "  ";
    }

    delete[] tablou1;
    delete[] tablou2;
    tablou3.clear();

    return 0;
}
