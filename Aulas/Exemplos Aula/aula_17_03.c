#include <stdlib.h>
#include <stdio.h>

int main(){
    int numero;
    float valor;
    printf("Digite o numero:");
    scanf("%d", &numero);

    printf("Digite o numero real:");
    scanf("%f", &valor);

    printf("Numero: %d\n", numero);
    printf("Numero: %.3f\n", valor);

    return 0;
}
