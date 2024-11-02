#include <stdio.h>
#include <string.h>

int main(){
    char n[20] = "Maquiavel ";
    char *ponteiro = strchr(n, 'a');
    if (ponteiro){
        printf("Caractere encontrado seu gostoso: %c\n", *ponteiro);
    }
    return 0;
}