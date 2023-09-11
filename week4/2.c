#include <stdio.h>

int calcularScoreFinal(int a, int b, int c) {
    if ((a >= b && a <= c) || (a >= c && a <= b))
        return a;
    else if ((b >= a && b <= c) || (b >= c && b <= a))
        return b;
    else
        return c;
}

int main() {
    int sA1, sA2, sA3, sA4, sA5, sA6, sA7, sA8, sA9;
    int sB1, sB2, sB3, sB4, sB5, sB6, sB7, sB8, sB9; 
    
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
    &sA1, &sA2, &sA3, &sA4, &sA5, &sA6, &sA7, &sA8, &sA9,
    &sB1, &sB2, &sB3, &sB4, &sB5, &sB6, &sB7, &sB8, &sB9);

    int scoreFinalA = calcularScoreFinal(
    calcularScoreFinal(sA1, sA2, sA3),
    calcularScoreFinal(sA4, sA5, sA6),
    calcularScoreFinal(sA7, sA8, sA9));

    int scoreFinalB = calcularScoreFinal(
    calcularScoreFinal(sB1, sB2, sB3),
    calcularScoreFinal(sB4, sB5, sB6),
    calcularScoreFinal(sB7, sB8, sB9));
    
    if(scoreFinalA > scoreFinalB) {
        printf("A\n");
    }else if(scoreFinalA < scoreFinalB) {
        printf("B\n");
    }else{
        printf("empate\n");
    }
    
    return 0;
}