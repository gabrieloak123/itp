#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char item[20];
    float preco;
    float quantidade;
} Churras;

void cadastrarItem(int i, Churras *lista){
    // if(i != 0){
    //     printf("\ncheguei\n");
    //     lista = (Churras*) realloc(lista, sizeof(Churras) * i++);
    // }

    getchar();
    scanf(" %[^\n]", lista[i].item);
    scanf("%f", &lista[i].preco);
    scanf("%f", &lista[i].quantidade);
}

void rateioDoChurras(int i, int pessoas, Churras *lista){
    float custo = 0;
    float quantoPraCada;
    for(int j = 0; j <= i; j++){
        custo += lista[j].preco * lista[j].quantidade;
    }
    quantoPraCada = custo / pessoas;

    printf("Valor: R$ %.2lf\n", custo);
    printf("Divisão R$ %.2lf para cada participante.\n", quantoPraCada);
}

int main(){
    int i = 0;
    int continuar, participantes;
    Churras *lista;

    lista = (Churras*) malloc(10 * sizeof(Churras));
    for(i = 0; continuar != 2; i++){
        cadastrarItem(i, lista);
        scanf("%d", &continuar);
    }

    scanf("%d", &participantes);
    rateioDoChurras(i, participantes, lista);
    free(lista);
    return 0;
}