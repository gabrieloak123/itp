#include <stdio.h>
int main (){
    int linha, coluna, s;
    int linhaf = 0;
    int colunaf = 0;
    int num, indice;
    int soma = 0;
    int somafinal = 10000000;
    scanf("%d", &linha);
    scanf("%d", &coluna);
    scanf("%d", &s);
    int mat[linha][coluna];
    for (int i = 0; i < linha; i ++){
        for (int j = 0; j < coluna; j ++){
            scanf("%d", &num);
            mat[i][j] = num;
    }
    }
    for (int i = 0; i < linha; i ++){
        for (int j = 0; j < coluna; j ++){
            if ((j+2 <= coluna-1) && (i +2 <= linha-1)){
                soma = mat[i][j] + mat[i + 1][j] +mat[i+2][j] +mat[i][j+1] +mat[i+1][j+1] +mat[i+2][j+1] +mat[i][j+2] +mat[i+1][j+2] +mat[i+2][j+2];
                if (soma >= s){
                    if ((soma-s) < (somafinal - s)){
                    somafinal = soma;
                    indice = somafinal - s;
                    linhaf = i+1;
                    colunaf = j+1;
                }
                }
                if (soma < s){
                    if ((s - soma) < (somafinal - s)){
                    somafinal = soma;
                    indice = s - somafinal;
                    linhaf = i+1;
                    colunaf = j+1;
                }
                }
            }
    }
    }
    if (linhaf == 0 || colunaf == 0){
        printf("Não existe area de exploração");
    }
    else{
        printf("A melhor area de exploracao é %d %d o indice é %d", linhaf, colunaf, indice);
    }
    return 0;
}