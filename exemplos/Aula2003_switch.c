#include <stdio.h>
#include <stdlib.h>

void main(){

    char opcao = 's';
    printf("Digite a opção (S- Salvar, I- imprimir, A-Abrir): ");
    scanf("%c", &opcao);

    switch(opcao){
        case 'S':
            printf("Salvar exemplo \n");
            break;
        case 's':
            printf("Salvar exemplo \n");
            break;
        case 'i':
            printf("Imprimir exemplo \n");
            break;
        case 'a':
            printf("Abrir o documento \n");
            break;
        default:
            printf("Nenhuma das opcoes \n");
    }

}
