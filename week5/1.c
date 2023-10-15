#include <stdio.h>
#include <string.h>

#define TAM 200

char referencial[] =
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' '};

int validaCaracter(char c) {
    for(int i = 0; i < sizeof(referencial); i++) {
        if(c == referencial[i]) {
            return 1;
        }
    }
    return 0;
}

void transformaNumeroEmArray(int tamanhoString, int n, int* array){
    int unidade, dezena, centena, milhar;
    if(n > 0 && n < 10){
        unidade = n;
        for (int i = 0; i < tamanhoString; i++){
            array[i] = unidade;
        }
    } else if(n >= 10 && n < 100){
        unidade = n % 10;
        dezena = n / 10;
        array[0] = dezena;
        array[1] = unidade;
        for (int i = 2; i < tamanhoString; i+=2){
            array[i] = dezena;
            array[i+1] = unidade;
        }
    } else if(n >= 100 && n < 1000){
        unidade = n % 10;
        dezena = (n / 10) % 10;
        centena = n / 100;
        array[0] = centena;
        array[1] = dezena;
        array[2] = unidade;
        for (int i = 3; i < tamanhoString; i+=3){
            array[i] = centena;
            array[i+1] = dezena;
            array[i+2] = unidade;
        }
    } else if (n >= 1000 && n < 10000){
        unidade = n % 10;
        dezena = (n / 10) % 10;
        centena = (n / 100) % 10;
        milhar = n / 1000;
        array[0] = milhar;
        array[1] = centena;
        array[2] = dezena;
        array[3] = unidade;
        for (int i = 4; i < tamanhoString; i+=4){
            array[i] = milhar;
            array[i+1] = centena;
            array[i+2] = dezena;
            array[i+3] = unidade;
        }
    }
}

int main(){
    int chave;
    char str[TAM];

    scanf("%d\n", &chave);
    fgets(str, TAM, stdin);

    char arrayCifra[strlen(str) + 1]; // Adicionando 1 para o caractere nulo no final

    if(chave > 0 && chave < 10000){
        for(int i = 0; i < strlen(str); i++) {
            if (!validaCaracter(str[i]) && str[i] != '\n') {
                printf("Caractere invalido na entrada!\n");
                return 1;
            }

            int arrayChave[strlen(str)];
            transformaNumeroEmArray(strlen(str), chave, arrayChave);

            for(int j = 0; j < sizeof(referencial); j++){
                if(str[i] == referencial[j]){
                    int indice = (j + arrayChave[i % strlen(str)]) % sizeof(referencial);
                    arrayCifra[i] = referencial[indice];
                    break;
                }
            }
        }
        arrayCifra[strlen(str)] = '\0'; // Adicionando o caractere nulo no final

        for(int i = 0; i < strlen(arrayCifra)-1; i++){
            printf("%c", arrayCifra[i]);
        }
    } else {
        printf("Chave invalida!");
    }

    return 0;
}