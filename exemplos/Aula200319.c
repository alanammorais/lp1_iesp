#include <stdio.h>
//Aula 20/03/2019
void main(){
    //int valor = 1; // 1: true  e 0:false
    float num1, num2;
    float divisao;

    printf("Digite o primeiro elemento da divisao: ");
    scanf("%f", &num1);
    printf("Digite o segundo elemento da divisao: ");
    scanf("%f", &num2);

    if (num2 == 0){
        printf("Digite outro valor diferente de 0: ");
        scanf("%f", &num2);
    }

    divisao = num1/num2;
    printf("Divisão %.2f",divisao);

}
