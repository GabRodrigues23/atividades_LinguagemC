#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float num[10], media, qtd = 0, soma = 0, vez_1 = 1, maior_num, vez_2 = 1, menor_num;
	
	for(int i = 0; i < 10; i++){
		printf("Digite um número: ");
		scanf("%f",&num[i]);
	}
	
	for(int i = 0; i < 10; i++){
		soma+= num[i];
		
		if(vez_1 == 1){
			maior_num = num[i];
		} else if(num[i] > maior_num){
			maior_num = num[i];
		}
		vez_1++;
		
		if(vez_2 == 1){
			menor_num = num[i];
		} else if(num[i] < menor_num){
			menor_num = num[i];
		}
		vez_2++;
	}
	media = soma / 10;
	printf("\n Média dos números: %.1f",media);
	printf("\n Maior número: %.1f",maior_num);
	printf("\n Menor número: %.1f",menor_num);
	return 0;
}
