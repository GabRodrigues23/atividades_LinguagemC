#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade, vez = 1, maior_peso = 0, qtd_70 = 0;
	float peso, media_idade = 0, qtd_idade = 0, soma_idade = 0, media_30a40 = 0, soma_30a40 = 0, qtd_30a40 = 0;
	
	for(int i = 0; i < 10; i++){
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	printf("Digite seu peso: ");
	scanf("%f",&peso);
		// média das idades
		soma_idade+= idade;
		qtd_idade++;
		// maior peso
		if(vez == 1){
			maior_peso = peso;
		} else if(peso > maior_peso){
			maior_peso = peso;
		}
		vez++;
		// média de idade entre 30 e 40 anos
		if(idade >= 30 && idade <= 40){
			soma_30a40+= idade;
			qtd_30a40++;
		}
		// quantidade de pessoas com peso acima de 70kg
		if(peso > 70){
			qtd_70++;
		}
	}
	// média de idades
	media_idade = soma_idade / qtd_idade;
	// média de idades entre 30 e 40 anos
	if(qtd_30a40 > 0){
		media_30a40 = soma_30a40 / qtd_30a40;
	} else{
		media_30a40 = 0;
	}
	printf("-----------------\n");
	printf("Média das idades: %.1f\nMaior peso: %i\nMédia de pessoas com idade entre 30 a 40 anos: %.1f\nQuantidade de pessoas acima dos 70kg: %i",media_idade,maior_peso,media_30a40,qtd_70);
	return 0;
}
