#include "polinom.h"

int main()
{

    float rezultat1 = 0; // rezultatul expresiei v1
    float rezultat2 = 0; // rezultatul expresiei v2
    float p1_patrat; // valoare p1^2 in punctul x pentru v1
    float p2_valoare; // valoare p2 in punctul x pentru v1
    float p3_valoare; // valoare p3 in punctul x pentru v1
    float x; // punctul in care se calculeaza valoarea polinoamelor

    int grad_polinom1;
    int grad_polinom2;
    int grad_polinom3;

    cout << "Introduceti gradul polinomului 1: " << endl;
    cin >> grad_polinom1;

    polinom p1(grad_polinom1);
    cout << "Polinomul p1: " << endl;
    p1.citire_date();

    cout << "Introduceti gradul polinomului 2: " << endl;
    cin >> grad_polinom2;

    polinom p2(grad_polinom2);
    cout << "Polinomul p2: " << endl;
    p2.citire_date();

    cout << "Introduceti gradul polinomului 3: " << endl;
    cin >> grad_polinom3;

    polinom p3(grad_polinom3);
    cout << "Polinomul p3: " << endl;
    p3.citire_date();

    cout << "Introduceti punctul in care sa se evalueze polinoamele: " << endl;
    cin >> x;

    polinom p1_la_patrat;
    p1_la_patrat = p1 * p1;

    p1_patrat = p1_la_patrat(x);
    p2_valoare = p2(x);
    p3_valoare = p3(x);

    cout << "Pentru expresia v1 avem: " << endl;

    cout << "p1^2" << "(" << x << ")=" << p1_patrat << endl;
    cout << "p2" << "(" << x << ")=" << p2_valoare << endl;
    cout << "p3" << "(" << x << ")=" << p3_valoare << endl;

    rezultat1 = p1_patrat - (p2_valoare * p3_valoare);
    cout << "\nv1 = " << "p1^2" << "(" << x << ")" << " - " << "p2" << "(" << x << ")" << " * " << "p3" << "(" << x << ")" << " = " << rezultat1 << endl;;
    
    polinom p2_inmultit_p3;
    p2_inmultit_p3 = p2 * p3;

    polinom polinom_rezultat_pentru_v2;
    polinom_rezultat_pentru_v2 = p1_la_patrat - p2_inmultit_p3;
    rezultat2 = polinom_rezultat_pentru_v2(x);
    cout << "\nv2 = " << "(" << "p1^2" << " - " << "p2" << " * " << "p3" << ")" << "(" << x << ")" << " = " << rezultat2 << endl;

    if (rezultat1 == rezultat2)
    {
        cout << "\nCele doua expresii sunt egale!" << endl;
    }
    else
    {
        cout << "Cele doua expresii nu sunt egale" << endl;
    }
    
    return 0;
}
