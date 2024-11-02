#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n[100], maior = -9999, menor = 99999999,i = 0;
        printf("\nDigite uma sequencia de ate 5 numeros inteiros positivos do usuário\n");
        printf("\nDigite um numero negativos se quiser sair\n");
    while (i < 100) {
        printf("%d numero da sequencia: ",i+1);
        scanf("%d", &n[i]);
        if (n[i] < 0)
        {
            printf("SAINDO...\n");
            break;
        }
        if(n[i] < menor){
            menor = n[i];
        } 
        if (n[i] > maior){
            maior = n[i];
        }
        i++;
    }
    
    printf("O maior numero e: %d\n",maior);
    printf("O menor numero e: %d\n",menor);
    return 0;
}