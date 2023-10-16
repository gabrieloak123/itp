#include <stdio.h>

typedef struct {
    char nome[20];
    int marcados, sofridos;
} Time;

void orderArray(int tamanho, Time vetor[]){
    Time temp;
    for(int i = 0; i < tamanho; i++){
        for(int j = i+1; j < tamanho; j++){
            if(vetor[i].marcados < vetor[j].marcados){
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

void lerValores(int tamanho, Time vetor[]){
    for(int i = 0; i < tamanho; i++){
        scanf(" %[^\n]", vetor[i].nome);
        scanf("%d", &vetor[i].marcados);
        scanf("%d", &vetor[i].sofridos);
    }
}

void printValores(int tamanho, Time vetor[]){
    for(int i = 0; i < tamanho; i++){
        printf("%d - %s\n", i+1, vetor[i].nome);
        printf("Gols marcados: %d\n", vetor[i].marcados);
        printf("Gols sofridos: %d\n", vetor[i].sofridos);
    }
}

int main(){
    int qntTimes;

    scanf("%d", &qntTimes);

    Time listaTimes[qntTimes];

    lerValores(qntTimes, listaTimes);
    orderArray(qntTimes, listaTimes);
    printValores(qntTimes, listaTimes);
    
    return 0;
}