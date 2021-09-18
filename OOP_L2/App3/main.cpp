#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

template <class T>
void citire_tablou(vector <T> &v, int n)
{
    T element;
    for (int i = 0; i < n; i++)
    {
        cout << "Introduceti elementul ce urmeaza a fi adaugat in tablou"<<'[' << i << ']' << ':';
        cin >> element;
        v.push_back(element);
    }
}

 template <class T>
void afisare_tablou(vector <T> v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(2)<<v[i] << " ";
    }
}

int main()
{
    int alegere;
    cout << "Apasati tasta 1 pentru tabloul cu numere intregi!\n";
    cout << "Apasati tasta 2 pentru tabloul cu numere reale!\n";
    cout << "Apasati tasta 3 pentru tabloul cu siruri de caractere!\n";
    cout << "Apasati tasta 4 pentru a iesi din meniu\n";
    do
    {
        cin >> alegere;
        switch (alegere)
        {
        case 1:
        {
            int numar_elemente1;
            vector <int> v1;

            cout << "Introuceti numarul de elemente ale tabloului cu numere intregi: ";
            cin >> numar_elemente1;

            citire_tablou<int>(v1, numar_elemente1);

            cout << "\nTabloul nesortat de numere intregi este: \n";
            afisare_tablou(v1, numar_elemente1);

            cout << "\nTabloul sortat de numere intregi este: \n";
            sort(v1.begin(), v1.end());
            afisare_tablou(v1, numar_elemente1);

            cout << "\nApasati tasta 1 pentru tabloul cu numere intregi!\n";
            cout << "Apasati tasta 2 pentru tabloul cu numere reale!\n";
            cout << "Apasati tasta 3 pentru tabloul cu siruri de caractere!\n";
            cout << "Apasati tasta 4 pentru a iesi din meniu!\n";
            break;
        }
        case 2:
        {
            int numar_elemente2;
            vector <float> v2;

            cout << "\nIntrouceti numarul de elemente ale tabloului cu numere reale: ";
            cin >> numar_elemente2;

            citire_tablou<float>(v2, numar_elemente2);

            cout << "\nTabloul nesortat de numere intregi este: \n";
            afisare_tablou(v2, numar_elemente2);

            cout << "\nTabloul sortat de numere intregi este: \n";
            sort(v2.begin(), v2.end());
            afisare_tablou(v2, numar_elemente2);

            cout << "\nApasati tasta 1 pentru tabloul cu numere intregi!\n";
            cout << "Apasati tasta 2 pentru tabloul cu numere reale!\n";
            cout << "Apasati tasta 3 pentru tabloul cu siruri de caractere!\n";
            cout << "Apasati tasta 4 pentru a iesi din meniu!\n";
            break;
        }
        case 3:
        {
            int numar_elemente3;
            vector <string> v3;

            cout << "\nIntrouceti numarul de elemente ale tabloului cu siruri de caractere: ";
            cin >> numar_elemente3;

            citire_tablou<string>(v3, numar_elemente3);

            cout << "\nTabloul nesortat de numere intregi este: \n";
            afisare_tablou(v3, numar_elemente3);

            cout << "\nTabloul sortat de numere intregi este: \n";
            sort(v3.begin(), v3.end());
            afisare_tablou(v3, numar_elemente3);

            cout << "\nApasati tasta 1 pentru tabloul cu numere intregi!\n";
            cout << "Apasati tasta 2 pentru tabloul cu numere reale!\n";
            cout << "Apasati tasta 3 pentru tabloul cu siruri de caractere!\n";
            cout << "Apasati tasta 4 pentru a iesi din meniu!\n";
            break;
        }
        }
    } while (alegere != 4);
    return 0;
}
