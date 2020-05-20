#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

    FILE *arquivo;
    char variavel[50];

    printf("Digite o nome do arquivo:");
    gets(variavel);

    
    arquivo = fopen(variavel, "w");

    if (arquivo == NULL){
        printf("Arquivo não existe.\n");
    }else{
        printf("Arquivo existe.\n");
        fclose(arquivo);
    }



}