#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, menor, soma_par = 0, qtd_impar = 0, vez = 1, cont = 1;
	float media, soma_media = 0, qtd_media = 0;
	
	for(int i = 0; i < 10; i++){
		printf("Digite um n�mero: ");
		scanf("%i",&num);
		cont++;
		// N�mero menor
		if(vez == 1){
			menor = num;
		} else if(num < menor){
			menor = num;
		}
		vez++;
		// Soma dos pares maiores que 10 | Quantidade de �mpares 
		if(num % 2 == 0 && num > 10){
			soma_par+= num;
		} else if(num % 2 != 0){
			qtd_impar++;
		}
		// M�dia dos n�meros maiores que 20
		if(num > 20){
			soma_media+= num;
			qtd_media++;
		}	
	}
	// Continua��o da m�dia dos n�meros pares maiores que 20
	if(soma_media > 0){
		media = soma_media/qtd_media;
	} else{
		media = 0;
	}
	printf("-----------------------\nMenor N�mero: %i\nSoma dos Pares Maiores que 10: %i\nQuantidade de �mpares: %i\nM�dia dos N�meros maiores que 20: %.2f",menor,soma_par,qtd_impar,media);
	return 0;
}
