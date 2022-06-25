#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    int INDICE=13, SOMA=0, K=0;

    while(K<INDICE){
        K += 1;
        SOMA += K;

        printf("%d\n", SOMA);
    }

    return 0;
}