#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL , "Portuguese");
    int arrayAleatorio[] = {10, 20, 65, 40, 50};
    int tamanho = 5;
    int valor;
    char a;

    printf("Qual valor deseja remover?");
    scanf("%d", &valor);

    int i, pos = -1;
    for (i=0; i<tamanho; i++){
        if (arrayAleatorio[i] == valor)
            pos = i;
    }

    if (pos > -1){
        for (i = pos; i<tamanho; i++){
            if (i != tamanho-1)
                arrayAleatorio[i] = arrayAleatorio[i+1];
            else
                arrayAleatorio[i] = -1;
        }
        tamanho--;
    }

    for (i=0; i<tamanho; i++)
        printf(" %d ", arrayAleatorio[i]);

    printf("\n");

    return 0;

}