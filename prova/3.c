#include <stdio.h>

#define MAX_LINHAS 100
#define MAX_COLUNAS 100

void lerValores(int tamanho, int vetor[]){
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
}

void printarVetor(int tam, int* vetor){
    for(int i = 0; i < tam; i++){
        printf("%d ", vetor[i]);
    }
}

int main(){
    int tamanhoVetor;
    scanf("%d", &tamanhoVetor);

    int vetor[tamanhoVetor];

    lerValores(tamanhoVetor, vetor);

    for(int i = 0; i < tamanhoVetor; i++){
        for(int j = 0; j < vetor[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}