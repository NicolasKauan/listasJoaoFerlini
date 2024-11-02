#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    double c,f;
    int escolha=-1;
    while (escolha != 0)
    {
        printf("\n---------------\nEscolha:\n1-Celsius para Fahrenheit\n2-Fahrenheit para Celsius\n0-Sair\n");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            printf("Qual o grau em (C) para a conversao: ");
            scanf("%lf", &c);
            printf("%.2lf(C) em graus Fahrenheit(F) e: %.2lf",c,c*1.8+32);
            break;
        case 2:
            printf("Qual o grau em (F) para a conversao: ");
            scanf("%lf", &f);
            printf("%.2lf(F) em graus Celsius(C) e: %.2lf",f,(f-32)/1.8);
            break;
        case 0:
            printf("Saindo do programa do nicolas :)");
            break;
        default:
            printf("ESCOLHA INVALIDA, ESCOLHA NOVAMENTE\n");
            break;
        }
    }
    return 0;
}