#include <stdio.h>
#include <math.h>

int somaDivisores(int n);
int isColleague(int x, int y);

int main(){
    int n1,n2;

    scanf("%d %d", &n1, &n2);

    isColleague(n1, n2);

    return 0;
}

int somaDivisores(int n){
    int soma = 0;

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            soma += i;
        }
    }
    return soma;
}

int isColleague(int x, int y){

    if(fabs(somaDivisores(x) - y) <= 2 && fabs(somaDivisores(y) - x) <= 2){
        printf("S\n");
    } else {
        printf("N\n");
    }
} 