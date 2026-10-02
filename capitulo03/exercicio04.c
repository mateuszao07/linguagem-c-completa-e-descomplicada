// 04 - Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.

#include <stdio.h>

int main()
{
    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    printf("%f", (a + b + c + d)/4);
    return 0;
}