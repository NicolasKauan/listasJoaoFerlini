#include <stdio.h>
#include <string.h>

int main(){
    int i,tamanho; 
    printf("Informe o tamanho do vetor que deseja: ");//entrada para o tamanho do vetor
    scanf("%d", &tamanho);//to lendo o tamanho dele e reservando a memoria com o & e guardando na variavel tamanho
    float n[tamanho],n1[tamanho];//aqui é um jeito facil de fazer o vetor pelo tamanho que o usuario quer, é so criar o vetor depois de receber o tamanho dele

    for (i=0; i < tamanho; i++){
        printf("Informe %d numero: ",i+1);//entradinha da calvice que chega pra todos. Na verdade a entrada para os numeros que irão compor o vetor
        scanf("%f", &n[i]);// leitura em float para o vetor n[i]
        n1[i] = n[i];// uma simples copia dos vetores onde n1[i] ira receber o que esta em n[i]
    }
    for (i = tamanho - 1; i >=0 ; i--){
        printf("{%.2f}, ", n1[i]);// mostrando de um jeito "bonito" o vetor n1[i] invertido
    }

    return 0;
}