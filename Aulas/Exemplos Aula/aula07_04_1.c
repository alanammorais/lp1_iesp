#include <stdio.h>
#include <locale.h>

 int main()  {
    setlocale(LC_ALL, "Portuguese");

    int tentativas=0, senhaCorreta=1234;
    int senhaUsuario;

    printf("Alana's Bank\n");

    while (tentativas<3){
        printf("\nDigite a sua senha: ");
        scanf("%d", &senhaUsuario);
        tentativas++;

        if(senhaCorreta == senhaUsuario){
            printf("Você está logado!!!!\n");
            tentativas = 4;
        }else if(tentativas == 3){
            printf("Seu cartão foi bloqueado! Dirija-se a sua agência!\n");
        }else{
            printf("Senha Incorreta! Tente novamente!\n");
        }
    }

    return 0;

 }