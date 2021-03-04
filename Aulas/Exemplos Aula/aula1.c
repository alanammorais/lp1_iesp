#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
    double variavel;
    float i = 1.4f;
    int j = 10;
    int tam;

    printf("\n Ola Mundo\n");
    printf("\n %s\n", "Ola Mundo");
    printf("O valor de i é: %f e de j é: %d \n", i, j);

    tam = sizeof(double);
    printf("O tamanho de um dado tipo float é: %d \n\n", tam);
    return 0;
}
