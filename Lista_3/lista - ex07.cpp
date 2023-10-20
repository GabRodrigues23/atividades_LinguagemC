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
			// Soma M�dia
			media[i] += notas[i][j];
		}
		// M�dia
		media[i]/=4;
		// Maior M�dia e Aluno que obteve
		if(media[i] > maiorMedia){
			maiorMedia = media[i];
			strcpy(nome_maiorMedia, nome[i]);
		}
		
		printf("\n");
	}
	// Imprimir Resultados
	printf("O aluno %s obteve a maior m�dia: %.2f \n",nome_maiorMedia,maiorMedia);
	// Relat�rio
	printf("\nRelat�rio das notas\n");
	printf("Nome - M�dia \n");
	for(int i = 0; i < ALUNO; i++){
		printf("%s - %.2f \n",nome[i],media[i]);
	}
}
