#include <stdio.h>

int main(){

    //declarar variaveis
    char opcao;
    int n1, n2, n3;

    //receber as informacoes usuario
    printf("Digite sua opcao (d: decrescente / c: crescente):");
    scanf("%c", &opcao);

    //receber as informacoes usuario
    printf("Digite valor 1:");
    scanf("%d", &n1);

    printf("Digite valor 2:");
    scanf("%d", &n2);

    printf("Digite valor 3:");
    scanf("%d", &n3);

    //verificar 
    switch(opcao){ 
        case 'c':    
        case 'C':
            printf("Ordem Crescente \n");

            if (n1 <= n2 && n2 <= n3){
                printf("A ordem crescente: %d %d %d\n", n1, n2, n3);
            } else if (n1 <= n3 && n3 <= n2){
                printf("A ordem crescente: %d %d %d\n", n1, n3, n2);
            } else if (n2 <= n1 && n1 <= n3){
                printf("A ordem crescente: %d %d %d\n", n2, n1, n3);
            } else if (n2 <= n3 && n3 <= n1){
                printf("A ordem crescente: %d %d %d\n", n2, n3, n1);
            } else if (n3 <= n1 && n1 <= n2){
                printf("A ordem crescente: %d %d %d\n", n3, n1, n2);
            } else /* n3 <= n2 && n2 < n1 */{
                printf("A ordem crescente: %d %d %d\n", n3, n2, n1);
            }
            break;
        case 'd':
        case 'D':
            printf("Ordem Decrescente \n");
            if (n1 <= n2 && n2 <= n3){
                printf("A ordem crescente: %d %d %d\n", n3, n2, n1);
            } else if (n1 <= n3 && n3 <= n2){
                printf("A ordem crescente: %d %d %d\n", n2, n3, n1);
            } else if (n2 <= n1 && n1 <= n3){
                printf("A ordem crescente: %d %d %d\n", n3, n1, n2);
            } else if (n2 <= n3 && n3 <= n1){
                printf("A ordem crescente: %d %d %d\n", n1, n3, n2);
            } else if (n3 <= n1 && n1 <= n2){
                printf("A ordem crescente: %d %d %d\n", n2, n1, n3);
            } else /* n3 <= n2 && n2 < n1 */{
                printf("A ordem crescente: %d %d %d\n", n1, n2, n3);
            }
            break;
        default:
            printf("Valor Invalidos \n");
    }
    return 0;
}