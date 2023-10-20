#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int vet[5], novo_vet[5], mult, num_maior, vez = 1;
	// definir os números do vetor
	for(int i = 0; i < 5; i++){
		printf("Digite os números do vetor: ");
		scanf("%i",&vet[i]);
	}
	for(int i = 0; i < 5; i++){
		// descobrir o maior número do vetor
		if(vez == 1){
			num_maior = vet[i];
		} else if(vet[i] > num_maior){
			num_maior = vet[i];
		}
		vez++;
	}
	printf(" -----------------\n| Maior número: %i |\n -----------------",num_maior);
	
	for(int i = 0; i < 5; i++){
		// multiplicar todos os numeros do vetor pelo maior numero e armazenar no novo vetor
		novo_vet[i] = vet[i] * num_maior;
		printf("\nNovo Vetor %i° posição: %i",i+1,novo_vet[i]);
	}
	return 0;
}
