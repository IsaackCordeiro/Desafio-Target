#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int anterior = 0, atual = 1, soma = 0, i, num, aux=0, stop;

    printf("Digite o numero que deseja: ");
    scanf("%d", &num);
    if(num<0){
        printf("Numero invalido.\n");
    }else if(num == 0){
        printf("\n===== Sequencia de Fibonacci =====\n\n");
        printf("%d %d ", anterior, atual);
        aux = 1;
    }else{
        printf("\n===== Sequencia de Fibonacci =====\n\n");
        printf("%d %d ", anterior, atual);
        for (i=2 ; stop != 2 ; i++){
            
            soma = anterior+atual;
            anterior = atual;
            atual = soma;

            if(atual > num){
                stop = 2;
            }

            if(num == atual){
                aux = 1;
                stop = 2;
            }

            printf("%d ", atual);
        }
    }

    if(aux == 1){
        printf("\n\nO numero %d pertence a sequencia!\n", num);
    }else{
        printf("\n\nO numero %d nao pertence a sequencia\n", num);
    }

    return 0;
}