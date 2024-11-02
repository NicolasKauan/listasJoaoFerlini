#include <stdio.h>
#include <string.h>

int main(){
    char n[20] = "O Principado";
    char n2[] = "A metafisica";
    if (strncmp(n, n2, 4) == 0){
        printf("Os 4 primeiros caracteres são iguais!\n");
    } else if(strncmp(n, n2, 4) < 0){
        printf("As 4 primeiras letras de %s vem antes de %s na ordem alfabética\n",n,n2);
    } else{
        printf("As 4 primeiras letras de %s vem depois de %s na ordem alfabética\n",n,n2);
    }
    return 0;
}