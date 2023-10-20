#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	float compra, desc;
	printf("Qual o total da sua compra: ");
	scanf("%f",&compra);
	if(compra < 30){
		printf("Você não tem direito ao desconto!");
	} else if(compra > 30 && compra < 100){
		desc = compra - (compra * 0.05);
		printf("O valor da sua compra é de R$%.2f.\nPortanto você tem direito a 5%% de Desconto.\nVocê pagará apenas R$%.2f !!!",compra,desc);
	} else if(compra > 100 && compra < 250){
		desc = compra - (compra * 0.10);
		printf("O valor da sua compra é de R$%.2f.\nPortanto você tem direito a 10%% de Desconto.\nVocê pagará apenas R$%.2f !!!",compra,desc);
	} else{
		desc = compra - (compra * 0.15);
		printf("O valor da sua compra é de R$%.2f.\nPortanto você tem direito a 15%% de Desconto.\nVocê pagará apenas R$%.2f !!!",compra,desc);
	}
	return 0;
}
