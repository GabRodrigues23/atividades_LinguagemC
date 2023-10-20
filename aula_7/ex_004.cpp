#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	const int LIN = 3, COL = 5;
	int maior, qtdImpar,div, primos;
	float matriz[LIN][COL], mediaImpar;	
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Linha %i - Coluna %i: ",i+1,j+1);]
			scanf("%i",&matriz[i][j]);
			
			// Maior número da matriz
			if(matriz[0][0] || matriz[i][j] < maior){
				maior = matriz[i][j];
			}	
			
			// Primos
			div = 0;
			for(int k = 1; k <= matriz[i][j]; k++){
				if(matriz[i][j] % 2 == 0){
					div++;
				}
			}
			if(div == 2){
				primos[]
			}
			
			// Soma da média dos números ímpares
			if(matriz[i][j] % 2 != 0){
				mediaImpar+= matriz[i][j];
				qtdImpar++;
			}
			
		}
	}
}
