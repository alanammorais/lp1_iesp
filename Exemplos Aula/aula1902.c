#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415
#define CONS_KELVIN 273

int main()
{
    int x = 1;
    printf("%d \n", (x++));
    printf("%d", x);
    /*
    float kelvin, celsius = 100;
    const int c_kelvin = 273;

    //kelvin = celsius + c_kelvin;
    kelvin = celsius + CONS_KELVIN;
    printf("\t\t Conversor de Temperaturas");
    printf("\n\nA temp. %.2f oC eh equivalente a %.2f Kelvin \n", celsius, kelvin);



    /*
    //matricula, salario e telefone
    const int MAT = 2000543;
    float salario = 23000;
    long telefone = 32349557;

    printf("%.2f \n", PI);
    //PI = 2;

    printf("Matricula %d \n", MAT);
    printf("Salario R$ %.2f \n", salario);
    printf("Telefone %ld \n\n", telefone);

    int media = 7;
    printf("A media do aluno eh: %s \n", "Alana");
    printf("Tamanho do armazenamento do double eh: %d", sizeof(double));
    */

    return 0;
}
