#include <stdio.h>

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

void juntarArrays(int v1, int v2, int* vetor1, int* vetor2, int* vetorResultante){
    int i, j;

    for(i = 0; i < v1; i++){
        vetorResultante[i] = vetor1[i];
    }
    for(j = 0; j < v2; j++){
        vetorResultante[i+j] = vetor2[j];
    }
}

void lerValores(int tamanho, int vetor[]){
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
}

void printarVetor(int tam, int* vetor){
    for(int i = 0; i < tam; i++){
        printf("%d ", vetor[i]);
    }
}

int verificarQuantidadeRepetidos(int tam, int* vetor){
    int elementosRepetidos = 0;

    for(int i = 0; i < tam; i++){
        for(int j = i+1; j < tam; j++){
            if(vetor[i] == vetor[j]){
                elementosRepetidos++;
            }
        }
    }
    return elementosRepetidos * 2;
}

void verificarElementosRepetidos(int tam, int* vetor, int* vetorRepetidos){
    int elementosRepetidos = verificarQuantidadeRepetidos(tam,vetor);

    int contadorIndice = 0;
    int elementoJaExisteNosRepetidos;

    for(int i = 0; i < tam; i++){
        for(int j = i+1; j < tam; j++){
            if(vetor[i] == vetor[j]){
                elementoJaExisteNosRepetidos = 0;
                for(int k = 0; k < contadorIndice; k++){
                    if(vetor[i] == vetorRepetidos[k]){
                        elementoJaExisteNosRepetidos = 1;
                    }
                }
                if(elementoJaExisteNosRepetidos == 0){
                    vetorRepetidos[contadorIndice]= vetor[i];
                    contadorIndice++;
                }
                
            }
        }
    }
}

int main(){
    int tam1, tam2;

    scanf("%d %d", &tam1, &tam2);
    
    int conjunto1[tam1];
    int conjunto2[tam2 ];
    int tamUniao = tam1 + tam2;
    int conjuntoUniao[tamUniao];

    lerValores(tam1,conjunto1);
    lerValores(tam2, conjunto2);

    juntarArrays(tam1,tam2,conjunto1,conjunto2,conjuntoUniao);

    orderArray(tamUniao,conjuntoUniao);

    int quantidadeRepetidos = verificarQuantidadeRepetidos(tamUniao, conjuntoUniao);
    int tamVetorRepetidos = quantidadeRepetidos / 2;
    int vetorRepetidos[tamVetorRepetidos];
    int diferencaSimetrica[tamUniao - quantidadeRepetidos];
    int diferencaSimetricaContador = 0;
    int elementoRepetido;

    verificarElementosRepetidos(tamUniao, conjuntoUniao, vetorRepetidos);

    for(int i = 0; i < tamUniao; i++){
        elementoRepetido = 0;
        for(int j = 0; j < tamVetorRepetidos; j++){
            if(conjuntoUniao[i] == vetorRepetidos[j]){
                elementoRepetido = 1;
            }
        }
        if(elementoRepetido == 0){
            diferencaSimetrica[diferencaSimetricaContador] = conjuntoUniao[i];
            diferencaSimetricaContador++;
        }
    }
    printarVetor(tamUniao - quantidadeRepetidos, diferencaSimetrica);
    return 0;
}