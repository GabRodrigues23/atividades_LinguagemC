#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	const int ALUNO = 5, NOTA = 4;
	char nome[ALUNO][50], nome_maiorMedia[50];
	float notas[ALUNO][NOTA], media[ALUNO], maiorMedia = 0.0;
	
	for(int i = 0; i < ALUNO; i++){
		printf("Nome do Aluno: ");
		scanf("%s", &nome[i]);
		
		for(int j = 0; j < NOTA; j++){
			printf("Nota %i: ",j+1);
			scanf("%f", &notas[i][j]);
			// Soma Média
			media[i] += notas[i][j];
		}
		// Média
		media[i]/=4;
		// Maior Média e Aluno que obteve
		if(media[i] > maiorMedia){
			maiorMedia = media[i];
			strcpy(nome_maiorMedia, nome[i]);
		}
		
		printf("\n");
	}
	// Imprimir Resultados
	printf("O aluno %s obteve a maior média: %.2f \n",nome_maiorMedia,maiorMedia);
	// Relatório
	printf("\nRelatório das notas\n");
	printf("Nome - Média \n");
	for(int i = 0; i < ALUNO; i++){
		printf("%s - %.2f \n",nome[i],media[i]);
	}
}
