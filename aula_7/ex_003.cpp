#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	const int ALUNO = 5, NOTA = 4;
	float matriz[ALUNO][NOTA], media[ALUNO] = {0};
	char nome[ALUNO][20];
	
	for(int i = 0; i < ALUNO; i++){
		printf("Aluno: ");
		scanf("%s",&nome[i]);
		for(int j = 0; j < NOTA; j++){
			printf("Nota %i: ",j+1);
			scanf("%i",&matriz[i][j]);
	
			media[i]+= matriz[i][j];
		}
		printf("\n");
	}
	
	printf("\n--------------------------------\n");
	printf("Médias \n");
	for(int i = 0; i < ALUNO; i++){
		if(media[i] > 0){
			media[i]/= 4;
		} else{
			media[i] = 0;
		}
		
		printf("%s: %.2f\n",nome[i], media[i]);
	}
	return 0;
}
