#include <stdio.h>

int main(){
    float temperatura,c,f,k;
    char escala;

    scanf("%f %c", &temperatura, &escala);

    if(escala == 'C'){
        c = temperatura;
        f = c * 1.8 + 32;
        k = c + 273.15;
    }
    if(escala == 'F'){
        f = temperatura;
        c = (f - 32) / 1.8;
        k = c + 273.15;
    }
    if(escala == 'K'){
        k = temperatura;
        c = k - 273.15;
        f = c * 1.8 + 32;
    }

    printf("Celsius: %.2lf\n", c);
    printf("Farenheit: %.2lf\n", f);
    printf("Kelvin: %.2lf\n", k);

    return 0;
}