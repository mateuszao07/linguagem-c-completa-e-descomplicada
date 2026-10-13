/*
12 - Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
O volume de um cilindro circular é calculado por meio da seguinte fórmula:
V = π * raio2 * altura,
em que π = 3.141592
*/

#include <stdio.h>

int main()
{
    double altura, raio;
    scanf("%lf %lf", &altura, &raio);
    printf("%f", (3.141592 * (raio*raio) * altura));
    return 0;
}