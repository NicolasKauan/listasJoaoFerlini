#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    double notas,media,snotas1 = 0, snotas2 = 0;
    int i,j = 0,escolha = -1;
    printf("Quantos alunos temos ao todo nas 2 disciplinas: ");
    scanf("%d", &j);
    while (escolha != 0) {
        printf("\nPara a materia\nEscolha\n1-Historia\n2-Matematica\n0-sair\n");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            for (i=1;i <= j;i++){
                printf("Nota do %d aluno: ",i);
                scanf("%lf", &notas);
                snotas1 = snotas1 + notas;
            }
            printf("%d\n",j);
            printf("%lf\n",snotas1);
            media = snotas1/j;
            printf("A media de notas para a disciplina de Historia e: %.2lf ",media);
            break;
        case 2:
            for (i=1;i<=j;i++){
                printf("Nota do %d aluno: ",i);
                scanf("%lf", &notas);
                snotas2 = snotas2 + notas;
            }
            printf("%d\n",j);
            printf("%lf\n",snotas2);
            media = snotas2/j;
            printf("A media de notas para a disciplina de Matematica e: %.2lf ",media);

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