#include <stdio.h>

int main(){

    int numero, n1, n2, n3, n4;

    scanf("%d", &numero);

    if (numero < 10)
    {
        printf("%d", numero);
    }
    if (numero >= 10 && numero < 100)
    {
        n1 = numero % 10;
        numero = numero / 10;
        printf("%d\n", numero);
        printf("%d\n",n1);
    }
    if (numero >=100 && numero < 1000)
    {
        n1 = numero % 10;
        numero = numero / 10;
        n2 = numero % 10;
        numero = numero / 10;
        printf("%d\n%d\n%d",numero, n2, n1);
    }
    if (numero >= 1000 && numero < 10000)
    {
        n1 = numero % 10;
        numero = numero / 10;
        n2 = numero % 10;
        numero = numero / 10;
        n3 = numero % 10;
        numero = numero / 10;
        printf("%d\n%d\n%d\n%d",numero, n3, n2, n1);      
    }
    if (numero >= 10000 && numero < 100000)
    {
        n1 = numero % 10;
        numero = numero / 10;
        n2 = numero % 10;
        numero = numero / 10;
        n3 = numero % 10;
        numero = numero / 10;
        n4 = numero % 10;
        numero = numero / 10;
        printf("%d\n%d\n%d\n%d\n%d",numero, n4, n3, n2, n1);        
    }
    
    
    
    return 0;
}