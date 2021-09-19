# Aplicația 1
Să se proiecteze și să se implementeze o clasă asociată numerelor complexe. Clasa va
conține supraîncărcarea operatorului de atribuire, a principalilor operatori aritmetici,
precum și a operatorului ~ pentru operația de calcul a modulului unui număr complex. De
asemenea, se va supraîncărca operatorul ^ pentru operația de ridicre a unui număr
complex la o putere întreagă. În plus, clasa trebuie să posede o funcție de afișare, precum
și constructori care să permită următoarea secvență:

* complex z1; // z1 = 0+0i
* complex z2(5); // z2 = 5+0i
* complex z3(2, 3); // z3 = 2+3i
* complex z4 = z2;

Functia de test va utiliza un tablou de numere complexe v = (z<sub>1</sub>, z<sub>2</sub>, ..., z<sub>2*n</sub>) pentru calculul expresiei:

z = (z<sub>1</sub><sup>3</sup> + z<sub>3</sub><sup>3</sup> + ... + z<sub>2*n-1</sub><sup>3</sup>) / (z<sub>2</sub><sup>4</sup> + z<sub>4</sub><sup>4</sup> + ... + z<sub>2n</sub><sup>4</sup>)
