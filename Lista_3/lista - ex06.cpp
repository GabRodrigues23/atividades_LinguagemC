#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	const int COL = 3;
	int qtdFilhos15_25 = 0, qtd20_30 = 0;
	int qtd = 0;
	printf("Digite a quantidade de pessoas que foram entrevistadas: ");
	scanf("%i",&qtd);
	
	float matriz[qtd][COL], mediaSalario = 0.0, mediaFilhos = 0.0, mediaSalario20_30 = 0.0;

	for(int i = 0; i < qtd; i++){
		printf("\nDigite o salário do %i° entrevistado: R$",i+1);
		scanf("%f",&matriz[i][0]);
		printf("Digite a idade do %i° entrevistado: ",i+1);
		scanf("%f",&matriz[i][1]);
		printf("Digite o número de filhos do %i° entrevistado: ",i+1);
		scanf("%f",&matriz[i][2]);
	
		mediaSalario+= matriz[i][0];
		mediaFilhos+= matriz[i][2];
		if(matriz[i][1] > 15 && matriz[i][1] < 25){
			qtdFilhos15_25+= matriz[i][2];
		}	
		if(matriz[i][1] > 20 && matriz[i][1] < 30){
			mediaSalario20_30+= matriz[i][0];
			qtd20_30++;
		}
	}
	if(mediaSalario > 0){
		mediaSalario/= qtd;
	} else{
		mediaSalario = 0;
	}
	if(mediaFilhos > 0){
		mediaFilhos/= qtd;
	} else{
		mediaFilhos = 0;
	}
	if(mediaSalario20_30 > 0){
		mediaSalario20_30/= qtd20_30;
	} else{
		mediaSalario20_30 = 0;
	}
	printf("\nMédia de Salários: R$%.2f\n",mediaSalario);
	printf("Média do número de Filhos: %.1f\n",mediaFilhos);
	printf("Quantidade de filhos de pessoas entre 15 e 25 anos: %i\n",qtdFilhos15_25);
	printf("Média de Salários de pessoas entre 20 e 30 anos: R$%.2f",mediaSalario20_30);

	printf("\nSalário		Idade		N° Filhos\n");
	for(int i = 0; i < qtd; i++){
		for(int j = 0; j < COL; j++){
			printf("%.2f		",matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}
