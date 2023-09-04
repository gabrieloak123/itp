#include <stdio.h>

int main(){
    int dias, meses, anos;
    
    scanf("%d", &dias);
    
    anos = dias / 365;
    meses = (dias % 365)/ 30;
    dias = dias - anos * 365 - meses * 30;
    
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    
    return 0;
}

//tipos de variável

//int ocupa 4 bytes
//float ocupa 4 bytes
//chat ocupa 1 byte
//double ocupa 8bytes

//scanf

//%d ou $i para int
//%f para float
//%lf para double
//%c para char

//printf

//\n dá enter
//\t dá tab
//printf("texto: %mesmoDoScanf", variável);
    //print("texto: %.2lf", varDouble) esse .2 diz q só se deve imprimir 2 casas decimais


//char
    //se você usa o getChar() pra receber um texto vc cria uma "fila de caracteres" esperando para serem printados
    //eles são printados através de putChar(variável)