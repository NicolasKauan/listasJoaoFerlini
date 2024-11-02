#include <stdio.h>
#include <string.h>

int main(){
    int n[10], i,soma = 0,maior = -99999, menor = 99999;    
    for (i=0; i < 10; i++){
        printf("Informe um numero: ");
        scanf("%d", &n[i]);
    }
    for (i = 0; i< 10; i++){
        soma = soma + n[i];
        if (n[i] > maior){
            maior = n[i];
        } 
        if( n[i] < menor){
            menor = n[i];
        }
    }
    printf("soma = %d\nmedia = %d\n", soma,soma/10);
    printf("maior = %d\nmenor = %d",maior,menor);
    return 0;
}