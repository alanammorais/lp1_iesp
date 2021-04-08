#include <stdio.h>
#include <string.h>

int main(){
    int i = 0, j=0;

    printf("\n\nWhile\n");
    while (i>0){
        printf("%d\n", i);
        i = i-1;
    }

    printf("\n\nDo ... While\n");
    do{
        printf("%d\n", j);
        j = j-1;
    } while (j>0);


    return 0;

}