#include "Zar.h"
using namespace std;

int main()
{
    Zar zar;
    Zar primul_zar;
    Zar al_doilea_zar;

    zar.simulare_aruncare_zar(primul_zar,al_doilea_zar);
    cout << endl;

    cout << "Frecventa de aparitie a fiecarei fete pentru primul zar este: \n";
    zar.frecventa_aparitie_fata(primul_zar);
    cout << endl;

    cout << "\nFrecventa de aparitie a fiecarei fete pentru al doilea zar este: \n";
    zar.frecventa_aparitie_fata(al_doilea_zar);
    cout << endl;

    zar.perechea_predominanta_si_minora(primul_zar, al_doilea_zar);
    cout << endl;

    zar.perechea_aparitii_consecutive(primul_zar, al_doilea_zar);
    cout << endl;
}
