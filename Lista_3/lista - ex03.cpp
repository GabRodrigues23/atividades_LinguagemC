#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	const int VEND = 5, MES = 3;
	float valores[VEND][MES], totalVend[VEND] = {0}, maiorVenda, menorVenda, total[MES] = {0};
	char nomes[5][50];
	
	for(int i = 0; i < VEND; i++){
		printf("Digite o nome do vendedor: ");
		scanf("%s", &nomes[i]); 
		for(int j = 0; j < MES; j++){
			printf("Venda no mês %i: R$", j+1);
			scanf("%f", &valores[i][j]);
			// Soma Total Vendido por Vendedor | Total Vendido no Mês
			total[j]+= valores[i][j];
			totalVend[i]+= valores[i][j];
			// Maior Venda
			if(valores[i][0] > maiorVenda || (j == 0 && i == 0)){
				maiorVenda = valores[i][0];
			}
			// Menor Venda
			menorVenda = valores[0][2];
			if(valores[i][j] < menorVenda && j == 2){
				menorVenda = valores[i][j];
			}
		}
		printf("\n");
	}
	/* Imprimir Resultados
	Valor Vendido por Vendedor | Maior Venda | Menor Venda | Total Vendido por Mês */
	printf("Valor vendido por vendedor: \n");
	for(int i = 0; i < VEND; i++){
		printf("    Nome: %s, valor: R$ %.2f \n", nomes[i], totalVend[i]);
	}
	
	printf("\nMaior venda do mês 1: R$%.2f \n", maiorVenda);
	printf("Menor venda do mês 3: R$%.2f \n", menorVenda);
	printf("\nTotal vendido por mês: \n");
	int i = 1;
	for(int j = 0; j < MES; j++){
		printf("    Mês %i: %.2f \n", i, total[j]);
		i++;
	}
	return 0;
}
