#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int n1, n2;
	printf("Digite o 1� n�mero: ");
	scanf("%i",&n1);
	printf("Digite o 2� n�mero: ");
	scanf("%i",&n2);
	if(n1 > n2) {
		printf("O n�mero %i � maior que o n�mero %i",n1,n2);
	} else{
		printf("O n�mero %i � maior que o n�mero %i",n2,n1);
	}
	return 0;
}
