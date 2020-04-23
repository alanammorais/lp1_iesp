#include <stdio.h>
#include <locale.h>

float media(int qntN, float lista[]){ //Nao esquecam do colchetes qnd for um array
    float m = 0, soma = 0;
    int i;
    for (i=0;i<qntN;i++){
        soma = soma+lista[i];
    }
    m = soma/qntN;
    return m;
}

void imprimir(int qnt, float lista[]){
    printf("\nLista de Notas \n");
    
    int i;
    for (i=0;i<qnt;i++){
        printf("%.2f \n", lista[i]); //livro de memória
    }
}

void remover(int qnt, float lista[], float num){
    int i, posicao;
    for(i=0; i<qnt; i++){
        if (lista[i] == num){
            posicao = i;
        }
    }

    int j;
    for (j=posicao; j<qnt; j++){
        lista[j] = (j == qnt-1)? -1 :lista[j+1];
       /* 
        if (j == qntNotas-1)
            listaNotas[j] = -1;
        else
            listaNotas[j] = listaNotas[j+1];
        */
    }
}


int main()  {
    setlocale(LC_ALL, "Portuguese");

    int qntNotas;

    printf("Digite a quantidade de notas:");
    scanf("%d", &qntNotas);

    float listaNotas[qntNotas];
    int i = 0;
    for (;i<qntNotas;i++){
        printf("Digite a nota:");
        scanf("%f", &listaNotas[i]);
    }

    imprimir(qntNotas, listaNotas);
    
    printf("Média: %.2f\n",media(qntNotas, listaNotas)); //Nao precisa do colchetes
    
    //Pergunte ao usuário qual nota ele deseja remover
    remover(qntNotas, listaNotas, 5);
    qntNotas--;

    imprimir(qntNotas, listaNotas);

    return 0;
 }