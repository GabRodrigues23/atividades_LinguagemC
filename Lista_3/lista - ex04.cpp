#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	const int LIN = 4, COL = 3;
	int matriz[LIN][COL], soma_2a4 = 0, maiorNum = 0, div, somaPrimos = 0;
	float media;
	
	for(int i = 0; i < LIN; i++){
		for(int k = 0; k < COL; k ++){
			printf("Linha %i, Coluna %i: ", i+1, k+1);
			scanf("%i", &matriz[i][k]);
			// Soma dos elementos entre a 2° e 4° linha
			if(i == 1 || i == 3){
				soma_2a4 += matriz[i][k];
			}
			// Soma dos Primos
			div = 0;
			for(int j = 1; j <= matriz[i][k]; j++){
				if(matriz[i][k] % j == 0){
					div++;
				}
			}
			if(div == 2){
				somaPrimos+= matriz[i][k];
			}
			// Maior número da matriz
			if(matriz[i][k] > maiorNum || (k==0 && i==0)){
				maiorNum = matriz[i][k];
			}
			// Soma Média		
			media+= matriz[i][k];
		}
		printf("\n");
	}
	// Média
	media/= 12;
	
	printf("\nA soma da linha 2 e 4: %i \n", soma_2a4);
	printf("Soma dos números primos: %i \n", somaPrimos);
	printf("Média da matriz: %.2f \n", media);
	printf("Maior número da matriz: %i", maiorNum);
	return 0;
}
