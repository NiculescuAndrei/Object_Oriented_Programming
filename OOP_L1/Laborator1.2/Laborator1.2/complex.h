#pragma once
#include <stdio.h>

typedef struct {
	float rl;
	float im;
}complex;

complex impartirea_numerelor_complexe(complex c1, complex c2);
complex adunarea_numerelor_complexe(complex c1, complex c2);
complex scaderea_numerelor_complexe(complex c1, complex c2);
complex inmultirea_numerelor_complexe(complex c1, complex c2);
void afisare(complex c);