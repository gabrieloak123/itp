#include <stdio.h>

void calcular_media(int *A, int *B){
    int soma = *A + *B;
    int media = soma / 2;
    int resto = soma % 2;

    if(*B > *A){
        *B = resto;
        *A = media;
    } else {
        *A = resto;
        *B = media;
    }


}

int main(){
    int a, b;

    scanf("%d %d", &a, &b);
    calcular_media(&a, &b);

    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}