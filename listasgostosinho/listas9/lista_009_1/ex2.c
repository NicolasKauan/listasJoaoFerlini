#include <stdio.h>
#include <math.h>

int main(){
    int i=0,soma=0;
    while ( i < 101){
        soma = soma + i;
        i++;
    }    
    printf("%d",soma);
    return 0;
}