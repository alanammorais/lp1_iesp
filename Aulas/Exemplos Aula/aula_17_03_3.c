#include <stdlib.h>
#include <stdio.h>

int main(){
    /*
    int sucesso = 1; //0 falso - qlqr outro valor - verdadeiro

    if(sucesso){
        printf("Deu tudo certo\n\n");
    }else{
        printf("Opa ... tente outra vez!\n\n");
        printf("Acao para Else\n");
    }
    printf("Final Programa\n");
    */
    float operador1, operador2, resultado=2000000;
    char operacao;

    printf("Digite o valor do operador1:");
    scanf("%f", &operador1);

    printf("Digite o valor do operador2:");
    scanf("%f", &operador2);

    printf("Digite a operação - 1(+) 2(-) 3(/) 4(*):");
    scanf(" %c", &operacao);

    switch (operacao){
        case '1':
        case '+':
            resultado = operador1+operador2;
            break;
        case '2':
        case '-':
            resultado = operador1-operador2;
            break;
        case '3':
        case '/':
            resultado = operador1/operador2;
            break;
        case '4':
        case '*':
            resultado = operador1*operador2;
            break;
        default:
            printf("Operador inválido!\n");
    }

    if (resultado < 2000000)
        printf("O resultado da operação é: %.2f\n\n", resultado);


    return 1;
}