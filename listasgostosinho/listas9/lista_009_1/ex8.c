#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int carlos,i=1,carlosMeuPrimo = 1;
    printf("Informe o numero: ");
    scanf("%d", &carlos);
    if (carlos < 2){
        carlosMeuPrimo = 0;
    }
    for(i=2; i<= sqrt(carlos); i++){
        if(carlos%i==0){
            carlosMeuPrimo = 0;
            break;
        } 
    }

    if(carlosMeuPrimo == 0){
        printf("nao primo :(");
    } else {
        printf("ele e meu primo :)");
    }
    return 0;
}