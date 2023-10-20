#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, divisor, soma_pares = 0, soma_primos = 0, num_10 = 0;
	
	for(int i = 0; i < 10; i++){
		printf("Digite seu número: ");
		scanf("%i",&num);
		// soma dos pares
		if(num % 2 == 0){
			soma_pares+= num;
		}
		// numeros menores que 10
		if(num < 10){
			num_10++;
		}
		// soma dos primos
		divisor = 0;
		for(int k = 1; k <= num; k++){
			if(num % k == 0){
				divisor++;
			}
		}
		if(divisor == 2){
			soma_primos+= num;
		}
	}
	printf("-----------------\n");
	printf("Soma dos pares: %i\nSoma dos primos: %i\nQuantidade de números menores que 10: %i",soma_pares,soma_primos,num_10);
	return 0;
}
