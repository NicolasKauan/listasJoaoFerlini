#include <stdio.h>

int idade, qfilhos, qhomem = 0, qmulher = 0, idademul = 0, menor, quanmulher = 0;
char sexo;
float perhomem, media;

int main() {
    menor = 99999;
    
    for (int i = 0; i < 2; i++) {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite o sexo (F/M): ");
        scanf(" %c", &sexo);
        printf("Digite a quantidade de filhos: ");
        scanf("%d", &qfilhos);
        
        if (idade < menor) {
            menor = idade;
        }
        if ((sexo == 'F' || sexo == 'f') && qfilhos == 0) {
            qmulher++;
            idademul += idade; 
        }
        if (sexo == 'M' || sexo == 'm') {
            qhomem++;
        }
        if (sexo == 'F' || sexo == 'f') {
            quanmulher++;
        }
    }
    
    perhomem = (qhomem * 100) / 2;
    if (qmulher > 0) {
        media = (float)idademul / qmulher; 
        printf("Média da idade das mulheres sem filhos: %.2f\n", media);
    } else {
        printf("Nenhuma mulher sem filhos foi cadastrada.\n");
    }
    
    printf("Percentual dos homens: %.2f%%\n", perhomem);
    printf("A menor idade digitada: %d\n", menor);
    printf("Quantidade de mulheres entrevistadas: %d\n", quanmulher);
    
    return 0;
}