#include <stdio.h>
#include <math.h>

int main(){
    /*
    int y, x =5;

    y = x++; //5
    printf("1- y: %d - x: %d \n", y, x);

    y = y + (++x); // y=5 x=7

    printf("2- y: %d - x: %d \n", y, x);
    // 12 -- 7
    */

    //for item in range(10): 
    //    print(item)
 
    /*int i;
    for (i = 0; i < 10; i++){
        printf("%d \n",i);
    }*/
        
    int a;

    printf("Digite o valor do a (<10):");
    scanf("%d", &a);

    printf("\n Loop FOR \n"); 
    for( ;a<=10;a=a+1){
          printf("%d %f %f\n",a,sqrt(a),pow(a,2));
    }
    printf("Fim\n");


    return 0;
}