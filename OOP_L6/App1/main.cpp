#include "Lista.h"

int main()
{
    Lista l;
    int optiune;
    int valoare;
    cout << "Apasati 1 pentru a adauga un element in lista " << endl;
    cin >> optiune;
    while (optiune != 6)
    {
        switch (optiune)
        {
        case 1:
            cout << "Introduceti valoarea pe care vreti sa o adaugati in lista " << endl;
            cin >> valoare;
            l.adaugare_element_la_sfarsit(valoare);
            cout << "\nApasati 1 pentru a adauga alt element in lista " << endl;
            cout << "Apasati 2 pentru a sterge un element din lista " << endl;
            cout << "Apasati 3 pentru a elimina din lista elementele care au valoarea mai mica decat cea introdusa. " << endl;
            cout << "Apasati 4 pentru a afisa media aritmetica a elementelor din lista. " << endl;
            cout << "Apasati 5 pentru a afisa lista. " << endl;
            cout << "Apasati 6 pentru a iesi din meniu. " << endl;
            break;
        case 2:
            cout << "Introduceti valoarea pe care vreti sa o stergeti din lista " << endl;
            cin >> valoare;
            l.stergere_element_din_lista(valoare);
            cout << "\nApasati 1 pentru a adauga un element in lista " << endl;
            cout << "Apasati 2 pentru a sterge un alt element din lista " << endl;
            cout << "Apasati 3 pentru a elimina din lista elementele care au valoarea mai mica decat cea introdusa. " << endl;
            cout << "Apasati 4 pentru a afisa media aritmetica a elementelor din lista. " << endl;
            cout << "Apasati 5 pentru a afisa lista. " << endl;
            cout << "Apasati 6 pentru a iesi din meniu. " << endl;
            break;
        case 3:
            cout << "Introduceti valoarea pentru care sa eliminati elementele mai mici decat aceasta: " << endl;
            cin >> valoare;
            l.stergere_elemente_sub_valoare(valoare);
            cout << "\nApasati 1 pentru a adauga un element in lista " << endl;
            cout << "Apasati 2 pentru a sterge un element din lista " << endl;
            cout << "Apasati 3 pentru a elimina din lista elementele care au valoarea mai mica decat o alta introdusa. " << endl;
            cout << "Apasati 4 pentru a afisa media aritmetica a elementelor din lista. " << endl;
            cout << "Apasati 5 pentru a afisa lista. " << endl;
            cout << "Apasati 6 pentru a iesi din meniu. " << endl;
            break;
        case 4:
            l.media_aritmetica_elemente();
            cout << "\nApasati 1 pentru a adauga alt element in lista " << endl;
            cout << "Apasati 2 pentru a sterge un element din lista " << endl;
            cout << "Apasati 3 pentru a elimina din lista elementele care au valoarea mai mica decat cea introdusa. " << endl;
            cout << "Apasati 4 pentru a afisa media aritmetica a elementelor din lista. " << endl;
            cout << "Apasati 5 pentru a afisa lista. " << endl;
            cout << "Apasati 6 pentru a iesi din meniu. " << endl;
            break;
        case 5:
            l.afisare_lista();
        default:
            cout << "\nApasati 1 pentru a adauga un element in lista " << endl;
            cout << "Apasati 2 pentru a sterge un element din lista " << endl;
            cout << "Apasati 3 pentru a elimina din lista elementele care au valoarea mai mica decat cea introdusa. " << endl;
            cout << "Apasati 4 pentru a afisa media aritmetica a elementelor din lista. " << endl;
            cout << "Apasati 5 pentru a afisa lista. " << endl;
            cout << "Apasati 6 pentru a iesi din meniu. " << endl;
            break;
        }
        cin >> optiune;
    }
























   /* l.adaugare_element_la_sfarsit(7);
    l.adaugare_element_la_sfarsit(5);
    l.adaugare_element_la_sfarsit(2);
    l.adaugare_element_la_sfarsit(10);
    l.adaugare_element_la_sfarsit(9);
    l.adaugare_element_la_sfarsit(1);
    l.adaugare_element_la_sfarsit(11);
    l.stergere_elemente_sub_valoare(6);
    l.media_aritmetica_elemente();
    l.stergere_element_din_lista(2);
    l.afisare_lista();*/

    
    return 0;
    
}