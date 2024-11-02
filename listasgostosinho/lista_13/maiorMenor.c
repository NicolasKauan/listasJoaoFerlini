#include <stdio.h>
#include <string.h>

int main(){
    int i,tamanho, maior = -9999, menor = 9999; 
    printf("Informe o tamanho do vetor que deseja: ");//entrada para o tamanho do vetor
    scanf("%d", &tamanho);//to lendo o tamanho dele e reservando a memoria com o & e guardando na variavel tamanho
    int n[tamanho];//aqui é um jeito facil de fazer o vetor pelo tamanho que o usuario quer, é so criar o vetor depois de receber o tamanho dele

    for (i=0; i < tamanho; i++){
        printf("Informe %d numero: ",i+1);//entradinha da calvice que chega pra todos, a piada que não perde a graça. Na verdade a entrada para os numeros que irão compor o vetor
        scanf("%d", &n[i]);// leitura em inteiro para o vetor n[i]
       
    }
    for (i = 0; i< tamanho; i++){
        if (n[i] > maior){//condição que se o n[i] for maior que maior, a variavel(maior) ira "guardar"/receber o valor inteiro que esta em n[i]
            maior = n[i];//o "recebimento" se a condição for verdadeira
        } 
        if (n[i] < menor){//condição que se o n[i] for menor que menor, a variavel(menor) ira "guardar"/receber o valor inteiro que esta em n[i]
            menor = n[i];// o "recebimento" se a condição for verdadeira
        }
    }
    printf("Maior = {%d}\nMenor = {%d}\n",maior,menor);//mostrando para o usuário de um jeito "bonitinho", o maior e o menor numero
    return 0;
}