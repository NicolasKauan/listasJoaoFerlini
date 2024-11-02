#include <stdio.h>
#include <string.h>

int main(){
    char * zodiaco[] = {"Aquário", " peixes", "Áries", "Touro", "Gemeos", "Cancer", "Leao", "Virgem", "Libra", "Escorpiao",
     "Sagitario", "Capricornio"};
    int day, month, v = 0;
    int escolha;
    printf("\n--------------------------------------\n");
    printf("\nSISTEMA PARA SABER SEU SIGNO\n");
    printf("\n--------------------------------------\n");
    do
    {
        printf("Dia do seu nascimento: ");
        scanf("%d", &day);
        if ( day > 31){
            printf("Dia invalido...");
            return 0;
        }
        printf("Mes do seu nascimento: ");
        scanf("%d", &month);
        if ( month > 12){
            printf("Mes invalido...");
            return 0;
        } else if(month == 2 && day >= 29){
        printf("Data inválida...");
        return 0;
        }
        if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        v = 0; 
        } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)){
        v = 1; 
         } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)){
        v = 2; 
        } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)){
        v = 3; 
        } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)){
        v = 4; 
         } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)){
        v = 5; 
        } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)){
        v = 6; 
        } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)){
        v = 7; 
        } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)){
        v = 8; 
        } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)){
        v = 9; 
        } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)){
        v = 10; 
        } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)){
        v = 11; 
        }
        printf("Parabens o seu Zodiaco e %s\n", zodiaco[v]);
        printf("Deseja continuar(1-Sim/2-Nao): ");
        scanf("%d", &escolha);

    } while (escolha == 1 );
    


    return 0;
}