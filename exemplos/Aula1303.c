#include <stdio.h>
#include <stdlib.h>

//#define PI 3.14
#define CKEL 273

//Aula 13/03
int main() {
	//const int CKEL = 273;
	float celsius, kelvin;
	
	printf("Digite a temperatura em Celsius:");
	scanf("%f",&celsius);
	
	kelvin = celsius + CKEL;
	printf("\nA temperatura em Kelvin eh: %.2f graus", kelvin);
	
	
	/*
	const float PI = 3.14;
	printf("Pi vale: %.2f", PI);
	PI = 10;
	*/
	

	/*
	int dia, mes, ano;
	
	printf("Digite o dia:");
	scanf("%d", &dia);
	
	printf("Digite o mes:");
	scanf("%d", &mes);
	
	printf("Digite o ano:");
	scanf("%d", &ano);
	
	printf("%d/ %d / %d",dia,mes,ano);
	
	double salario= 10000;
	int matricula= 22222;
	int telefone = 22222222;
	
	printf("Salario: %.2f \nMatricula: %d \nTelefone: %d", salario, matricula,telefone);
	*/
	
	return 0;
}
