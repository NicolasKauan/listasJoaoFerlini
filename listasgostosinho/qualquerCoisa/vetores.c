#include <stdio.h>
#include <string.h>
int main (){
    char numeros[10];
    for(int i=0;i<9;i++){
            printf("Informe um caractere: ");
            scanf(" %c", &numeros[i]);
    }
    numeros[9] = '\0';
    printf("%s",numeros);
        
    return 0;
}