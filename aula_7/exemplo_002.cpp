#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	const int ALUNOS = 5, PROVAS = 3;
	int i, j;
	float notas[ALUNOS][PROVAS], media[ALUNOS];
	for(i = 0; i < ALUNOS; i++){
		for(j = 0; j < PROVAS; j++){
			printf("\nAluno %i - Prova %i : ",i+1,j+1);
			scanf("%f",&notas[i][j]);
		}
	} 
	// Cálculo da média
	for(i = 0; i < ALUNOS; i++){
		media[i] = 0.0;
		for(j = 0; j < PROVAS; j++){
			media[i] = media[i] + notas[i][j];
		}
		media[i] = media[i] / PROVAS;
	}
	printf("\n-------------------------------------\n");
	for(i = 0; i < ALUNOS; i++){
		printf("Aluno %i - Média = %.2f\n",i+1,media[i]);
	}
	return 0;
}
