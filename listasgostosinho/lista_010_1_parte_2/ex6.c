#include <stdio.h>
#include <string.h>

char s1[50], sub[50];
int inicio, fim;
int x = 0;

int main() {
    printf("Escreva uma string: ");
    gets(s1);
    printf("Posicao inicial da substring: ");
    scanf("%d", &inicio);
    printf("Tamanho da substring: ");
    scanf("%d", &fim);
    fim = inicio+fim;

    for(int i = inicio; i < fim; i++) {
        sub[x] = s1[i];
        printf("%c\n", sub[x]);
        x++;
    }

    printf("Substring: %s", sub);

 return 0;
}