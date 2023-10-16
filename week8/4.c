#include <stdio.h>
#include <string.h>

typedef struct {
    char modelo[50];
    int memoria;
    float processador, camera, bateria;
} Smartphone;

void imprimirString(char linha[]){
    int i = 0;

    while(linha[i] != '\0'){
        printf("%c", linha[i]);
        i++;
    }
}

void cadastraSmartphone(int i, Smartphone vetor[]) {
    getchar(); // Limpa o buffer do teclado
    scanf(" %[^\n]", vetor[i].modelo);
    vetor[i].modelo[strcspn(vetor[i].modelo, "\n")] = 0;
    scanf("%d", &vetor[i].memoria);
    scanf("%f", &vetor[i].processador);
    scanf("%f", &vetor[i].camera);
    scanf("%f", &vetor[i].bateria);
}

void printValores(int tamanho, Smartphone vetor[]) {
    for (int i = 0; i < tamanho; i++) {
        printf("Modelo: %s\n", vetor[i].modelo);
        printf("Memoria: %dGB\n", vetor[i].memoria);
        printf("Processador: %.2fGhz\n", vetor[i].processador);
        printf("Camera: %.2fMPixels\n", vetor[i].camera);
        printf("Bateria: %.2fmA\n\n", vetor[i].bateria);
    }
}

void pesquisaSmartphone(int tam, Smartphone vetor[], int mem, float process, float cam, float bat) {
    int count = 0;
    Smartphone selecionados[tam];

    for (int i = 0; i < tam; i++) {
        if (vetor[i].memoria >= mem &&
            vetor[i].processador >= process &&
            vetor[i].camera >= cam &&
            vetor[i].bateria >= bat) {
            selecionados[count] = vetor[i];
            count++;
        }
    }
    printValores(count, selecionados);

    printf("%d smartphones encontrados.", count);
}

int main() {
    char continuar = 's';  // Corrigi a inicialização da variável 'continuar'
    int i = 0;
    Smartphone lista[100];
    
    while (continuar != 'n') {
        cadastraSmartphone(i, lista);
        i++;
        scanf(" %c", &continuar);
    }
    
    int mem;
    float process, cam, bat;

    scanf("%d %f %f %f", &mem, &process, &cam, &bat);

    pesquisaSmartphone(i, lista, mem, process, cam, bat);

    return 0;
}
