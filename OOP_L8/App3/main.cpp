#include "CAnimal.h"
#include "CAnimalIerbivor.h"
#include "CAnimalCarnivor.h"
#include "CLeu.h"
#include "CIepure.h"
#include "CCaprioara.h"
#include "CVulpe.h"
#include "CUrs.h"
#include "CRezervatie.h"
int main()
{   
    CRezervatie parc;
    parc.populare_rezervatie();
    parc.afisare_animale_rezervatie();

    return 0;
}
