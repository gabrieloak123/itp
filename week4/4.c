#include <stdio.h>

float mediaAritmetica(float n1, float n2, float n3);
float mediaPonderada(float n1, float n2, float n3);
float calcularMedia(char tipo, float n1, float n2, float n3);

int main(){
    char mediaTipo;
    float n1, n2, n3, media;


    scanf("%c", &mediaTipo);
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);


   calcularMedia(mediaTipo, n1, n2, n3);

    return 0;
}

float mediaAritmetica(float n1, float n2, float n3){
    return (n1 + n2 + n3)/3;
}

float mediaPonderada(float n1, float n2, float n3){
    return ((n1 * 4) + (n2 * 5) + (n3 * 6)) / 15;
}

float calcularMedia(char tipo, float n1, float n2, float n3){
    float media;

    if(tipo == 'A'){
        media = mediaAritmetica(n1,n2,n3);
    }
    if(tipo == 'P'){
        media = mediaPonderada(n1,n2,n3);
    }

    printf("Média %.2f", media);
}
