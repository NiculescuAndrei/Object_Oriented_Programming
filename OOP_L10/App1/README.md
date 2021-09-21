# Aplicația 1
Să se proiecteze ansamblul de clase pentru jocul pe calculator Labirint. Labirintul are o intrare,
o ieşire şi este compus dintr-un număr de pătrate (locaţii). În interiorul labirintului, în afară de jucător se află şi alte elemente:
oponenţi (duşmani) care îl pot prinde pe jucător (sau îi pot scădea puterile), una sau mai multe
comori (de diferite valori) pe care jucătorul poate să le ia. Un joc începe prin intrarea jucătorului în labirint şi se termină când acesta iese din labirint,
când este blocat de duşmani, sau când nu mai are puteri. Punctajul jocului este dat de suma
valorilor comorilor adunate.
Labirintul este un tablou bidimensional ce conţine pătrate, fiecare pătrat putând să conțină o comoară, un dușman sau ambele. Labirintul este generat prin
intermediul unui algoritm DFS, astfel încât la fiecare rulare a jocului să se obțină o structură diferită a labirintului. De asemenea, monștrii și comorile sunt plasate în
mod aleatoriu. Prezența unui monstru într-o locație din labirint este reprezentată prin litera M, comoara prin T, iar în cazul în care se află atât o comoară cât și un monstru într-o cameră, acest lucru este semnalat prin litera B.
