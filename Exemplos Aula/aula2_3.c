#include <stdlib.h>
#include <stdio.h>

int main(){
    float dividendo;
    float divisor;
    printf("Digite o dividendo: ");
    scanf("%f",&dividendo);

    printf("Digite o divisor: ");
    scanf("%f",&divisor);

    if(divisor == 0){
        printf("Denominador nao pode ser 0!!! \n");
        printf("Digite novamente o divisor: ");
        scanf("%f",&divisor);
    }

    printf("Valor da Divisao: %.2f \n", (dividendo/divisor));

    return 1;
}