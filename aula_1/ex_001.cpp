#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int n1, n2, prod;
	printf("Digite o 1� n�mero: ");
	scanf("%i",&n1);
	printf("Digite o 2� n�mero: ");
	scanf("%i",&n2);
	n1+= 10;
	n2+= 5;
	prod = n1 * n2;
	printf("1� n�mero: %i\n2� n�mero: %i\nProduto: %i",n1,n2,prod);
	return 0;
}
