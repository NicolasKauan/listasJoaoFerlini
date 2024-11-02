#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i=0, y=0;
    char palavra[50],palavra2[50]="Gostoso";

    printf("Informe uma palavra: ");
    fgets(palavra,50,stdin);

    for(i = 0;i < 50;i++){
        if(palavra[i]=='\0'){
            break;
        } 
        if(palavra[i]==' '){
            continue;}
        palavra2[y] = palavra[i];
        y++;
        
    }

    printf("%s",palavra2);


    return 0;
}