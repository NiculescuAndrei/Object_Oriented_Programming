# Aplicația 3
Să se realizeze o ierarhie de clase care să descrie habitatul animalelor dintr-o rezervaţie
naturală. În rezervaţie pot fi întâlnite următoarele animale: iepuri, urşi, căprioare, vulpi şi
lei. Unele dintre animale sunt ierbivore, alte carnivore sau chiar ierbivore şi carnivore.
Ierarhia de clase va avea clasa de bază CAnimal, clasă abstractă, din care se vor deriva
două clase : CAnimalIerbivor şi CAnimalCarnivor. Pentru fiecare tip de animal se va
proiecta o clasă corespunzătoare care va extinde una din clase de mai sus, sau ambele
clase, corespunzător modului de hranire a animalului.
Despre un animal se cunosc următoarele informaţii comune: nume, data aducerii,
greutate, hrana preferată, cantitate hrană pe zi. În plus despre iepure se cunoaşte suprafaţa
minimă pe care poate trăi; despre vulpe - temperatura maximă la care poate rezista, tipul
(polară, indigenă); despre leu - temperatura minimă suportată, ţara de provenienţă; despre
urs - perioada de hibernare; despre căprioară - numărul de pui. Pentru fiecare clasa se vor
implementa atât o funcţie de citire a datelor , cât şi o funcţie de scriere a acestora, funcţii
ce vor fi declarate ca funcţii pur virtuale în cadrul clasei de bază CAnimal. Să se
proiecteze o clasă CRezervatie care să conţină o mulţime de animale şi să se populeze
rezervaţia.
