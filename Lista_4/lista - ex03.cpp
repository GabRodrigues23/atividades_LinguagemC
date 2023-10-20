#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	const int TIMES = 5, JOGADORES = 11;
	int idades[TIMES][JOGADORES], total = TIMES * JOGADORES, menor18 = 0, maior80KG = 0;
	float pesos[TIMES][JOGADORES], mediaIdades[TIMES], porcMaior80KG = 0.0;
	
	for (int i = 0; i < TIMES; i++) {
		printf("Time %i\n", i+1);
		for (int j = 0; j < JOGADORES; j++) {
			printf("Digite a idade do jogador %i: ",j+1);
			scanf("%i", &idades[i][j]);
			printf("Digite o peso (em kg) do jogador %i: ",j+1);
			scanf("%f", &pesos[i][j]);
			if(idades[i][j] < 18){ 
				menor18++; 
			}
			if(pesos[i][j] > 80){ 
				maior80KG++;
			}
		}
		printf("\n");
	}
	
	for (int i = 0; i < TIMES; i++) {
		int somaIdades = 0;
		for (int j = 0; j < JOGADORES; j++) {
			somaIdades += idades[i][j]; 
		}
		mediaIdades[i] = somaIdades / JOGADORES; 
	}
	
	porcMaior80KG = maior80KG / total * 100;
	
	printf("\n---------------------------\nRelatório:\n");
	printf("Quantidade de jogadores com menos de 18 anos: %i\n",menor18);
	printf("Média das idades dos jogadores de cada time:\n");
	for (int i = 0; i < TIMES; i++) {
		printf("Time %d: %.1f anos\n",i+1,mediaIdades[i]);
	}
	printf("Porcentagem de jogadores com mais de 80 quilos: %.1f%%\n",porcMaior80KG);
	return 0;
}
