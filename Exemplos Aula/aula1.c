#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){

    //Declaracao e Inicializacao da minha variavel
    int a =10;
    char i = 103;
    int tamanho =  sizeof(a);

    a = 100 + a;

    //Impressao de Variaveis
    printf("A variavel 'a' vale: %d \nE precisa de %d bytes de armazenamento \n", a, tamanho);
    printf("Caracter: %c \n", i);
    printf("Nova Frase: %s", "Aula C");

    //teste
    // #

    /*
    Bloco
    */
    //printf("Olá Mundo \n");
    return 0;
}
