#include <stdio.h>
#include <string.h>

int main(){
    char msg[50], busc;
    int i, cont = 0;

    printf("Informe a palavra: ");
    gets(msg);
    printf("Informe o caracter que deseja buscar: ");
    scanf("%c", &busc);
    for (i=0; msg[i] != '\0'; i++){
        if (busc == msg[i]){
            cont++;
        }
    }
    printf("Quantidade de %c = %d",busc,cont);
    return 0;
}