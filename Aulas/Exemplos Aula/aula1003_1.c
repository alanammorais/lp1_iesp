#include <stdio.h>
#include <stdlib.h>

// 1.
//     ENTRADAS: horas trabalhadas, o valor da hora e o percentual de desconto
//     SAIDA: salario bruto, total descontos e salario liquido

int main(){
    // declarar e inicializar as entradas
    float valor = 55.00, hora = 10, percentual = 0.12;
    float salarioBruto, descontos, salarioLiquido;

    //Calculo
    salarioBruto = hora * valor;
    descontos = salarioBruto * percentual;
    salarioLiquido = salarioBruto - descontos;

    //mostrar os resultados
    printf("\n\nSalario Bruto: R$ %.2f\n", salarioBruto);
    printf("Descontos: R$ %.2f\n", descontos);
    printf("Salario Liquido: R$ %.2f\n", salarioLiquido);

    return 1;
}


