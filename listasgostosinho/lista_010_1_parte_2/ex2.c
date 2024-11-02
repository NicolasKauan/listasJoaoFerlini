#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char p1[50],p2[50];

    printf("Informe uma palavra: ");
    gets(p1);
    printf("Informe uma segunda palavra: ");
    gets(p2);

    if (strcmp(p1,p2)==0){
        printf("Palavras iguais\n");
    } else{
        printf("Palavras diferentes\n");
    }
    return 0;
}