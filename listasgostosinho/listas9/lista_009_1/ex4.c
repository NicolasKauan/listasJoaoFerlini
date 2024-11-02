#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i=0,m=7;

    for ( i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n",m,i,m*i);
    }
    return 0;
}