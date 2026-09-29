// 4 - Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. Veja o que aconteceu.

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    printf("\n%f\n", x);
    return 0;
}

// Recebi um warning avisando que a função printf espera um double. Após compilar, o programa roda, porém não exibe o número que digitei.