#include <stdio.h>

#define CONST_MILHAS 0.6214

int main(){

    float kilometros, milhas;
    kilometros = 100;

    milhas = kilometros * CONST_MILHAS;

    printf("\n A distancia de %.3f quilometros em milhas
         eh: %.3f milhas", kilometros, milhas);



    /*const int CONST_KELVIN = 273;
    float celsius = 100, kelvin;

    kelvin = celsius + CONST_K;

    printf("O valor de %.2f graus Celsius em Kelvin eh: %.0f graus", celsius,kelvin);
*/
    return 1;
}