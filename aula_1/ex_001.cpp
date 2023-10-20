#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int n1, n2, prod;
	printf("Digite o 1° número: ");
	scanf("%i",&n1);
	printf("Digite o 2° número: ");
	scanf("%i",&n2);
	n1+= 10;
	n2+= 5;
	prod = n1 * n2;
	printf("1° número: %i\n2° número: %i\nProduto: %i",n1,n2,prod);
	return 0;
}
