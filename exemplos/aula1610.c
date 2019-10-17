#include <stdio.h>
#include <locale.h>

float teste = 10;

float media(float n1, float n2, float n3);
float multiplica(double a, int b);


int main()  {
    
    //float nota1, nota2, nota3;
    //float resultado; 

	setlocale(LC_ALL, "Portuguese");
    /*printf("%.2f",multiplica(10.2,2));

    if (multiplica(10.2,2) == 20.40){
        printf("\nValores iguais");
    }*/

    printf("\nMédia 1: %.2f", media(10, 10, 10));
    printf("\nMédia 2: %.2f", media(4, 10, 8));
    printf("\nMédia 3: %.2f", media(5, 10, 10));
    //media(10, 10, 10);
    return 0;
}


float media(float n1, float n2, float n3){
    float resultado = (n1+n2+n3)/3;
    //printf("%f", resultado);
    return (n1+n2+n3)/3;
}

float multiplica(double a, int b) {
    return (a*b)+teste;
}