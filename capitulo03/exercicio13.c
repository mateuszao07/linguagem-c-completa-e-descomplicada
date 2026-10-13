/*
13 - Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
h = raiz quadrada de (a ao quadrado) + (b ao quadrado)
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa
através da fórmula dada. Imprima o resultado. 
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%f", sqrt(((a*a) + (b*b))));
    return 0;
}