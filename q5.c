#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    char* vet;
    int i=0;

    vet = malloc(sizeof(char));

    printf("Digite alguma palavra: ");
    scanf("%s", vet);

    printf("Palavra normal: \n");
    while (vet[i] != '\0'){
        printf("%c", vet[i]);
        i++;
    }

    --i;
    
    printf("\nPalavra invertida: \n");
    while(vet[i]>0){
        printf("%c", vet[i]);
        if(i-1 == 0){
            printf("%c", vet[i-1]);
            --i;
        }
        
        i--;
    }
    
    free(vet);

    return 0;
}