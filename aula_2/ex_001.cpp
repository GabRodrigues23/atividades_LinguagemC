#include <stdio.h>
#include <locale>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite seu n�mero: ");
	scanf("%i",&num);
	
	if (num % 2 == 0){
		printf("Esse � um n�mero �mpar!\n");
	} else{
		printf("Esse n�o um n�mero par!\n");
	}
	
	if (num >= 0){
		printf("Esse � um n�mero positivo!\n");
	} else{
		printf("Esse � um n�mero negativo!\n");
	}
	
	if (num % 5 == 0){
		printf("Esse � um n�mero m�ltiplo de 5!\n");
	} else{
		printf("Esse n�o � um n�mero m�ltiplo de 5!\n");
	}
	printf("Fim do Programa!");
	return 0;
}
