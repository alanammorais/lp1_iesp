#include <stdlib.h>
#include <stdio.h>

#define CONST 273
#define CONVERSAO 0.6214
/*
Implemente a fórmula de transformação de uma temperatura do formato Celsius para o formato Kelvin.
Imprima a temperatura em Kelvin na tela.
*/

int main(){
    int item1;
    int item2;
    printf("Digite a quantidade do item 1: ");
    scanf("%d",&item1);

    printf("Digite a quantidade do item 2: ");
    scanf("%d",&item2);

    printf("O cliente comprou %d itens.\n ", (item1+item2));

    /*
    float km, milhas;
    printf("Digite uma distancia em quilometros: ");
    scanf("%f",&km);

    milhas = km * CONVERSAO;

    printf("%.2f km equivale a %.2f milhas \n", km, milhas);
    */
    /*
    //const int CONST2 = 273;
    float tc = 20, tk;
    tk = tc + CONST;

    printf("A temperatura em Kelvin eh %.1f", tk);
    */


    return 1;
}