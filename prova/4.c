#include <stdio.h>

#define maxLINHAS 30
#define maxCOLUNAS 30

void orderArray(int tamanho, int vetor[]){
    int temp;
    for(int i = 0; i < tamanho; i++){
        for(int j = i+1; j < tamanho; j++){
            if(vetor[i] > vetor[j]){
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

void preencherMatriz(int n, int m, int matriz[maxLINHAS][maxCOLUNAS]){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf(" %d", &matriz[i][j]);
}

int main(){
    int numeroLinhas, numeroColunas, x;
    char ch;

    scanf("%d", &numeroLinhas);
    scanf("%d", &numeroColunas);

    int matriz[maxCOLUNAS][maxLINHAS];
    preencherMatriz(numeroLinhas,numeroColunas, matriz);

    scanf("%c", &ch);
    scanf("%d", &x);

    if(ch == 'l'){
        orderArray(numeroColunas, matriz[x]);
        printf("%d", matriz[x][numeroColunas-1]);
    }

    return 0;
}