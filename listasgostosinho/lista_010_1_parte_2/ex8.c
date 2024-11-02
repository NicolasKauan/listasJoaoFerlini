#include <stdio.h>
#include <string.h>

int main(){
    char s1[50],s2[50] = "";
    int i,j = 0;

    printf("Informe uma palavra: ");
    gets(s1);

    for ( i = 0; i < strlen(s1); i++)
    {
        if ( s1[i] != 'A' && s1[i] != 'E' && s1[i] != 'I' && s1[i] != 'O' && s1[i] != 'U' && s1[i] != 'a' && s1[i] != 'e' && s1[i] != 'i' && s1[i] != 'o' && s1[i] != 'u') {
            s2[j] = s1[i];
            j++;
        }
    }


    printf("String sem vogais: %s\n",s2);
    return 0;
}