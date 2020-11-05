#include <stdlib.h>
#include <stdio.h>

//Pessoa - idade, nome
typedef struct {
    int idade;
    char nome[300];
    double salario;
} pessoa;

int main(){
    pessoa listaPessoas[2]; //esse é o meu struct
    int i = 0;

    for (; i<2; i++){
        printf("Digite o nome:");
        scanf("%s", &listaPessoas[i].nome);

        printf("Digite a idade:");
        scanf("%d%*c", &listaPessoas[i].idade);

        printf("Digite o salario:");
        scanf("%lf", &listaPessoas[i].salario);
    }

    for (i=0; i<2; i++){
        printf("Nome: %s \n", listaPessoas[i].nome);
        printf("Idade: %d \n", listaPessoas[i].idade);
        printf("Salario: %lf \n", listaPessoas[i].salario);
        printf("Tamanho variável:%d\n", sizeof(listaPessoas[i]));
    }
    return 0;
}