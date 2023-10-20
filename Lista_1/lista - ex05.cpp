#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, qtd_primos = 0, div, soma_impar = 0;
	float media, qtd_par = 0, soma_par = 0;
	
	for(int i = 0; i < 10; i++){
		printf("Digite seu número: ");
		scanf("%i",&num);
		// Quantidade dos primos
		div = 0;
		for(int k = 1; k <= num; k++){
			if(num % k == 0){
				div++;
			}
		}
		if(div == 2){
			qtd_primos++;
		}
		// Média dos pares || Soma dos ímpares
		if(num % 2 == 0){
			soma_par+= num;
			qtd_par++;
		} else{
			soma_impar+= num;
		}
	}
	if(qtd_par > 0){
		media = soma_par / qtd_par;
	} else{
		media = 0;
	}
	printf("------------\n");
	printf("Quantidade de primos: %i\nSoma dos ímpares: %i\nMédia dos pares: %.1f",qtd_primos,soma_impar,media);
}
