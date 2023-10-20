#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nomes[5][50], maiorProd[50];
	float valores[5], media, maiorValor;
	int abaixoDe10, acimaMedia;
	
	for(int i = 0; i < 5; i++){
		printf("Nome do produto: ");
		scanf("%s",&nomes[i]);
		printf("Valor: R$");
		scanf("%f",&valores[i]);
		media+= valores[i];
	}
	media/= 5;
	for(int i = 0; i < 5; i++){
		if(valores[i] < 10){
			abaixoDe10++;
		}
		if(valores[i] > media){
			acimaMedia++;
		}	
		if(valores[i] > maiorValor){
			maiorValor = valores[i];
			strcpy(maiorProd, nomes[i]);
		}
	}
	printf("\n\nQuantidade de produtos abaixo de R$10: %i\n",abaixoDe10);
	printf("Média dos valores: %.2f\n",media);
	printf("Quantidade de produtos com valor acima da média: %i\n",acimaMedia);
	printf("Maior valor: %.2f - Produto: %s\n\n",maiorValor,maiorProd);
	printf("Produtos - Valores\n");
	for(int i = 0; i < 5; i++){
		printf("%s - R$%.2f\n",nomes[i],valores[i]);
	}
	return 0;
}
