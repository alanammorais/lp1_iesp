#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Structs
typedef struct
{
    int idade;  //define o campo Idade
    char nome[30]; //define o campo Altura
} pessoa;

//Globais 
pessoa p[10];

//Funções


int main()  {
    //precarregar();
    setlocale(LC_ALL, "Portuguese");
    char teste[40];

    //variaveis locais
    pessoa p, p1; //esse é o meu struct
    p.idade = 20;
    strcpy(p.nome,"Alana Morais");

    p1.idade = 29;
    strcpy(p1.nome,"Marcelo Santos");

    //Vetor
    pessoa lista_p[10]; //vetor de 10 pessoas.
    lista_p[0].idade = 50;
    strcpy(lista_p[0].nome,"Alberto Morais");


    printf("Idade: %d \n", lista_p[0].idade);
    printf("Nome: %s \n", lista_p[0].nome);

    printf("Idade: %d \n", p.idade);
    printf("Nome: %s \n", p.nome);


    return 1;
}
