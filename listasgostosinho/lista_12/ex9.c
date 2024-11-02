#include <stdio.h>
#include <string.h>

int main(){
    char n[20] = "maquiavel e o lib";
    char *ponteiro = strstr(n, "lib");
    if (ponteiro){
        printf("Substring encontrada seu gostoso: %s\n", ponteiro);
    }
    return 0;
}