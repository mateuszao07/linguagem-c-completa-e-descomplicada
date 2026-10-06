/*
09 - Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
conversão é R = G ∗ π/180, sendo G o ângulo em graus e R em radianos e π =
3.141592.
*/

#include <stdio.h>

int main()
{
    float graus;
    scanf("%f", &graus);
    printf("\n%f\n", graus * 3.141592/180);
    return 0;
}