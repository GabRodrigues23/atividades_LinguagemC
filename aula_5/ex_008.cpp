#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"Portuguese");
	float vetorA[10], vetorB[10];
	int aux1, aux2, i, k;
	
	for(i = 0; i < 10; i++){ 
		printf("Digite %i° do vetor A: ",i+1);
		scanf("%f",&vetorA[i]);
	
		// Armazenar metade dos valores dos indices do vetorA no vetorB
		vetorB[i] = vetorA[i] / 2;
	}
	
	printf("\n--------------------\n");
	
	// VetorA -> Ordem Crescente
	for(i = 0; i < 9; i++){  
		for (k = i; k < 10; k++){ 
			if(vetorA[i] > vetorA[k]){
				aux1 = vetorA[i];
				vetorA[i] = vetorA[k];
				vetorA[k] = aux1;
			}
		}
	}
	printf("VetorA -> Ordem Crescente\n");
	for(i = 0; i < 10; i++){
		printf("[%.1f]",vetorA[i]);
	}
	
	printf("\n\n");
	
	// VetorB -> Ordem Decrescente
	for(i = 0; i < 9; i++){  
		for (k = i; k < 10; k++){ 
			if(vetorB[i] < vetorB[k]){
				aux2 = vetorB[i];
				vetorB[i] = vetorB[k];
				vetorB[k] = aux2;
			}
		}
	}
	printf("VetorB -> Ordem Decrescente\n");
	for(i = 0; i < 10; i++){
		printf("[%.1f]",vetorB[i]);
	}
	
	return 0;
}
