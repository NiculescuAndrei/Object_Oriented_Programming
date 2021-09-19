#include "Carte.h"
#include "Biblioteca.h"

int main()
{
    int optiune = 0;

    Biblioteca aman;
    aman.creare_biblioteca();

    cout << "\nApasati 1 pentru a cauta o carte dupa titlu: \n";
    cout << "Apasati 2 pentru a cauta o carte dupa editura: \n";
    cout << "Apasati 3 pentru a cauta o carte dupa isbn: \n";

    while (optiune != 4)
    {
        cin >> optiune;
        cin.get();
        switch (optiune)
        {
        case 1:
            aman.cautare_dupa_titlu();
            cout << "\nApasati 1 pentru a cauta o alta carte dupa titlu: \n";
            cout << "Apasati 2 pentru a cauta o carte dupa editura: \n";
            cout << "Apasati 3 pentru a cauta o carte dupa isbn: \n";
            cout << "Apasati 4 pentru a inceta cautarea. \n";
            break;

        case 2:
            aman.cautare_dupa_editura();
            cout << "\nApasati 1 pentru a cauta o carte dupa titlu: \n";
            cout << "Apasati 2 pentru a cauta o alta carte dupa editura: \n";
            cout << "Apasati 3 pentru a cauta o carte dupa isbn: \n";
            cout << "Apasati 4 pentru a inceta cautarea. \n";
            break;

        case 3:
            aman.cautare_dupa_isbn();
            cout << "\nApasati 1 pentru a cauta o carte dupa titlu: \n";
            cout << "Apasati 2 pentru a cauta o carte dupa editura: \n";
            cout << "Apasati 3 pentru a cauta o alta carte dupa isbn: \n";
            cout << "Apasati 4 pentru a inceta cautarea. \n";
            break;

        cin >> optiune;
        }
    }

    return 0;
}
