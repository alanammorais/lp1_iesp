#include <stdio.h>
#include <stdlib.h>

float calcular_area(float b, float h);

int main() {
    //calcular a area de um retangulo
    float a = calcular_area(10, 4);
    printf("\n Area: %.2f \n\n", a);

    return 0;
}

float calcular_area(float b, float h){
    float area = (b*h)/2;
    return area;
}

void exemplo(){
    printf("Exemplo Texto");
}