/*
10 - A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
 i. O primeiro ganhador receberá 46% do total.
 ii. O segundo receberá 32% do total.
 iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/

#include <stdio.h>

int main()
{
    printf("%f %f %f", (780000 * 0.46), (780000*0.32), (780000*(1.0 - (0.46+0.32))));
    return 0;
}