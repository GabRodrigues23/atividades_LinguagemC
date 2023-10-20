#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade, idade_40, maior_idade, vez = 1, qtd_2000 = 0, cont = 0;
	float sal, idade_5000, media_5000, pessoas_5000, media_40 = 0, maior_sal = 0;
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	printf("Digite seu salário: ");
	scanf("%f",&sal);
	do{
		cont++;
		if(sal > 5000){
			idade_5000 += idade;
			pessoas_5000++;
		}
		if(sal > 2000){
			qtd_2000++;
		}
		if(idade > 40){
			media_40 += sal;
			idade_40++;
		}
		if(vez == 1){
			maior_idade = idade;
			maior_sal = sal;
		} else if(idade > maior_idade){
			maior_idade = idade;
			maior_sal = sal;
		}
		vez++;
		printf("Digite sua idade: ");
		scanf("%i",&idade);
		printf("Digite seu salário: ");
		scanf("%f",&sal);

	} while(cont < 3);
	if(pessoas_5000 > 0){
	media_5000 = idade_5000/pessoas_5000;	
	}
	printf("Média de pessoas que ganham mais de R$5000: %.0f\n",media_5000);
	printf("Quantidade de pessoas com salário acima de R$2000: %i\n",qtd_2000);
	printf("Média de salário de pessoas acima dos 40 anos: R$%.2f\n",idade_40);
	printf("Maior idade e salário dessa pessoa: %i, %.2f\n",maior_idade,maior_sal);
}
