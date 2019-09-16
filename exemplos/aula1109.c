  #include <stdio.h>

  int main(){

      float dividendo, divisor;
      float quociente;

      //Receber as minhas variaveis
      printf("Digite o dividendo: ");
      scanf("%f", &dividendo);

      printf("Digite o divisor: ");
      scanf("%f", &divisor);

      //verificar o divisor
      if (divisor == 0){
        printf("Divisao por zero. Digite novamente: ");
        scanf("%f", &divisor);
      }

      //realizar a divisao
      quociente = dividendo/divisor;
      printf("Valor da divisao = %.2f \n", quociente);



      /*int numero;
      
      printf("Digite um número: ");
      scanf("%d",&numero);

      if (numero > 10){
        printf("\n Numero maior do que 10 \n");
        printf("Entrou no IF \n\n");
      }*/
      
      return 0;
  }