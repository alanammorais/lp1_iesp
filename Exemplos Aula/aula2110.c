#include <stdio.h>
#include <string.h>
#include <locale.h>

float notas[100];
int posicao = 0;

void inicializa(float nota1, float nota2, float nota3){
    notas[0] = nota1;
    notas[1] = nota2;
    notas[2] = nota3;
    posicao = 3;
}

void addElemento(float novaNota){
    notas[posicao] = novaNota;
    posicao++;
}

void mostra(float *vetor, int tamanho){
    int i = 0;
    for (; i<tamanho; i++){
        printf("Elemento %d: %.2f\n", (i+1), vetor[i]);
    }
    printf("\n");
}

int main(){
    setlocale(LC_ALL , "Portuguese");
    float pontosExtras[] = {1,1,0};

    inicializa(10, 5, 5);
    mostra(notas, posicao);

    addElemento(7);
    mostra(notas, posicao);

    addElemento(1);
    addElemento(10);
    mostra(notas, posicao);
    mostra(pontosExtras, 3);

    return 0;

}