#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[10][20], nome_menorP[20];
	float peso[10], media = 0, soma = 0;
	int menorPeso = 0;
	
	for(int i = 0; i < 10; i++){
		printf("Digite o %i° nome: ",i+1);
		scanf("%s",&nome[i]);
		printf("Digite o %i° peso: ",i+1);
		scanf("%f",&peso[i]);
	
		if(peso[i] < peso[menorPeso]){
			menorPeso = i;
		}

		soma+= peso[i];
	}

	media = soma / 10;
	printf("\n\nMenor Peso: %.2fkg - Nome: %s",peso[menorPeso], nome[menorPeso]);
	printf("\nA média de pesos é: %.2fkg",media);
	
	printf("\n\nPessoas com o peso menor que a média:");
	for(int i = 0; i < 10; i++){
		if(peso[i] < media){
			printf("\n%s - %.2fkg",nome[i],peso[i]);
		}
	}
	return 0;
}
