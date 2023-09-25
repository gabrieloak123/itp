#include <stdio.h>
#define MAX_LINHAS 100
#define MAX_COLUNAS 100

void gerarPiramide(int largura, int piramide[MAX_LINHAS][MAX_COLUNAS]) {
    int nivel;

    for (int i = 0; i < largura; i++) {
        for (int j = 0; j < largura; j++) {
            nivel = i < j ? i : j;
            nivel = nivel < largura - i ? nivel : largura - i - 1;
            nivel = nivel < largura - j - 1 ? nivel : largura - j - 1;
            piramide[i][j] = nivel + 1;
        }
    }
}

void printarPiramide(int largura, int piramide[MAX_LINHAS][MAX_COLUNAS]) {
    for (int i = 0; i < largura; i++) {
        for (int j = 0; j < largura; j++) {
            printf("%d ", piramide[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tamanho;
    scanf("%d", &tamanho);

    int piramide[MAX_LINHAS][MAX_COLUNAS];
    gerarPiramide(tamanho, piramide);
    printarPiramide(tamanho, piramide);

    return 0;
}