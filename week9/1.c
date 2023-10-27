#include <stdio.h>
#include <string.h>

void imprime_relatorio(int fome, int sede, int banheiro, int sono, int tedio){
    printf("Status final:\n");
    printf("Fome: %d\n", fome);
    printf("Sede: %d\n", sede);
    printf("Banheiro: %d\n", banheiro);
    printf("Sono: %d\n", sono);
    printf("Tédio: %d\n", tedio);
}

int simula_sims(int *fome, int *sede, int *banheiro, int *sono, int *tedio){
    char acao[20];
    scanf(" %[^\n]", acao);

    if(strcmp(acao, "comer") == 0){
        *fome += 30;
        *banheiro -= 15;
        *sede -= 5;
        *sono -= 5;
        *tedio -= 5;
    }
    if (strcmp(acao, "beber") == 0){
        *sede += 30;
        *banheiro -= 20;
        *fome -= 5;
        *sono -= 5;
        *tedio -= 5;
    }
    if (strcmp(acao, "dormir") == 0){
        *sono += 80;
        *tedio += 30;
        *fome -= 30;
        *sede -= 30;
        *banheiro -= 30;
    }
    if (strcmp(acao, "se aliviar") == 0) {
        *banheiro = 100;
        *fome -= 5;
        *sede -= 5;
        *sono -= 5;
        *tedio -= 5;
    }
    if (strcmp(acao, "jogar videogame") == 0) {
        *tedio += 80;
        *sono -= 20;
        *fome -= 20;
        *sede -= 20;
        *banheiro -= 20;
    }

    *fome = (*fome > 100) ? 100 : *fome;
    *sede = (*sede > 100) ? 100 : *sede;
    *sono = (*sono > 100) ? 100 : *sono;
    *banheiro = (*banheiro > 100) ? 100 : *banheiro;
    *tedio = (*tedio > 100) ? 100 : *tedio;

    if(*fome <= 15){
        printf("Alerta: fome está com valor baixo\n");
        if(*fome <= 0){
            printf("Game Over! Morreu de fome\n");
            *fome = 0;
            return 0;
        }
    }
    if(*sede <= 15){
        printf("Alerta: sede está com valor baixo\n");
        if(*sede <= 0){
            printf("Game Over! Morreu de sede\n");
            *sede = 0;
            return 0;
        }
    }
    if(*sono <= 15){
        printf("Alerta: sono está com valor baixo\n");
        if(*sono <= 0){
            printf("Game Over! Morreu dormindo\n");
            *sono = 0;
            return 0;
        }
    }
    if(*banheiro <= 15){
        printf("Alerta: banheiro está com valor baixo\n");
        if(*banheiro <= 0){
            printf("Game Over! Morreu de apertado\n");
            *banheiro = 0;
            return 0;
        }
    }
    if(*tedio <= 15){
        printf("Alerta: tédio está com valor baixo\n");
        if(*tedio <= 0){
            printf("Game Over! Morreu de deprimido\n");
            *tedio = 0;
            return 0;
        }
    }
    //printf("----------------------------------------------\n");
    //imprime_relatorio(*fome, *sede, *banheiro, *sono, *tedio);
    //printf("----------------------------------------------\n");
    return 1;
}

int main(){
    int fome, sede, banheiro, sono, tedio;
    int acoes;

    scanf("%d %d %d %d %d", &fome, &sede, &banheiro, &sono, &tedio);
    scanf("%d", &acoes);

    for(int i = 0; i < acoes; i++){
        int ret = simula_sims(&fome, &sede, &banheiro, &sono, &tedio);
        if(ret == 0) break;
    }
    imprime_relatorio(fome, sede, banheiro, sono, tedio);
    return 0;
}