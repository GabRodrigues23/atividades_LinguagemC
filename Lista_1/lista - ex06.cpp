#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float x, fat = 1;
	
	for(int i = 0; i < 10; i++){
	printf("Digite um número: ");
	scanf("%f",&x);
	fat = 1;
	
		while(x > 1){
			// Fatorial = numero * (numero - 1) | numero - 1
			// Quando x <= 1 o programa deverá parar
			fat*= x;
			x--;
		}
		printf("Fatorial: %.0f\n",fat);
	}
	return 0;
}
