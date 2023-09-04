#include <stdio.h>
#include <math.h>

int main(){
    int dias, meses, anos;
    
    scanf("%d", &dias);
    
    anos = dias / 365;
    meses = fabs(anos *12 - dias / 30);
    dias = fabs(dias - anos * 365 - meses * 30);
    
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    
    return 0;
}