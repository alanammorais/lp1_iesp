#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

    char mensagem[100];
    FILE *arquivo;

    arquivo = fopen("exemplo.txt", "rb");

    if (arquivo == NULL){
        printf("Erro.\n");
        exit(1);
    }

    fread(&mensagem, sizeof(mensagem), 1,arquivo);
    printf("\n%s\n",mensagem);

    fclose(arquivo);
}

