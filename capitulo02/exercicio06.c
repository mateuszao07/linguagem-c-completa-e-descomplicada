// 6 - Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.

#include <stdio.h>

int main()
{
    double x;
    scanf("%lf", &x);

    printf("\n%e\n", x);
    return 0;
}

// Tentei usar somente %f para ler através da função scanf, mas, o compilador dava um aviso. Pesquisando encontrei a solução que sugeria utilizar %lf para ler o double e o warning sumiu.