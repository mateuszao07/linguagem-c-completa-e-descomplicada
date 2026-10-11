/*
11 - Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspon-
dente. A área do círculo é A = π * raio * raio, sendo π = 3.141592.
*/

#include <stdio.h>
int main()
{
    double raio;
    scanf("%lf", &raio);
    printf("%f", (3.141592 * (raio*raio)));
    return 0;
}