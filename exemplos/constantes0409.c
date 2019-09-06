#include <stdio.h>
#define TESTE2 20

int matricula;
float salario;
int telefone;

int main2(){
    const int TESTE = 2;
    matricula = 20192345;
    salario = 20000;
    telefone = 32334053;

    printf("%d - %d \n", TESTE, TESTE2);

    printf ("%d", matricula);
    printf ("\n%.2f", salario);
    printf ("\n%d", matricula);

    printf ("\n\n%d \n%.2f \n%d", matricula, salario, telefone);
    
    return 0;
}





