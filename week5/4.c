#include <stdio.h>

void lerValores(int tamanho, int vetor[]){
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
}

void printarVetor(int tam, int* vetor){
    for(int i = 0; i < tam; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main(){
    int tamanho;
    scanf("%d", &tamanho);
    int vetor[tamanho];

    lerValores(tamanho, vetor);

    for(int j = 0; j < tamanho; j++){
        printarVetor(tamanho, vetor);
        for(int i = 1; i < tamanho; i++){
            if(vetor[i-1] > vetor[i]){
                int temp;
                temp = vetor[i-1];
                vetor[i-1] = vetor[i];
                vetor[i] = temp;
            }
        }
    }
    
    return 0;
}