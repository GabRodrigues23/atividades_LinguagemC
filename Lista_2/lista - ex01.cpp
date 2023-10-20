#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade[10], idade_menor, qtd_20e30 = 0, soma_20e30 = 0, acima_media = 0;
	float media, soma = 0;
	
	// definir os valores dentro do vetor -> idade
	for(int i = 0; i < 10; i++){
		printf("Digite sua idade: ");
		scanf("%i",&idade[i]);
	}
	idade_menor = idade[0];
	for(int i = 0; i < 5; i++){
		soma+= idade[i]; // soma de idades para definir a média
		// descobrir a menor idade digitada
		 if(idade[i] < idade_menor){
			idade_menor = idade[i];
		}
		// idades entre 20 e 30 anos
		if(idade[i] >= 20 && idade[i] <= 30){
			qtd_20e30++;
			soma_20e30+= idade[i];
		}
	}
	media = soma / 10; // encontrar a media
	// definir idades maiores que a média
	for(int i = 0; i < 10; i++){
		if(idade[i] > media){
			acima_media++;
		}
	}
	printf("\nMenor idade: %i\n",idade_menor);
	printf("Média das idades: %.1f\n",media);
	printf("Quantidade de pessoas entre 20 e 30 anos: %i\n",qtd_20e30);
	printf("Quantidade de pessoas com idades maiores que a média: %i",acima_media);
	return 0;	
}
