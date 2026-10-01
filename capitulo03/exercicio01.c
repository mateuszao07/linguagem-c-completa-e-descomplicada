/*
01 - Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
*/

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    printf("\n%d %d\n", x-1, x+1);
    return 0;
}