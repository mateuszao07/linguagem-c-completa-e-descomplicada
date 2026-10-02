/*
07 - Faça um programa que leia um valor em reais e a cotação em dólar. Em seguida, imprima o valor correspondente
em dólares.
*/

#include <stdio.h>

int main()
{
    float reais, dolares;
    scanf("%f %f", &reais, &dolares);
    printf("\n$%f\n", reais*dolares);
    return 0;
} 
