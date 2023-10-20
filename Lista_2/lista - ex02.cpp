#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char cores[10][20], pesquisa[20];
	int i, naoEncontrada;
	
	for(i = 0; i < 10; i++){
		printf("Digite a %i° cor do vetor: ",i+1);
		scanf("%s",&cores[i]);
	}
	do{
		printf("\n\nPesquise uma cor no vetor ou finalize a busca: ");
		scanf("%s",&pesquisa);
		if(strcmp(pesquisa, "FIM") == 0){
			printf("\nFim do Programa...");
			break;
		}
		naoEncontrada = 0;
		for(i = 0; i < 10; i++){
			if(strcmp(pesquisa, cores[i]) == 0){
				printf("A cor %s está localizada na %i° posicão do vetor!",pesquisa, i+1);
				naoEncontrada = 0;
				break;	
			} else{
				naoEncontrada = 1;
			}
		}
		if(naoEncontrada == 1){
			printf("A cor %s não está presente no vetor!",pesquisa);
		}
	} while(1);
	return 0;
}
