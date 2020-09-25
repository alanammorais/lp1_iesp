#include <stdio.h>
#include <math.h>

int main(){
    //FOR
    int m, i, j;
    printf("Digite a valor de m:");
    scanf("%d", &m);

   //1 *
   //2 * *
   //3 * * *

    for(i=1; i<=m; i++){
        for (j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }





    /*
    //code
    printf("Loop FOR \n"); 
    
    int a;

    printf("Digite um valor entre 1 e 10:");
    scanf("%d", &a);

    for(; a<=10; a=a+1){
        printf("%d %.2f %.2f\n", a, sqrt(a), pow(a,2)); 
    }
    
    printf("Fim\n");

    */

    /* //Exemplo Switch
    int num;
    char letra;
    printf("Digite a letra:");
    scanf("%c", &letra);

    switch (letra){
        case '1':
            printf("\nNumero Um\n\n");
            break;
        case '2':
            printf("\nNumero Dois\n\n");
            break;

        default:
            printf("\nNao entendi\n\n");
            break;
    }

    printf("Fim do Switch\n");*/
    return 0;
}