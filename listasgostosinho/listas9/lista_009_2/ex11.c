#include <stdio.h>

int idade[5];
int maior, menor;

int main(){
	for(int i = 0; i < 5; i++){
		printf("Digite a idade da %d pessoa: ", i+1);
		scanf("%d", &idade[i]);
	}
	
	maior = idade[0];
	menor = idade[0];
	
	for(int i = 0; i < 5; i++){
		if(idade[i] > maior){
			maior = idade[i];
		}else if(idade[i] < menor){
			menor = idade[i];
		}
	}
	printf("A maior idade digitada: %d\n", maior);
	printf("A menor idade digitada: %d", menor);

	return 0;
}