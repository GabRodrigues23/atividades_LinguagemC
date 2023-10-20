#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	const int LIN = 4, COL = 6;
	int matriz[LIN][COL], qtd10_30 = 0, parMaior10 = 0, somaQuarta_Col = 0;
	float media;
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Linha %i na coluna %i: ",i+1,j+1);
			scanf("%i", &matriz[i][j]);
			// Quantidade de números entre 10 e 30
			if(matriz[i][j] > 10 && matriz[i][j] < 30){
				qtd10_30++;
			}
			// Soma dos pares maiores que 10
			if(matriz[i][j] % 2 == 0 && matriz[i][j] > 10){
				parMaior10+= matriz[i][j];
			}
			// Soma dos números da 4° coluna
			if(j == 3){
				somaQuarta_Col+= matriz[i][j];
			}
			// Soma dos números da 3° linha
			if(i == 2){
				media+= matriz[i][j];	
			}
		}
		printf("\n");
	}
	// Média dos números da 3° linha
	if(media > 0){
		media/= 6;
	} else{
		media = 0.0;
	}
	// Imprimir Resultados
	printf("\nQuantidade de números entre 10 e 30: %i \n", qtd10_30);
	printf("Soma dos pares maiores de 10: %i \n", parMaior10);
	printf("Soma da quarta coluna: %i \n",somaQuarta_Col);
	printf("Média da terceira linha: %.2f",media);
	return 0;
}
