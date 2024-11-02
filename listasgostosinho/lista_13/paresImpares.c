#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    int n[10],i,pares = 0,impares = 0;    
    for (i=0; i < 10; i++){
        printf("Informe o %d° numero: ",i+1);
        scanf("%d", &n[i]);
    }
    for (i = 0; i< 10; i++){
        if (n[i]%2==0){
            pares++;
        } else{
            impares++;
        }
    }
    printf("Temos %d números pares!\nTemos %d números impares!\n",pares,impares);

    return 0;
}