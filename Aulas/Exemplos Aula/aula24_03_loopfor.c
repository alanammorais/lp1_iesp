#include <stdio.h>
#include <math.h>

int main(){
    int i, a; //Declaração de variável
    printf("Loop FOR \n");

    printf("Digite o valor inicial de a (até 10):");
    scanf("%d", &a);

    for( ; a<=10; a++){ // a++ ++a
        printf("%d %f %f\n", a, sqrt(a), pow(a,2));
    }
    printf("Valor de a: %d\n", a);
    printf("Fim\n");
    return 1;
}