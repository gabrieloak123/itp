#include <stdio.h>

int main(){
    int burger, dinheiro;
    char texto;

    scanf("%d %d", &burger, &dinheiro);

    switch (burger){
    case 1:
        if(dinheiro == 12){
            printf("Deu certim!");
        }
        if(dinheiro < 12){
           printf("Saldo insuficiente! Falta %d reais", 12 - dinheiro);
        }
        if(dinheiro > 12){
            printf("Troco = %d reais", dinheiro - 12);
        }
        break;
     case 2:
        if(dinheiro == 23){
            printf("Deu certim!");
        }
        if(dinheiro < 23){
            printf("Saldo insuficiente! Falta %d reais", 23 - dinheiro);
        }
        if(dinheiro > 23){
            printf("Troco = %d reais", dinheiro - 23);
        }
        break;
    case 3:
        if(dinheiro == 31){
            printf("Deu certim!");
        }
        if(dinheiro < 31){
            printf("Saldo insuficiente! Falta %d reais", 31 - dinheiro);
        }
        if(dinheiro > 31){
            printf("Troco = %d reais", dinheiro - 31);
        }
        break;
    case 4:
        if(dinheiro == 28){
            printf("Deu certim!");
        }
        if(dinheiro < 28){
            printf("Saldo insuficiente! Falta %d reais", 28 - dinheiro);
        }
        if(dinheiro > 28){
            printf("Troco = %d reais", dinheiro - 28);
        }
        break;
    case 5:
        if(dinheiro == 15){
            printf("Deu certim!");
        }
        if(dinheiro < 15){
            printf("Saldo insuficiente! Falta %d reais", 15 - dinheiro);
        }
        if(dinheiro > 15){
            printf("Troco = %d reais", dinheiro - 15);
        }
        break;
    }
    return 0;
}