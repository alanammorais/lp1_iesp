#include <stdio.h>
#include <string.h>

int main(){
    int valor, i = 0;

    printf("Digite o valor da tabuada desejada:");
    scanf("%d", &valor);

    printf("Tabuada do %d\n", valor);
    do{
        printf("\t%d * %d = %d\n", valor, i, (valor*i));
        i = i+1;
    } while (i<=10);

    return 0;

}