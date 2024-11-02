#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    int n,aleatorio = 0;
    srand(time(NULL));
    printf("-----------------------------------------\n");
    printf("JOGO DA ADIVINHAÇÃO!\n");
    printf("------------------------------------------\n");
    aleatorio = (rand()%100)+1;
    printf ("%d\n", aleatorio);
    do{
        printf("Escolha um numero de 0 a 100: ");
        scanf("%d", &n);
        if(n == aleatorio){
            printf("PARABENS VOCE ACERTOU\n");
        } else{ 
            printf("VOCE ERROU, TENTE NOVAMENTE.\n");
        }

    } while ( n != aleatorio);
    return 0;
}