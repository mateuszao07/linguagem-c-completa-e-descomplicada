/*
14 - Faça um programa que converta uma letra maiúscula em letra minúscula. Use a
tabela ASCII para isso.

*** Achei esse exercício interessante, observar a diferença na base decimal e poder realizar a operação de soma ou diferença para modificar o caractere exibido.
*/

#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    printf("%c", a+32);
    return 0;
}