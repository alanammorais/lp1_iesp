#include <stdio.h>
#include <locale.h>

//Variáveis Globais
float nota1, nota2, nota3;

void entradaNotas(){
    printf("Digite a nota 1:");
    scanf("%f",&nota1);

    printf("Digite a nota 2:");
    scanf("%f",&nota2);

    printf("Digite a nota 3:");
    scanf("%f",&nota3);
}

float media(){
    return (nota1+nota2+nota3)/3;
}

int main()  {
	setlocale(LC_ALL , "Portuguese");
    float mediaNotas;
    int i, j;

    printf("Digite a quantidade de aluno:");
    scanf("%d",&j);

    for (i= 0; i<j; i++){
        entradaNotas();
        mediaNotas = media();
        printf("Media das Notas: %.2f\n", mediaNotas);
    }

    return 0;
}