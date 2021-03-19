#include <stdio.h>
#include <stdlib.h>

//3.
//    Entrada: tempo gasto, velocidade média
//    Saída: tempo gasto, velocidade média, distância e litros usados.

int main(){
    //DECLARAR VARIÁVEIS
    int tempo_gasto = 3;
    float velocidade = 100, distancia, litros;
    int kmLitro = 12; //12 km/l

    //CALCULOS
    distancia = tempo_gasto * velocidade;
    litros = distancia/kmLitro;

    //MOSTRAR P USUÁRIO
    printf("\n\tResumo de viagem\n\n");
    printf("Tempo Gasto: %d hora(s) \nVelocidade: %.2f km/h", tempo_gasto, velocidade);
    printf("\nDistância: %.2f km\nLitros Consumidos: %.2f l\n", distancia, litros);
    return 1;
}