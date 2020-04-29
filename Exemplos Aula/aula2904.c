#include <stdio.h>
#include <locale.h>
#include <string.h>

void imprimir(char nCompleto[]){
    printf("%s\n",nCompleto);
}

void imprimir2(char * nCompleto){
    printf("Imprimir 2 - %s\n",nCompleto);
}


int main()  {
    setlocale(LC_ALL, "Portuguese");

    char nome[100];
    int i;

    printf("Digite seu nome: ");
    
    //scanf("%s", nome); //Nao coloca o & só para strings
    gets(nome);

    imprimir(nome);
    imprimir2(nome);

    //puts(nome);

}