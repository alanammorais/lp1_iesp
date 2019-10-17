#include <stdio.h>
#include <locale.h>

//funcao area do circulo
float areaCirculo(float raio){
    const float PI = 3.14;
    return (raio*raio*PI);
}

int main()  {
    float r;
	setlocale(LC_ALL, "Portuguese");

    printf("Digite o raio da circunferência:");
    scanf("%f", &r);

    printf("\nO valor do raio é: %.2f \n", areaCirculo(r));
    return 0;
}