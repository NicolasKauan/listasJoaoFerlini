#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char s1[50],s2[50] = "";
    int i,l,c,rep; 
    printf("Informe uma palavra: ");
    gets(s1);
    for (i=0;i < strlen(s1); i++){
        rep = 0;
        for (l=0; l < i; l++ ){
            if(s1[l] == s1[i]){
                rep = 1;
                break;
            }
        }
        if (rep == 0){
            s2[c] = s1[i];
            c++;
        }
    }
    printf("String sem caracter repetido: %s\n",s2);
    return 0;
}