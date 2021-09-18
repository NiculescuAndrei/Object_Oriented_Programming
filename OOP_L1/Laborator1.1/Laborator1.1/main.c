#define _CRT_SECURE_NO_WARNINGS
#include "polinom.h"
int main()
{
  
    polinom p1;
    printf("Introduceti gradul primului polinom: ");
    scanf("%d", &p1.grad);
    p1.coef = (int*)calloc(p1.grad + 1, sizeof(int));
    for (int i = p1.grad; i >= 0; i--)
    {
        printf("Introduceti coeficientul lui x^%d: ", i);
        scanf("%d", &p1.coef[i]);
    }

    polinom p2;
    printf("Introduceti gradul celui de-al doilea polinom: ");
    scanf("%d", &p2.grad);
    p2.coef = (int*)calloc(p2.grad + 1, sizeof(int));
    for (int i = p2.grad; i >= 0; i--)
    {
        printf("Introduceti coeficientul lui x^%d: ", i);
        scanf("%d", &p2.coef[i]);
    }

    cmmdc(p1, p2);
    return 0;
}

