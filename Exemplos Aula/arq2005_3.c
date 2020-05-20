#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

    char mensagem[100];
    FILE *arquivo;

    arquivo = fopen("exemplo.txt", "a");

    if (arquivo == NULL){
        printf("Arquivo não existe.\n");
        exit(1);
    }/*else{
        printf("Arquivo existe.\n");
        fprintf(arquivo, "%s \n", mensagem);
        fclose(arquivo);
    }*/

    do{
        printf("Digite sua mensagem (ENTER 2x para sair): ");
        gets(mensagem);
        strcat(mensagem, "\n");
        fputs(mensagem,arquivo);
    }while (*mensagem != '\n');

    fclose(arquivo);

    return 1;
}

