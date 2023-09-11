#include <stdio.h>

int leiaMaior(int numeroInputs);
int categoriaVelocidade(int lesma);

int main(){

    int numeroInputs, lesma;

    scanf("%d", &numeroInputs);

    lesma = leiaMaior(numeroInputs);

    printf("Level %d", categoriaVelocidade(lesma));

    return 0;
}

int leiaMaior(int numeroInputs){
    int num, maior;
    maior = 0;

    for(int i = 0; i < numeroInputs; i++){
        scanf("%d", &num);

        if(num > maior){
            maior = num;
        }
    }

    return maior;
}

int categoriaVelocidade(int lesma){
    if(lesma < 10){
        return 1;
    }
    if(lesma >= 10 && lesma < 20){
        return 2;
    }
    if(lesma >= 20){
        return 3;
    }
}