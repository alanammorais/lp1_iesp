#include <stdio.h>
#include <locale.h>

//CONSTANTES
//Global
int valorGlobal = 0;

int dobro(int valor);
void mostrarDobro(int valor2);
char abreviacao(int cod);

int main()  {
	setlocale(LC_ALL , "Portuguese");
    int bolinha = 10;
    int j = dobro(bolinha); //Argumento
    //printf("%d\n\n",j);

    printf("Dobro: %d\n\n",dobro(25));
    printf("Valor Global: %d\n\n",valorGlobal);

    printf("Sexo: %c\n\n",abreviacao(10));

    mostrarDobro(30);

    return 0;
}

int dobro(int valor){ //Parametro
    valorGlobal = valor;
    return valor*2;
}

void mostrarDobro(int valor2){
    printf("%d\n", valor2*2);
}

char abreviacao(int cod){
    if (cod == 1)
        return 'f';
    else if (cod == 2)
        return 'm';
    else
        return '-';
    printf("Linha");
}