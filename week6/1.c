#include <stdio.h>

#define MAX_LINHAS 100
#define MAX_COLUNAS 100

void preencherMatriz(int n, int m, char matriz[MAX_LINHAS][MAX_COLUNAS]){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf(" %c", &matriz[i][j]);
}

void printarMatriz(int n, int m, char matriz[MAX_LINHAS][MAX_COLUNAS]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int linhas, colunas;
    int contAgua, contVeget, contDeserto, contEspHostil, contSemRec = 0;

    scanf("%d %d", &linhas, &colunas);
    
    char matriz[MAX_LINHAS][MAX_COLUNAS];
    int totalSlots = linhas*colunas;

    preencherMatriz(linhas,colunas, matriz);

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            switch (matriz[i][j]){
            case '~':
                contAgua++;
                break;
            case 'X':
                contEspHostil++;
                break;
            case '^':
                contDeserto++;
                break;
            case '*':
                contVeget++;
                break;
            case '.':
                contSemRec++;
                break;
            default:
                break;
            }
        }
    }

    if(contAgua >= totalSlots * 0.5 & contVeget >= totalSlots * 0.2 & contEspHostil == 0){
        printf("Planeta Classe M");
    }
    else if(contEspHostil >= 1){
        printf("Planeta Hostil");
    }
    else if(contAgua >= totalSlots * 0.85){
        printf("Planeta Aquático");
    }
    else if(contDeserto >= totalSlots * 0.6){
        printf("Planeta Desértico");
    }
    else if(contVeget >= totalSlots * 0.65){
        printf("Planeta Selvagem");
    }
    else {
        printf("Planeta Inóspito");
    }

    return 0;
}