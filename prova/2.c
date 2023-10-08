#include <stdio.h>

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

int somarVetor(int tamanho, int* vetor){
    int soma = 0;

    for(int i = 0; i < tamanho; i++){
        soma += vetor[i];
    }
    return soma;
}

int verificarQntDivisores(int numero){
    int qntDivisores = 0;

    for(int i = 1; i < numero; i++){
        if(numero % i == 0){
            qntDivisores++;
        }
    }
    return qntDivisores;
}

int* verificarDivisores(int numero, int* vetorDivisores){
    int qntDivisores = verificarQntDivisores(numero);
    qntDivisores = 0;

    for(int i = 1; i < numero; i++){
        if(numero % i == 0){
            vetorDivisores[qntDivisores] = i;
            qntDivisores++;
        }
    }

    return vetorDivisores;
}

int verificarPerfeito(int elemento){
    int tamanhoVetorNumero = verificarQntDivisores(elemento);
    int vetorDivisores[tamanhoVetorNumero];
    verificarDivisores(elemento, vetorDivisores);
    int somaVetor = somarVetor(tamanhoVetorNumero, vetorDivisores);


    if(somaVetor == elemento){
        printf("%d eh perfeito\n", elemento);
    } else{
        printf("%d nao eh perfeito\n", elemento);
    }
    return 0;
}

int main (){
    int tamanhoVetor;

    scanf("%d", &tamanhoVetor);

    int vetor[tamanhoVetor];
    lerValores(tamanhoVetor, vetor);

    for(int i = 0; i < tamanhoVetor; i++){
        verificarPerfeito(vetor[i]);
    }

    return 0;
}