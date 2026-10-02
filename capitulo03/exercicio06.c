/*
Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s.

Obs: Alterei K/36 para 3.6 para ficar correto, não sei se a fórmula apresentada no livro está correta...
*/

#include <stdio.h>

int main()
{
    float kmh;
    scanf("%f", &kmh);
    printf("%f", kmh/3.6);
    return 0;
}