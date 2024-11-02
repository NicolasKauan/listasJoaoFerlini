#include <stdio.h>

float mediaTurma, mediaAluno, n1, n2, apr, sapr, rep, srep;
char nome[50];

int main(){
	for(int i = 1; i < 3; i++){
		printf("Digite o nome do aluno: ");
		scanf("%s", &nome);
		printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		mediaAluno = (n1 + n2) / 2;
		printf("%f", mediaAluno);
		if(mediaAluno < 6){
			srep++;
		}else if(mediaAluno >= 6){
			sapr++;
		}
		mediaTurma = mediaTurma + mediaAluno;
	}
	
	apr = (sapr * 100) / 32;
	rep = (srep * 100) / 32;
	mediaTurma = mediaTurma / 2;
	printf("A media da turma eh : %.1f\n", mediaTurma);
	printf("Porcentagem de aprovados: %.2f\n", apr);
	printf("Porcentagem de reprovados: %.2f\n", rep);

	

	return 0;
}