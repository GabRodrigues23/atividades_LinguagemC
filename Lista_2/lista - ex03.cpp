#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int vetA[5], vetB[5], vetC[10], div, perfeito = 0;
	// armazena os valores do 1� vetor -> vetA
	for(int i = 0; i < 5; i++){
		printf("Digite os n�meros do 1� vetor: ");
		scanf("%i",&vetA[i]);
	}
	printf("\n------------------------------------\n");
	// armazena os valores do 2� vetor -> vetB
	for(int i = 0; i < 5; i++){
	printf("Digite os n�meros do 2� vetor: ");
	scanf("%i",&vetB[i]);
	}
	// entrela�a os valores do 1� e 2� vetor para o 3� vetor -> vetC
	int k = 0;
	for(int i = 0; i < 5; i++){
		vetC[k] = vetA[i];
		k++;
		vetC[k] = vetB[i];
		k++;
	}
	// encontra os n�meros perfeitos
	for(int i = 0; i < vetC[i]; i++){
		// encontrar os divisores
		div = 0;
		for(int k = 1; k < vetC[i]; k++){
			if(vetC[i] % k == 0){
				div+= k;
			}
		}
		// comparar a soma dos divisores com o n�mero do vetor
		if(vetC[i] == div){
			perfeito++;
		}
	}
	printf("\nA quantidade de n�meros perfeitos dentro do vetor �: %i",perfeito);
	return 0;
}
