#include <stdio.h>
#include <string.h>

char s1[50];
int palavras = 1;

int main() {
    printf("Escreva uma string: ");
    gets(s1);
    
    for(int i = 0; i < strlen(s1); i++) {
        if(s1[i] == ' ') {
            palavras++;
        }
    }

    if(s1[strlen(s1)-1] == ' '){
        palavras--;
    }

    printf("Numero de palavras %d", palavras);

    return 0;
}