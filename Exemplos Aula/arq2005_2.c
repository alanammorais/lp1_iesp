#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

    char mensagem[100];
    FILE *arquivo;

    printf("Digite a mensagem do arquivo:");
    gets(mensagem);

    arquivo = fopen("exemplo.txt", "a");

    if (arquivo == NULL){
        printf("Arquivo não existe.\n");
    }else{
        printf("Arquivo existe.\n");
        fprintf(arquivo, "Nome Aluno:%s \n", mensagem);
        fclose(arquivo);
    }
}

