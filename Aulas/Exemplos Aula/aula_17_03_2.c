#include <stdlib.h>
#include <stdio.h>

int main(){
    float dividendo, divisor;

    printf("Digite o valor do dividendo:");
    scanf("%f", &dividendo);

    printf("Digite o valor do divisor:");
    scanf("%f", &divisor);

    if(divisor == 0){
        printf("Não é possível dividir por zero\n Digite novamente o divisor:");
        scanf("%f", &divisor);
    }
    printf("Valor da divisão: %.2f\n\n", (dividendo/divisor) );

    return 0;
}
