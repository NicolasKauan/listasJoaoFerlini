#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int tamanho, i;

    printf("Qual a quantidade de notas que deseja armazenar: ");
    scanf("%d", &tamanho);
    float vetor[tamanho],m = 0;

    for (i=0; i < tamanho; i++){
        printf("Informe a %dº nota: ",i+1);
        scanf("%f", &vetor[i]);
        m = m + vetor[i];
    }
    for (i = 0; i< tamanho; i++){
        printf("Notas: %.2f\n", vetor[i]);
    }
    printf("Media das notas %f", m/tamanho);

    return 0;
}