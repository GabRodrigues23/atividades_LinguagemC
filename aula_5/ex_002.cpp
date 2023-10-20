#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	const int PESSOAS = 10;
	int idade[PESSOAS], idadeMaior50 = 0, media = 0, qtdMenor = 0, percMaior30 = 0;

	for(int i = 0; i < PESSOAS; i++){
		// Armazenar Valores
		printf("Digite a %i° idade: ",i+1);
		scanf("%i",&idade[i]);
		
		// Quantidade de pessoas com mais de 50 anos
		if(idade[i] > 50){
			idadeMaior50++;
		}		
		
		// Soma da Média
		media+= idade[i];
		
		// Percentagem de pessoas com idade superior a 30 anos
		if(idade[i] > 30){
			percMaior30++;
		}
		
	}
	// Média
	media/= 10;
		
	// Percentual menor que 30 anos
	if(percMaior30 > 0){
		percMaior30 = (percMaior30 * 100) / 10;
	} else{
		percMaior30 = 0;
	}
	
	// Quantidade de pessoas com idade menor que a média
	for(int i = 0; i < PESSOAS; i++){
		if(idade[i] < media){
			qtdMenor++;
		}
	}
	
	// Imprimir os resultados
	printf("\n--------------------------\n");
	printf("Quantidade de pessoas com idade superior a 50 anos: %i\n",idadeMaior50);
	printf("Média das idades: %i\n",media);
	printf("Quantidade de pessoas com idade menor que a média: %i\n",qtdMenor);
	printf("Percentagem de pessoas com mais de 30 anos: %i%%",percMaior30);
	return 0;
}
