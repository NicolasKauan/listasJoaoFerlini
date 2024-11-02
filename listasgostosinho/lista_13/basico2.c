#include <stdio.h>
#include <string.h>

int main(){
    int n[10], i;    
    for (i=0; i < 10; i++){
        printf("Informe um numero: ");
        scanf("%d", &n[i]);
    }
    for (i = 9;i >= 0; i--){
        printf("%d\n", n[i]);
    }

    return 0;
}