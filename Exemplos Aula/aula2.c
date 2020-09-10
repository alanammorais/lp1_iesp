#include <stdio.h>
#include <stdlib.h>

// #define AUMENTO 100

const int AUMENTO = 100;

int main(){    
    //Declaracao e Inicializacao da minha variavel
    float salario = 100000;
    salario = salario + AUMENTO;
    
    printf("Novo Salario: R$ %.2f \n", salario);

    return 0;
}
