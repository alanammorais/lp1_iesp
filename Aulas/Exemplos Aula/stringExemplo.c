#include <stdio.h>
#include <string.h>

int main(){
    /*
    char palavra[] = "Aula C";
    char palavra2[15];

    strcpy(palavra2, "Alana"); //palavra = "Alana";
    printf("tamanho: %d\n", strlen(palavra2));
    //palavra2 = palavra;


    if (palavra2[0] == palavra[0])
        printf("palavras iguais\n");
    else
        printf("palavras diferentes\n");
    */
    char nome[10];
    printf("Digite uma palavra: ");
    scanf("%s", nome); //

    int i;
    for (i=(strlen(nome)-1); i>-1; i--){
        printf("- %c -", nome[i]); //
    }


    /*

    char matricula[10];
    int senha;

    printf("\t===== Sistema da Biblioteca =====\n\n");
    printf("Digite sua matricula:");
    scanf("%s", &matricula);
    //strcpy(matricula,"prof1433");

    printf("Digite sua senha:");
    scanf("%d", &senha);

    //printf("Matricula: %s \n\n",matricula);

    if((strcmp(matricula,"prof1433") == 0) && (senha == 12345))
        printf("Usuario logado.\n\n\n");
    else
        printf("Cadastre-se! Usuario nao encontrado.\n\n\n");


    printf("Tamanho da String eh: %d \n", strlen(matricula));

    int i;
    for (i=0; i<strlen(matricula); i++){
        printf("- %c -", matricula[i]);
    }


    char nome[10];
    printf("Digite uma palavra: ");
    scanf("%s", &nome);

    int i;
    for (i=(strlen(nome)-1); i>-1; i--){
        printf("- %c -", nome[i]);
    }
    */
   return 0;
}
