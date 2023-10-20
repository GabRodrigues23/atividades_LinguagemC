#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade, maior_idade, qtd_90 = 0, vez = 1;
	float peso, maior_peso, media, soma, qtd;
	// le idade
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	while(idade > 0){	
		// le peso
		printf("Digite seu peso: ");
		scanf("%f", &peso);
		// maior idade
		if(vez == 1){
			maior_idade = idade;
			maior_peso = peso;
		} else if(idade > maior_idade){
			maior_idade = idade;
			maior_peso = peso;
		}
		vez++;
		// mais que 90kg | media de idade com menos de 50kg
		if(peso > 90){
			qtd_90++;
		} else if(peso < 50){
			soma+= idade;
			qtd++;
		}
		// le idade
		printf("Digite sua idade: ");
		scanf("%i",&idade);	
		}
	if(qtd > 0){
		media = soma / qtd;
	} else{
		media = 0;
	}
	printf("---------------\n");
	printf("Maior idade e maior peso: %i anos, %.1fkg\nQuantidade de pessoas com mais de 90kg: %i\nMédia de idade de pessoas com menos de 50kg: %.2f anos",maior_idade,maior_peso,qtd_90,media);
}
