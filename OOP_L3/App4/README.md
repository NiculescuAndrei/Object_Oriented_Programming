# Aplicația 4
Să se proiecteze și să se implementeze o clasă pentru standardul ISBN
(International Standard Book Number). Un obiect din această clasă este un 
număr ISBN unic asociat unei cărți sau reviste, format din 10 cifre
zecimale grupate în patru secvențe de dimensiune variabilă:
* grupul sau identificatorul de țară, pentru identificarea țării editurii
care a publicat cartea sau revista; în mod uzual toate editurile dintr-o anumită țară sau regiune geografică au același număr pentru
grup;
* identificatorul editurii, pentru identificarea editurii în cadrul
grupului de edituri;
* identificatorul de titlu, pentru identificarea titlului unei cărți sau
reviste editată de o editură;
* cifra de control, care este întotdeauna formată dintr-o singură cifră. \
Clasa va avea ca dată membru un șir de caractere
ce va reprezenta ISBN-ul, utilizând caracterul ‘-‘ pentru separarea celor
patru grupuri. Ea va trebui să conțină cel puțin următoarele funcții
membru:
* un constructor, în cazul specificării doar a primelor trei grupuri,
cifra de control fiind generată automat;
* un constructor, pentru cazul în care se specifică complet ISBN-ul,
ca șir de 13 caractere;
* o funcție membru pentru validarea cifrei de control;
* o funcție membru pentru afișarea ISBN-ului.
