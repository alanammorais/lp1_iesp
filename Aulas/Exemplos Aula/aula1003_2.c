#include <stdio.h>
#include <stdlib.h>

#define VALOR_CONVERSAO 0.62

//2.
//     ENTRADAS: distância em km
//     SAÍDAS: distância em milhas

float km = 10;
const float CONVERSAO_VALOR = 0.62;

int main(){
    float milhas;

    //milhas = km * VALOR_CONVERSAO;
    milhas = km * CONVERSAO_VALOR;

    //VALOR_CONVERSAO = 2; //Não pode fazer atribuicoes em constantes
    //CONVERSAO_VALOR = 2; //Não pode fazer atribuicoes em constantes

    printf("\n\nO valor de %.3f km em milhas é: %.3f milhas\n", km, milhas);

    return 1;
}
