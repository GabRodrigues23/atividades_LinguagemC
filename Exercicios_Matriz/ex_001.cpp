#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	const int LIN = 5, COL = 3;
	int matriz[LIN][COL], mult = 0, somaPares = 0;
	float media = 0.0;
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Linha %i - Coluna %i: ",i+1,j+1);
			scanf("%i",&matriz[i][j]);
		}
		printf("\n");
	}
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			// multiplos de 3
			if(matriz[i][j] % 3 == 0){
				mult++;
			}
			// soma dos pares maiores que 10
			if(matriz[i][j] % 2 == 0 && matriz[i][j] > 10){
				somaPares+= matriz[i][j];
			}
			// media
			media+= matriz[i][j];
		}
	}
	media/= 15;
	
	printf("\n-------------------------\n");
	printf("Quantidade de números multiplos de 3: %i\n",mult);
	printf("A soma dos números pares maiores que 10: %i\n",somaPares);
	printf("Média: %.2f",media);
	return 0;
}
