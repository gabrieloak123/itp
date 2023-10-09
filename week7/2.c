#include <stdio.h>
#include <string.h>

void deletaSubstring(char* string, char* substring) {
    char *ocorrencia = string;
    int tamanhoSubstring = strlen(substring);
    
    while ((ocorrencia = strstr(ocorrencia, substring)) != NULL) {
        memmove(ocorrencia, ocorrencia + tamanhoSubstring, strlen(ocorrencia + tamanhoSubstring) + 1);
    }
}

int main() {
    char prefixos[10][10], sufixos[10][10], palavras[100][100];
    int qntdPrefixos, qntdSufixos;

    scanf("%d", &qntdPrefixos);
    for (int i = 0; i < qntdPrefixos; i++)
        scanf("%s", prefixos[i]);

    scanf("%d", &qntdSufixos);
    for (int i = 0; i < qntdSufixos; i++)
        scanf("%s", sufixos[i]);

    int contador = 0;

    while (1) {
        scanf("%s", palavras[contador]);
        if (strcmp(palavras[contador], "-1") == 0){
            break;
        }   
        contador++;
    }

    for(int i = 0; i < qntdPrefixos; i++)
        for (int j = 0; j < contador; j++)
            deletarSubstring(Palavras[j], Prefixos[i]);
    
    for(int i = 0; i < qntdSufixos; i++){
        for (int j = 0; j < contador; j++){
            deletarSubstring(palavras[j], sufixos[i]);
        }      
    }

    for(int i = 0; i < contador; i++){
        printf("%s\n", palavras[i]);
    }
    return 0;
}