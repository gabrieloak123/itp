#include <stdio.h>

void lerValores(int tamanho, int vetor[]){
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
}


int main(){
    int tamanho;

    scanf("%d", &tamanho);

    int vetor[tamanho-1];

    lerValores(tamanho, vetor);

    char legalOuChato = 1;

    for(int i = 0; i < tamanho -1; i++){
        if((vetor[i] - vetor[i+1]) % 2 == 1){
            legalOuChato = 0;
        }
    }
    if(legalOuChato == 1){
        printf("Legal");
    } else{
        printf("Chato");
    }
    return 0;
}