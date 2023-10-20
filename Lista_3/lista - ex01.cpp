#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	const int LIN = 3, COL = 5;
	int matriz[LIN][COL], menor, soma = 0, maior;
	float media = 0.0;
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("%i° Linha - %i° Coluna: ",i+1,j+1);
			scanf("%i",&matriz[i][j]);
		}
	}
	menor = matriz[0][0];
	maior = matriz[0][2];
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			// número menor
			if(matriz[i][j] < menor){
				menor = matriz[i][j];
			}
			// soma dos mult 3
			if(matriz[i][j] % 3 == 0){
				soma+= matriz[i][j];
			}
			// maior numero da 3° coluna
			if(matriz[i][2] > maior){
				maior = matriz[i][2];
			}
			// media
			media+= matriz[i][j];
		}
	}
	media/= 15;
	printf("\n-----------------------\n");
	printf("Menor número da matriz: %i\n",menor);
	printf("Soma dos múltiplos de 3: %i\n",soma);
	printf("Maior número da 3° coluna: %i\n",maior);
	printf("Média: %.2f",media);
	return 0;
}
