#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nomes[5][20], nomeMenor[20], nomeMaior[20];
	int idades[5], menorIdade, qtdMenor40 = 0;
	float alturas[5], maiorAltura, mediaAltura = 0, mediaIdade = 0;
	
	for(int i = 0; i < 5; i++){
		printf("Digite o nome: ");
		scanf("%s",&nomes[i]);
		printf("Digite a idade: ");
		scanf("%i",&idades[i]);
		printf("Digite a altura (em cm): ");
		scanf("%f",&alturas[i]);
		printf("\n--------------------------\n");
		
		// Soma idade
		mediaIdade+= idades[i];
	}
	
	menorIdade = idades[0];
	maiorAltura = alturas[0];
	
	for(int i = 0; i < 5; i++){
		// Menor idade
		if(idades[i] < menorIdade){
			menorIdade = idades[i];
			strcpy(nomeMenor, nomes[i]);
		}
		// Maior altura
		if(alturas[i] > maiorAltura){
			maiorAltura = alturas[i] / 100;
			strcpy(nomeMaior, nomes[i]);
		}
		// Soma altura
		if(idades[i] >= 12 && idades[i] <= 20){
			mediaAltura+= alturas[i];
		}
		// Quantidade de pessoas com menos que 40 anos
		if(idades[i] < 40){
			qtdMenor40++;
		}
	}
	
	// Média altura/idade | conversão altura 
	if(mediaAltura > 0){
		mediaAltura/= 5;
	}
	
	mediaIdade/= 5;
	mediaAltura/= 100;

	printf("\n--------------------------\n");
	printf("A menor idade é de %i anos (%s)\n",menorIdade,nomeMenor);
	printf("A maior altura é de %.1fm (%s)\n",maiorAltura,nomeMaior);
	printf("A média de altura de pessoas entre 12 e 20 anos é de: %.1fm\n",mediaAltura);
	printf("A média das idades é: %.1f anos\n",mediaIdade);
	printf("A quantidade de pessoas com idade inferior a 40 anos é: %i\n",qtdMenor40);
	printf("\n--------------------------\n");

	// Relatório 
	printf("Nome - Idade - Altura\n");
	for(int i = 0; i < 5; i++){
		printf("%s - %i anos - %.2fm\n",nomes[i],idades[i],alturas[i]/100);	
	}
	
	return 0;
}
