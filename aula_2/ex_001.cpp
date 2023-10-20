#include <stdio.h>
#include <locale>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite seu número: ");
	scanf("%i",&num);
	
	if (num % 2 == 0){
		printf("Esse é um número ímpar!\n");
	} else{
		printf("Esse não um número par!\n");
	}
	
	if (num >= 0){
		printf("Esse é um número positivo!\n");
	} else{
		printf("Esse é um número negativo!\n");
	}
	
	if (num % 5 == 0){
		printf("Esse é um número múltiplo de 5!\n");
	} else{
		printf("Esse não é um número múltiplo de 5!\n");
	}
	printf("Fim do Programa!");
	return 0;
}
