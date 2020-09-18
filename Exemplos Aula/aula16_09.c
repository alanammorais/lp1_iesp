#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valorDigitado;
    printf("Digite um valor entre 1-7: \n");
    scanf("%d", &valorDigitado);

    switch(valorDigitado){ 
        case 1:
                printf("Número Um! \n");
                break;
        case 2:
                printf("Número Dois! \n");
                break; 
        case 3:
                printf("Número Três! \n"); 
                break;
        case 4:
                printf("Número Quatro! \n"); 
                break;
        case 5:
                printf("Número Cinco! \n"); 
                break;
        case 6:
                printf("Número Seis! \n"); 
                break;
        case 7:
                printf("Número Sete! \n"); 
                break;
        default:
                printf("Valor Inválido \n");
    }

    printf("Fora do Switch");

/*
    float ladoa, ladob, ladoc;
    printf("Digite o valor do primeiro lado: \n");
    scanf("%f", &ladoa);

    printf("\nDigite o valor do segundo lado: \n");
    scanf("%f", &ladob);

    printf("\nDigite o valor do terceiro lado: \n");
    scanf("%f", &ladoc);


    if (((fabsf(ladob - ladoc)) < ladoa) && ((ladob + ladoc) > ladoa)){
        printf("\nIsto é um triangulo ! \n");
    }else{
        printf("\nIsto não é um triangulo !\n");
    }
*/
    return 0;
}

