#include <stdio.h>
#include <string.h>

int main(){
    char n[] = "Maquiavel";
    char n2[] = "Kant";
    int x = strcmp(n,n2);//sempre vai me retornar um numero inteiro sendo 0 para palavras iguais, negativo para se n vir antes de n2 e positivo para se n vir depos de n2;
    if (x == 0){
        printf("As strings são iguais!\n");
    } else if(x < 0){
        printf("%s vem antes de %s na ordem alfabética\n",n,n2);
    } else{
        printf("%s vem depois de %s na ordem alfabética\n",n,n2);
    }
    


    return 0;
}