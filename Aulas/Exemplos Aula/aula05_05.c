#include <stdio.h>

void zerar(float *a){
    *a = 0;
}

int main(){
    float f;
    f = 20.7;
    zerar(&f);
    printf("\n%.2f\n", f);

    return 0;
}