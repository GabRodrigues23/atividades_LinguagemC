#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[5][20];
	float peso[5], altura[5], imc;
	
	for(int i = 0; i < 5; i++){
		printf("Digite o %i° nome: ",i+1);
		scanf("%s",&nome[i]);
		printf("Digite o peso: ");
		scanf("%f",&peso[i]);
		printf("Digite a altura: ");
		scanf("%f",&altura[i]);
		printf("\n");
		
	}
	
	printf("------------------------------------");
	for(int i = 0; i < 5; i++){
		
		altura[i]/= 100;
		imc = peso[i] / (altura[i] * altura[i]);
		printf("\nNome: %s	|	IMC: %.1f",nome[i],imc);
	}
	return 0;
}
