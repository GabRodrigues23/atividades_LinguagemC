#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num, soma_primos, div;
	float media, qtd = 0, mult_3 = 0;
	for(int i = 0; i < 10; i++){
		printf("Digite um n�mero: ");
		scanf("%i",&num);
		// primos
		div = 0;
		for(int k = 1; k <= num; k++){
			if(num % k == 0){
				div++;
			}
		}
		if(div == 2){
			soma_primos+=num;
		}
		// m�dia dos multiplos de 3 e maiores que 10
		if(num % 3 == 0 && num > 10){
			mult_3+=num;
			qtd++;
		}
	}
	// cont. media dos multiplos de 3 e maiores que 10
	if(qtd > 0){
		media = mult_3 / qtd;
	} else{
		media = 0;
	}
	printf("-----------------\n");
	printf("Soma dos primos: %i\nM�dia dos n�meros multiplos de 3 e maiores que 10: %.1f",soma_primos,media);
}
