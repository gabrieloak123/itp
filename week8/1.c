#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char *nome;
    int vitorias, empates, derrotas;
    int golsFeitos, golsSofridos;
} Time;

Time criarTime(char *linha){
    Time clube;
    char* substring;
    



    return clube;
}

void imprimirString(char linha[]){
    int i = 0;

    while(linha[i] != '\0'){
        printf("%c", linha[i]);
        i++;
    }
}

int main(){
    int qntTimes;
    char timeString[50];

    scanf("%d\n", &qntTimes);

    Time campeonato[qntTimes];

    for(int i = 0; i < qntTimes; i++){
        fgets(timeString, 50, stdin);
        imprimirString(timeString);
    }
    return 0;
}
