#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	float soma_idade, qtd_idade, media_idade;
	printf("Digite sua idade: ");
	scanf("%i",&idade);

	while(idade > 0){
		soma_idade+= idade;
		qtd_idade++;
		printf("Digite sua idade: ");
		scanf("%i",&idade);
	}
	if(qtd_idade > 0){
		media_idade = soma_idade / qtd_idade;
	} else{
		media_idade = 0;
	}
	printf("A média de idade é: %.1f",media_idade);
	return 0;
}
