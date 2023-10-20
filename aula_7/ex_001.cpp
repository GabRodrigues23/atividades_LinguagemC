#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	const int LIN = 3, COL = 4;
	int matriz[LIN][COL], pares = 0, somaImpar = 0, qtdMaior10 = 0, qtdMenor8 = 0, soma = 0;
	float media;
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Linha %i - Coluna %i: ",i+1,j+1);
			scanf("%i",&matriz[i][j]);
			
			// Quantidade de elementos pares | Soma dos elementos ímpares
			if(matriz[i][j] % 2 == 0){
				pares++;
			} else{
				somaImpar+= matriz[i][j];
			}
			
			// Quantidade dos elementos maiores que 10 | Quantidade dos elementos menores que 8
			if(matriz[i][j] > 10){
				qtdMaior10++;
			} else if(matriz[i][j] < 8){
				qtdMenor8++;
			}
			
			// Média | Soma dos elementos
			soma+= matriz[i][j];
		}
		printf("\n");
	}
	// Média
	media = soma / 12;
	
	// Imprimir Resultados
	printf("\n----------------------------\n");
	printf("Quantidade de elementos pares: %i\n",pares);
	printf("Soma dos Ímpares: %i\n",somaImpar);
	printf("Média de todos os elementos: %.2f\n",media);
	printf("Quantidade de elementos maiores que 10: %i\n",qtdMaior10);
	printf("Quantidade de elementos menores que 8: %i\n",qtdMenor8);
	printf("Soma Total: %i",soma);
	return 0;
}
