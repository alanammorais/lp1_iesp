#include <stdio.h>
#include <locale.h>


int main()  {
    int ordem;

    printf("Qual a ordem da Matriz: ");
    scanf("%d",&ordem);

    int matrizIdentidade [ordem][ordem];

    int i, j;
    for (i = 0; i < ordem; i ++){
        for (j = 0; j < ordem; j++){
            //usem o ternário
            if (i == j)
                matrizIdentidade[i][j] = 1;
            else
                matrizIdentidade[i][j] = 0;
        }
    }

    for (i = 0; i < ordem; i ++){
        printf("\n");
        for (j = 0; j < ordem; j++){
            printf(" %d  ", matrizIdentidade[i][j]);
        }
    }



    /*
    int numeros[4][3];
    int i, j;
    for (i = 0; i < 4; i ++){
        for (j = 0; j < 3; j++){
            numeros[i][j] = i * j;
        }
    }

    for (i = 0; i < 4; i ++){
        printf("\n");
        for (j = 0; j < 3; j++){
            printf(" %d  ", numeros[i][j]);
        }
    }
    */
}