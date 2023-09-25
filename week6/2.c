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

void verificarJogada(char matriz[LINHAS][COLUNAS]){
    int linha, coluna;
    char simbolo;
    char m[LINHAS][COLUNAS] = matriz;

    scanf("%d %d %c", &linha, &coluna, &simbolo);


}



int main(){
    int jogadas;
    char matriz[LINHAS][COLUNAS];

    preencherMatriz(matriz);
    
    scanf("%d", &jogadas);



    

    return 0;
}