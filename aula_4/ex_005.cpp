/*
5) Faça um programa que receba a quantidade do prod0uto e o valor unitário do produto. Para finalizar a entrada dos dados deve ser digitado "N" ou "n" na pergunta "Deseja continuar? s/n"
Calcule e mostre na tela:
- O valor total da compra: a soma de todos (qtd * valor)
- O menor valor
- A média de valores
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int qtd, vez = 1;
	float valor, valor_total, valor_final = 0, qtd_total = 0, menor = 0, media = 0;
	char resp;
	resp == 'S';
	do{
		printf("Digite o valor do produto: ");
		scanf("%f",&valor);
		printf("Digite a quantidade do produto: ");
		scanf("%i",&qtd);
		// Valor menor
		if(vez == 1){
			menor = valor;
		} else if(valor < menor){
			menor = valor;
		}
		// Valor total da compra / Quantidade total de produtos 
		valor_total = valor * qtd;
		valor_final+= valor_total;
		qtd_total+= qtd;
		// Continuar programa ou não
		printf("Deseja continuar? (S/N): ");
		scanf("%sn",&resp);	
	} while(resp == 'S');
	// Media
	if(qtd > 0){
	media = valor_final / qtd_total;
	}
	printf("Valor da compra: R$%.2f\nMenor valor: R$%.2f\nMédia do valor unitário: R$%.2f",valor_final,menor,media);
	return 0;
}
