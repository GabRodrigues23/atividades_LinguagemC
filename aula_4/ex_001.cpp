#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade, qtd_90;
	float peso, media_idade = 0, soma_idade = 0, qtd_idade = 0;

	for(int i = 0; i < 10; i++){
		printf("Digite sua idade: ");
		scanf("%i",&idade);
		printf("Digite seu peso: ");
		scanf("%f",&peso);
		
		if(peso > 90){
			qtd_90++;
		}
		
		soma_idade+= idade;
		qtd_idade++;
	}
	media_idade = soma_idade / qtd_idade;
	printf("-----------------");
	printf("Quantidade de pessoas com mais de 90kg: %i\nMédia de idades: %.1f",qtd_90,media_idade);
	return 0;
}
