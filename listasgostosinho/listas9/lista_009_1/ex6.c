#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    double altura,alunos,i,m,n = 0;
    printf("Quantos alunos tem na sala: \n");
    scanf("%lf", &alunos);
    for (i=0; i < alunos;i++){
        printf("Altura dos alunos(ex guilherme tem 170 de altura): ");
        scanf("%lf", &altura);
        n = n + altura;
    }
    m = n/alunos;
    printf("A media de altura dos alunos e: %.2lf",m);
    return 0;
}