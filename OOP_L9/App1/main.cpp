#include "Matrice.h"
#include "Complex.h"

int main()
{
    Matrice<int> test(4);
    test.creare_matrice();
    test.afisare_matrice();


    /*Matrice<int> egal = test;
    egal = test;
    egal.afisare_matrice();

    Matrice<int> result;
    result = test * egal;
    result.afisare_matrice();
    */

    
    Matrice<int> result;
    result = test ^ (-1);
    result.afisare_matrice();

    
    /*Matrice<Complex> test(2);
    test.creare_matrice();
    test.afisare_matrice();

    Matrice<Complex> test1(2);
    test1.creare_matrice();
    test1.afisare_matrice();

    Matrice<Complex> result(2);
    result = test + test1;
    result.afisare_matrice();*/
    return 0;
}
