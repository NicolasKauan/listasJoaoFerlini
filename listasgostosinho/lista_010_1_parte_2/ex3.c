#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char p1[50],p2[50],pre[50];
    int i;
    printf("Informe uma palavra: ");
    gets(p1);
    printf("Informe uma segunda palavra: ");
    gets(p2);

    for (i=0;i<=strlen(p1); i++){
        if(p1[i]==p2[i]){
            pre[i] = p1[i];
        }
    }
    printf("Maior prefixo comum: %s",pre);


    return 0;
}