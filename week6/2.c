#include <stdio.h>

#define LINHAS 3 // Defina o máximo de linhas
#define COLUNAS 3 // Defina o máximo de colunas

void preencherMatriz(char matriz[LINHAS][COLUNAS]){
    for(int i = 0; i < LINHAS; i++)
        for(int j = 0; j < COLUNAS; j++)
            scanf(" %c", &matriz[i][j]);
}

void printarMatriz(char matriz[LINHAS][COLUNAS]){
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

int verificaVencedor(char matriz[LINHAS][COLUNAS], char simbolo) {
    // Verifica linhas e colunas
    for(int i = 0; i < LINHAS; i++){
        if(matriz[i][0] == simbolo && matriz[i][1] == simbolo && matriz[i][2] == simbolo)
            return 1;
        if(matriz[0][i] == simbolo && matriz[1][i] == simbolo && matriz[2][i] == simbolo)
            return 1;
    }

    // Verifica diagonais
    if(matriz[0][0] == simbolo && matriz[1][1] == simbolo && matriz[2][2] == simbolo)
        return 1;
    if(matriz[0][2] == simbolo && matriz[1][1] == simbolo && matriz[2][0] == simbolo)
        return 1;

    return 0;
}

void verificarJogada(char matriz[LINHAS][COLUNAS], int linha, int coluna, char simbolo){
    if (matriz[linha][coluna] != '.') {
        printf("Jogada inválida!\n");
    } else {
        matriz[linha][coluna] = simbolo;

        if (verificaVencedor(matriz, simbolo)) {
            printf("Boa jogada, vai vencer!\n");
        } else {
            printf("Continua o jogo.\n");
        }

        matriz[linha][coluna] = '.'; // Desfaz a jogada para manter a matriz original
    }
}

int main(){
    char matriz[LINHAS][COLUNAS];

    preencherMatriz(matriz);
    
    int jogadas;
    scanf("%d", &jogadas);

    for (int i = 0; i < jogadas; i++) {
        int linha, coluna;
        char simbolo;

        scanf("%d %d %c", &linha, &coluna, &simbolo);
        linha--;
        coluna--;

        verificarJogada(matriz, linha, coluna, simbolo);
    }

    return 0;
}
