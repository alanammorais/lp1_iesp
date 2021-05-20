#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char rua[30];
    int numero;
    char bairro[10];
    char cidade[15];
} endereco;

typedef struct{
        int dia;
        int mes;
        int ano;
}dataNascimento;

typedef struct{
    int idade; // define o campo Idade
    char nome[30]; // define o campo Altura
    dataNascimento data;
    endereco end;
} pessoa;

int main(){
    //pessoa p1;
    pessoa listaPessoas[3]; //int idade[3];
    int i;

    for (i = 0; i<3; i++){
        printf("\nDigite o nome da pessoa:");
        scanf("%s", listaPessoas[i].nome);
        printf("\nDigite a idade da pessoa:");
        scanf("%d", &listaPessoas[i].idade);
        listaPessoas[i].data.ano = 1999;
        listaPessoas[i].data.mes = 8;
        listaPessoas[i].data.dia = 20;

        strcpy(listaPessoas[i].end.rua, "João Machado");
        listaPessoas[i].end.numero = 234;
        strcpy(listaPessoas[i].end.bairro, "Centro");
        strcpy(listaPessoas[i].end.cidade, "Joao Pessoa");
    }
    //listaPessoas[0].idade = 18;
    //strcpy(listaPessoas[0].nome, "Aline");

    printf("\nLista Pessoas\n");
    for (i = 0; i<3; i++){
        printf(
            "%s tem %d anos - %d/%d/%d - End: %s, %d - %s-%s\n",
            listaPessoas[i].nome,
            listaPessoas[i].idade,
            listaPessoas[i].data.dia,
            listaPessoas[i].data.mes,
            listaPessoas[i].data.ano,
            listaPessoas[i].end.rua,
            listaPessoas[i].end.numero,
            listaPessoas[i].end.bairro,
            listaPessoas[i].end.cidade);
    }
    return 0;
}