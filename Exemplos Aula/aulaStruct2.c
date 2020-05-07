#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Structs
typedef struct 
{
   int matricula;
   char nome[50];
}professor;

//Variaveis Globais
//#define TAMANHO = 5;
const int tamanhoListaP = 5;
professor listaProfessores[tamanhoListaP];
//int posProf = 0;

//Funcao
void imprimir(){
    int i;
    for (i =0; i<tamanhoListaP; i++){
        printf("\nProfessor %d: %d - %s", (i+1), listaProfessores[i].matricula, listaProfessores[i].nome);
    }
    printf("\n");
}

//Main
int main(){

    int j;
    //listaProfessores[posProf].matricula =1111;
    //posProf++;

    for (j=0; j<tamanhoListaP; j++){
        printf("Digite a matricula do professor: ");
        scanf("%d", &listaProfessores[j].matricula);
        
        printf("Digite o nome do professor: ");
        scanf("%s", listaProfessores[j].nome);
    }

    imprimir();
    return 1;
}