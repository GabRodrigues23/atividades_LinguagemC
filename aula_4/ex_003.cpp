#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade, maior_idade, menor_idade, vez_maior = 1, vez_menor = 1;
	float media, soma, qtd = 0;
	for(int i = 0; i < 5; i++){
		printf("Digite sua idade: ");
		scanf("%i",&idade);
		// maior idade
		if(vez_maior == 1){
			maior_idade = idade;
		} else if(idade > maior_idade){
		maior_idade = idade;
		}
		vez_maior++;
		//menor idade
		if(vez_menor == 1){
			menor_idade = idade;
		} else if(idade < menor_idade){
			menor_idade = idade;
		}
		vez_menor++;
		// media
		soma+= idade;
		qtd++;
	}
	media = soma / qtd;
	printf("---------------\n");
	printf("Maior idade: %i\nMenor idade: %i\nMédia das idades: %.1f",maior_idade,menor_idade,media);
	return 0;
}
