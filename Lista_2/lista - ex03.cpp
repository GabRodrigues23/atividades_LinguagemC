#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int vetA[5], vetB[5], vetC[10], div, perfeito = 0;
	// armazena os valores do 1° vetor -> vetA
	for(int i = 0; i < 5; i++){
		printf("Digite os números do 1° vetor: ");
		scanf("%i",&vetA[i]);
	}
	printf("\n------------------------------------\n");
	// armazena os valores do 2° vetor -> vetB
	for(int i = 0; i < 5; i++){
	printf("Digite os números do 2° vetor: ");
	scanf("%i",&vetB[i]);
	}
	// entrelaça os valores do 1° e 2° vetor para o 3° vetor -> vetC
	int k = 0;
	for(int i = 0; i < 5; i++){
		vetC[k] = vetA[i];
		k++;
		vetC[k] = vetB[i];
		k++;
	}
	// encontra os números perfeitos
	for(int i = 0; i < vetC[i]; i++){
		// encontrar os divisores
		div = 0;
		for(int k = 1; k < vetC[i]; k++){
			if(vetC[i] % k == 0){
				div+= k;
			}
		}
		// comparar a soma dos divisores com o número do vetor
		if(vetC[i] == div){
			perfeito++;
		}
	}
	printf("\nA quantidade de números perfeitos dentro do vetor é: %i",perfeito);
	return 0;
}
