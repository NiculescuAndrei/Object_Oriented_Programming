#pragma once
#include <stdio.h>
#include <malloc.h>
typedef struct {
    int grad;
    int* coef;
}polinom;
void cmmdc(polinom p1, polinom p2);