#include <stdio.h>

void lerValores(int tamanho, float* vetor){
    int descartar1;
    char descartar2;
    for(int i = 0; i < tamanho; i++){
        scanf("%d %c %f", &descartar1, &descartar2, &vetor[i]);
    }
}

void printarVetor(int tam, float* vetor){
    printf("\n");
    for(int i = 0; i < tam; i++){
        printf("%.lf ", vetor[i]);
    }
}

void aprovados(int tamanho, float* vetor){
    int primeiro = 1;

    printf("Aprovados: ");

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] >= 7.0){
            if(primeiro){
                primeiro = 0;
            } else{
                printf(",");
            }
            printf("%d (%.1f)", i+1, vetor[i]);
        }
    }
}

void recuperacao(int tamanho, float* vetor){
    int primeiro = 1;

    printf("\nRecuperação: ");

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] < 7.0 & vetor[i] >= 5.0){
            if(primeiro){
                primeiro = 0;
            } else{
                printf(",");
            }
            printf("%d (%.1f)", i+1, vetor[i]);
        }
    }
}

void reprovados(int tamanho, float* vetor){
    int primeiro = 1;

    printf("\nReprovados: ");

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] < 5.0){
            if(primeiro){
                primeiro = 0;
            } else{
                printf(",");
            }
            printf("%d (%.1f)", i+1, vetor[i]);
        }
    }
}


int main(){
    int tamanho;

    scanf("%d", &tamanho);

    float vetor[tamanho];

    lerValores(tamanho, vetor);

    aprovados(tamanho, vetor);
    recuperacao(tamanho, vetor);
    reprovados(tamanho, vetor);

    return 0;
}