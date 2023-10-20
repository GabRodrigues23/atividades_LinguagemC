#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int vetor1[10], vetor2[10];
	
	for(int i = 0; i < 10; i++){
		printf("Digite os números do 1° vetor: ");
		scanf("%i",&vetor1[i]);
		
		// Comparar os valores do vetor1 e vetor2	
		if(vetor1[i] < 10){
			vetor2[i] = 0;
		} else{
			vetor2[i] = 1;
		}
	}
	
	printf("\n-----------------------------------\n");
	
	// Imprimir vetor1
	printf("\nVetor1:\n");
	for(int i = 0; i < 10; i++){
		printf("[%i]", vetor1[i]);
	}
	
	// Imprimir vetor2
	printf("\nVetor2:\n");
	for(int i = 0; i < 10; i++){
		printf("[%i]", vetor2[i]);
	}
	return 0;
}
