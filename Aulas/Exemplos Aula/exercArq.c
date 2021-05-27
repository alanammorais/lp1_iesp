#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 2

struct aluno{
    char nome[50];
    char endereco[100];
    char telefone[10];
} listaAlunos[TAM];

int main(){
    setlocale(LC_ALL, "Portuguese");

    char mensagem[200];
    FILE *arquivo;
    int i;

    for (i=0; i<TAM; i++){
        printf("\nDigite o nome do aluno:");
        scanf("%s", listaAlunos[i].nome);
        printf("Digite o telefone do aluno:");
        scanf("%s", listaAlunos[i].telefone);
        printf("Digite o endereco do aluno:");
        scanf("%s", listaAlunos[i].endereco);
    }

    //criacao do arquivo e salvamento
    arquivo = fopen("alunos2.txt", "rrrr");

    if (arquivo == NULL){
        printf("Erro.\n");
        exit(1);
    }

    i = 0;
    do{
        //Nome:  - Endereço:  - Telefone:
        strcpy(mensagem, "Nome: ");
        strcat(mensagem,listaAlunos[i].nome);
        strcat(mensagem,"- Endereço: ");
        strcat(mensagem,listaAlunos[i].endereco);
        strcat(mensagem,"- Telefone: ");
        strcat(mensagem,listaAlunos[i].telefone);
        strcat(mensagem, "\n");

        printf("Linha %d: %s",(i+1), mensagem);
        fputs(mensagem, arquivo);
        i++;
    }while (i<TAM);

    fclose(arquivo);

    return 1;
}

