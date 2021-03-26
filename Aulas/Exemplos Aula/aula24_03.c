#include <stdio.h>

int main(){
    int y, x = 1;
        //2 + 3
    y = ++x + ++x;
    printf("Y: %d\n", y);

    printf("++X: %d\n", x);
    printf("X: %d\n", x);

    return 0;

}

