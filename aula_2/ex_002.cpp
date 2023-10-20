#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int n1, n2;
	printf("Digite o 1° número: ");
	scanf("%i",&n1);
	printf("Digite o 2° número: ");
	scanf("%i",&n2);
	if(n1 > n2) {
		printf("O número %i é maior que o número %i",n1,n2);
	} else{
		printf("O número %i é maior que o número %i",n2,n1);
	}
	return 0;
}
