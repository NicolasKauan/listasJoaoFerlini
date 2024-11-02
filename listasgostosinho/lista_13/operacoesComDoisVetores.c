#include <stdio.h>
#include <string.h>

int main(){
    int n[5],n2[5],i,somaVetores[5],subVetores[5],soma[5],igualdade = 0; 

    //entrada dos valores para o vetores 1 e 2   
    for (i=0; i < 5; i++){
        printf("Informe um numero para o primeiro vetor: ");
        scanf("%d", &n[i]);
        printf("Informe um numero para o segundo vetor: ");
        scanf("%d", &n2[i]);
    }

    //soma dos vetores
    printf("Soma: ");
    for (i = 0; i< 5; i++){
        somaVetores[i] = n[i] + n2[i];
        printf("%d, ", somaVetores[i]);
    }
    printf("\n");

    //subtração dos vetores
    printf("Subtracao: ");
    for (i = 0; i< 5; i++){
        subVetores[i] = n[i] - n2[i];
        printf("%d, ", subVetores[i]);
    }
    printf("\n");

    //soma com a posição +1
    printf("Soma com a posicao +1: ");
    for (i = 0; i < 4; i++){// tava 5 antes nesta bosta, fui ver que era 4 só depois de bugar tudo
        soma[i] = n[i+1] + n2[i];
        printf("%d, ", soma[i]);
    }
    printf("\n");

    //verificação de igualdade dos vetores
    printf("igualdade: ");
    for (i = 0; i< 5; i++){
        if(n[i] == n2[i]){
            igualdade++;
        } 
    }
    if (igualdade == 5){
        printf("Vetores iguais\n");
    } else{
        printf("Vetores diferentes\n");
    }
    return 0;
}