#include <stdio.h>
#include <locale.h>

 int main()  {
    setlocale(LC_ALL, "Portuguese");

    int i=0, j=0;

    printf("Laço Do .. While\n");
    
    do{ 
        j++;
        printf("%d \n", i);
        //i = i-1;
    }while (i);
    
    printf("Quantidade de rodadas: %d\n\n", j);
    
    
    i=0, j=0;
    printf("Laço While\n");
    
    while (i){ 
        j++;
        printf("%d \n", i);
        i = i-1;
    }
    
    printf("Quantidade de rodadas: %d", j);
    
    return 0;

 }