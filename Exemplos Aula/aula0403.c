 #include <stdio.h>
#include <stdlib.h>

int main()
{
    // Exemplo 1 - Scanf
    /*float nota1, nota2;

    printf("\nDigite a nota 1:");
    scanf("%f", &nota1);

    printf("\nDigite a nota 2:");
    scanf("%f", &nota2);

    printf("Nota 2: %.2f", nota2);
    */

    //If ... exemplo 1
    /*
    int numFaltas = 0;
    printf("\nDigite a quantidade a faltas:");
    scanf("%d", &numFaltas);

    // 0- falso 1-verdadeiro
    if(numFaltas>15){
        printf("Aluno reprovado por falta");
    }else if(numFaltas == 15){
        printf("Cuidado! Aluno quase reprovado");
    }else{
        printf("Aluno Aprovado");
    }
    */
    /*
    //If ... exemplo 2
    float dividendo, divisor, divisao;
    printf("\nDigite a dividendo:");
    scanf("%f", &dividendo);

    printf("\nDigite a divisor:");
    scanf("%f", &divisor);

    if(divisor == 0){
        printf("Nao digite 0!\nDigite a divisor:");
        scanf("%f", &divisor);
    }

    divisao = dividendo/divisor;
    printf("Valor da divisao eh: %.2f", divisao);
*/

   /*
    int opcao = 2; //1- positivo 2-negativo
    //int x;

    if (opcao == 1){
        x = 10;
    }else{
        x = -10;
    }

    int x = (opcao == 1) ? (10*x) : (-10/x);
    printf("%d", x);
*/
    //IF... ELSE
    float valor = 0.2;
    int qntCopias;
    float valorTotal = 0;

    printf("Digite a quantidade de copias:");
    scanf("%d", &qntCopias);

    /*if (qntCopias >= 100){
        valorTotal = 0.85 * (qntCopias*valor);
    }else{
        valorTotal = (qntCopias*valor);
    }*/

    valorTotal = (qntCopias >= 100) ? 0.85 * (qntCopias*valor) : (qntCopias*valor);

    printf("O valor total da conta eh RS %.2f",valorTotal);



 return 0;
}