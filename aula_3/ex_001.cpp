#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, menor, num_3 = 0, num_50 = 0, cont = 1;
	float media, soma_2 = 0, par = 0;
	printf("Digite o seu número: ");
	scanf("%i",&num);
	while(num > 0){
		if(num % 3 == 0){
			num_3+= num;
		}
		if(num % 2 == 0){
			soma_2+= num;
			par++;
		}
		if(num > 50 && num % 5 == 0){
			num_50++;
		} else{
			num_50 = num_50;
		}	
		if(cont == 1){
			menor = num;
		} else if(num < menor){
			menor = num;
		}
		cont++;	
		printf("Digite o seu número: ");
		scanf("%i",&num);	
	}
	if(par > 0){
	media = soma_2/par;
	}
	printf("\n-------------------\n");
	printf("Soma dos Múltiplos de 3: %i\nMédia dos Pares: %.1f\nMenor Número: %i\nMúltiplos de 5 e Maiores que 50: %i\n",num_3,media,menor,num_50);
	return 0;	
}
