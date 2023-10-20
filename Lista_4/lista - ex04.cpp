#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	const int CORREDORES = 5, VOLTAS = 6;
	char nomes[CORREDORES][50];
	int tempos[CORREDORES][VOLTAS], menorTempo = tempos[0][0], corredorMelhorVolta = 0, melhorVolta = 0, somaTempos = 0;
	float mediaTempos_corredor[CORREDORES], mediaTempos_volta[VOLTAS];
	for(int i = 0; i < CORREDORES; i++){
		printf("Digite o nome do corredor %i: ", i+1);
		scanf("%s", nomes[i]);
		for(int j = 0; j < VOLTAS; j++){
			printf("Digite o tempo (em segundos) da volta %d para o corredor %s: ",j+1,nomes[i]);
			scanf("%i",&tempos[i][j]);
			
			if(tempos[i][j] < menorTempo){
			menorTempo = tempos[i][j];
			corredorMelhorVolta = i;
			melhorVolta = j; 
			somaTempos += tempos[i][j]; 
			somaTempos += tempos[i][j]; 
			}
		mediaTempos_volta[j] = somaTempos / CORREDORES; 
		mediaTempos_corredor[i] = somaTempos / VOLTAS; 
		}
	}
	printf("\nResultados da Prova de Kart:\n");
	printf("Melhor volta da prova:\n");
	printf("Corredor: %s\n", nomes[corredorMelhorVolta]);
	printf("Volta: %i\n", melhorVolta + 1);
	printf("\nMédia de tempo de cada corredor:\n");
	for(int i = 0; i < CORREDORES; i++) {
		printf("Corredor: %s\n", nomes[i]);
		printf("Média de tempo: %.2f segundos\n", mediaTempos_corredor[i]);
	}
	printf("\nMédia de tempo de cada volta:\n");
	for(int j = 0; j < VOLTAS; j++){
		printf("Volta: %i\n", j + 1);
		printf("Média de tempo: %.2f segundos\n", mediaTempos_volta[j]);
	}
	printf("\nMatriz de tempos:\n");
	for(int i = 0; i < CORREDORES; i++){
		for (int j = 0; j < VOLTAS; j++){
			printf("%i ", tempos[i][j]);
		}
		printf("\n");
	}
	return 0;
}
