#include<stdio.h>

int main(){

    int perimetro;

    int ladoA, ladoB, ladoC;

    printf("digiti o tamanho do lado (A): ");
    scanf("%i", &ladoA); // scanf funçao responsável por recebe os dados digitado pelo usuario e salvar em uma variavel

    printf("digiti o tamanho do lado (B): ");
    scanf("%i", &ladoB); // scanf funçao responsável por recebe os dados digitado pelo usuario e salvar em uma variavel

    printf("digiti o tamanho do lado (C): ");
    scanf("%i", &ladoC); // scanf funçao responsável por recebe os dados digitado pelo usuario e salvar em uma variavel

    //CALCULO DO PERIMETRO;
    perimetro = ladoA+ladoB+ladoC;

    printf("O calculo do perimetro é igual :%i", perimetro);


    return 0;

}






