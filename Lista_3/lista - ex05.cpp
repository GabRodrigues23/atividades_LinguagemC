#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	const int LIN = 6, COL = 10;
	int matriz[LIN][COL], soma[COL] = {0}, i, k;
	for(k = 0; k < COL; k++){
		for(i = 0; i < LIN; i++){
			printf("Coluna %i da Linha %i: ", k+1, i+1);
			scanf("%i", &matriz[i][k]);
			// Soma das linhas da matriz
			soma[k] += matriz[i][k];
		}
		printf("\n");
	}
	i = 1;
	for(k = 0; k < COL; k++){
		// Adicionar a soma na 7° linha
		matriz[7][k] = soma[k];
		printf("A soma da %i° coluna: %i\n", i, matriz[7][k]);
		i++;
	}	
	return 0;
}
