#include <stdio.h>
#include <math.h>

int main(){
    double n,i=0,m,s=0;
    
    printf("INFORME 5 NuMEROS!\n");
    printf("--------------------\n");
    do
    {   
        printf("Escolha o numero: ");
        scanf("%lf", &n);
        s = s + n;
        i++;
    } while (i<=4);
    printf("%.2lf",n);
    m = s/5;
    printf("A media dos 5 numeros e: %.2lf",m);
    return 0;
}