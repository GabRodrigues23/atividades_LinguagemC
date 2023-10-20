#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int vez_maior = 1, vez_menor = 1, qtd;
	float salario, maior_salario, menor_salario;
	
	for(int i = 0; i < 10; i++){
		printf("Digite seu salário: ");
		scanf("%f",&salario);
		// maior salario
		if(vez_maior == 1){
			maior_salario = salario;
		} else if(salario > maior_salario){
			maior_salario = salario;
		}
		vez_maior++;
		// menor salario
		if(vez_menor == 1){
			menor_salario = salario;
		} else if(salario < menor_salario){
			menor_salario = salario;
		}
		vez_menor++;
		// quantidade de pessoas com mais de 3mil
		if(salario > 3000){
			qtd++;
		}
	}
	printf("-------------------\n");
	printf("Maior salário: R$%.2f\nMenor salário: R$%.2f\nPessoas com mais de R$3000: %i",maior_salario,menor_salario,qtd);
	return 0;
}
