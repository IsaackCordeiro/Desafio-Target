#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    float total;
    float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;

    total = sp+rj+mg+es+outros;
    
    printf("\n=================================================================\n");
    printf("\nTotal do faturamento mensal da distribuidora: R$ %.2f\n\n", total);
    printf("Percentual de representacao do estado de SP: %.2f%%\n", sp*100/total);
    printf("Percentual de representacao do estado de RJ: %.2f%%\n", rj*100/total);
    printf("Percentual de representacao do estado de MG: %.2f%%\n", mg*100/total);
    printf("Percentual de representacao do estado de ES: %.2f%%\n", es*100/total);
    printf("Percentual de representacao do restante dos estados: %.2f%%\n", outros*100/total);
    printf("\n=================================================================\n\n");

    return 0;
}