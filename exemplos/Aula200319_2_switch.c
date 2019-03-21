#include <stdio.h>
#include <stdlib.h>


void main(){

    int valor1, valor2, valor3;
    int maior = -100, menor = 100, intermediario;
    char opcao;

    printf("Deseja ver os valores de modo crescente (C) ou decrescente (D)? ");
    scanf("%c", &opcao);

    printf("Digite o primeiro valor ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor ");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor ");
    scanf("%d", &valor3);

    if (valor1 > valor2){
        if (valor2 > valor3){
            menor = valor1;
            intermediario = valor2;
            maior = valor3;
        } else{
            if (valor1> valor3){
                menor = valor1;
                intermediario = valor3;
                maior = valor2;
            }else{
                menor = valor3;
                intermediario = valor1;
                maior = valor2;
            }
        }
    }else if (valor2>valor3){
        if (valor1 > valor3){
            menor= valor2;
            intermediario = valor1;
            maior = valor3;
        } else{
            menor = valor2;
            intermediario= valor3;
            maior = valor1;
        }
    }else{
        menor = valor3;
        intermediario= valor2;
        maior= valor1;
    }

    switch(opcao){
        case 'C':
        case 'c':
            printf("%d - %d - %d", maior, intermediario, menor);
            break;
        case 'D':
        case 'd':
            printf("%d - %d - %d", menor, intermediario, maior);
            break;
    }

}
