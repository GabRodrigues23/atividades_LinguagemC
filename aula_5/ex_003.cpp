#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade[10], qtd_50 = 0;
	float altura[10], peso[10], media, qtd_10e20, altura_10e20, perc, qtd_perc;
	
	for(int i = 0; i < 10; i++){
		printf("Digite sua idade: ");
		scanf("%i",&idade[i]);
		printf("Digite sua altura: ");
		scanf("%f",&altura[i]);
		printf("Digite seu peso: ");
		scanf("%f",&peso[i]);
	}
	
	for(int i = 0; i < 10; i ++){
		if(idade[i] > 50){
			qtd_50++;
		}
		if(idade[i] > 10 && idade[i] < 20){
			qtd_10e20++;
			altura_10e20+= altura[i];
		}
		if(peso[i] < 40){
			qtd_perc++;
		}
	}
	if(qtd_10e20 > 0){
		media = altura_10e20 / qtd_10e20;
	}
	perc = (qtd_perc / 10) * 100;
	printf("\n Quantidade de pessoas com mais de 50 anos: %i",qtd_50);
	printf("\n Média das alturas: %.2f",altura_10e20);
	printf("\n %.2f%% de pessoas com peso inferior a 40kg",perc);
	return 0;
}
