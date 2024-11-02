#include <stdio.h>
#include <string.h>

int main(){
    //essa eu aprendi, a um tempo, no curso de algoritmos do guanabara, pega!
    int n[5], i, j,aux;    
    for (i=0; i < 5; i++){//entrada dos 5 numeros
        printf("Informe um numero: ");
        scanf("%d", &n[i]);
    }
    for (i = 0; i < 4; i++){//ordenação de vetores, o i vai ser sempre o numero de armazenamento do vetor -1
        for(j = i+1;j < 5;j++ ){// aqui vai ser sempre o j = i+1 indo até o limite do i + 1 numero
            if (n[i] > n[j]){//fiz aqui uma condição para que se o n[i] for maior que o n[j] iremos fazer a troca
                aux = n[i];//temos a variavel que vai auxiliar tudo, onde o aux vai receber o valor que ta em n[i]
                n[i] = n[j];// n[i] vai receber o valor que ta em n[j], que é maior que ele
                n[j] = aux;// n[j] vai receber o valor que ta em aux 
            }
        }
    }
    for (i = 0; i < 5; i++){
        printf("{%d}, ",n[i]);//aqui estou mostrando o vetor de n[i], em ordem crescente, de um jeito bonitinho;
    }

    return 0;
}