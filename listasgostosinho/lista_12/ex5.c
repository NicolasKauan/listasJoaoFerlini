#include <stdio.h>
#include <string.h>

int main(){
    char n[] = "Principe";
    char n2 [20];
    strncpy(n2, n, 5);
    n2[5] = '\0';
    printf("%s",n2);    
    


    return 0;
}