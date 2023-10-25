#include <stdio.h>

int main(){
    int sim[5];

    int *fome = &sim[0];
    int *sede = &sim[1];
    int *banheiro = &sim[2];
    int *sono = &sim[3];
    int *tedio = &sim[4];

    for(int i = 0; i < 5; i++){
        scanf("%d", &sim[i]);
    }

    
    return 0;
}