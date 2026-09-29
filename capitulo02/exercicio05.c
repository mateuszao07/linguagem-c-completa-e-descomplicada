// 5 - Faça um programa que leia um valor do tipo float e depois o imprima usando o operador “%d”. Veja o que aconteceu.

#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);

    printf("\n%d\n");
    return 0;
}

// Recebi um warning avisando que a função printf espera um int. Após compilar, o programa roda, porém não exibe o número que digitei, mas, lixo de memória.