#include <stdio.h>
#include <string.h>
#define TAM 200

int main(){
    int chave;
    char str[TAM];
    char referencial[] =
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' '};

    scanf("%d\n", &chave);
    fgets(str, TAM, stdin);
    int a = strlen(str);
    printf("%d", &a);
    if(chave > 0 && chave < 10000){
        int caracterConhecido;
        for(int i = 0; i < strlen(str); i ++){
            caracterConhecido = 0;
            for (int j = 0; j < strlen(referencial); j++){
                if(str[i] == referencial[j]){
                    caracterConhecido = 1;
                    break;
                }
            }
            if(caracterConhecido == 0){
                printf("\nCaractere invalido na entrada!\n");
                printf("Caractere inválido é o: %c", str[i]);
                break;
            }
            caracterConhecido = 0;
        }
    } else {
        printf("\nChave invalida!");
    }

    return 0;
}