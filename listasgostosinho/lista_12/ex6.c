#include <stdio.h>
#include <string.h>

int main(){
    char n[20] = "Maquiavel ";
    char n2[] = "Kant";
    strncat(n, n2, 3);
    printf("%s\n",n);
    return 0;
}