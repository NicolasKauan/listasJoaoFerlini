#include <stdio.h>
#include <string.h>

char s1[50], s2[50], s3[50];

int main() {
    printf("Escreva uma string: ");
    gets(s1);
    printf("Escreva outra string: ");
    gets(s2);

    if(strlen(s1) > strlen(s2)) {
        for(int i = 0; i < strlen(s1); i++) {
            printf("%c", s1[i]);
            if(i < strlen(s2)){
                printf("%c", s2[i]);
            }
        }
    } else {
        for(int i = 0; i < strlen(s2); i++) {
            if(i < strlen(s1)){
                printf("%c", s1[i]);
            }
            printf("%c", s2[i]);
        }
    }
    return 0;
}