#include <stdio.h>
#include <string.h>

int main(){
    int n[]= {0,1,1,2,3,4,5,6,7,8,9},n2,rep = 0,pos = -1;
    int i;    
    printf("Informe um numero a ser encontrado: ");
    scanf("%d", &n2);
    for (i = 0; i < 11; i++){
        if (n[i] == n2){
            rep =  rep + 1;
            pos =  i;
        }
    }
    if (rep > 0){
        printf("O numero pertence ao vetor, ele se repete %d vez, ele esta na posicao %d",rep,pos);
    } else{
        printf("Numero nao pertence ao vetor");
    }

    return 0;
}