#include <stdio.h>
#include <locale>

int main() {
	setlocale(LC_ALL,"Portuguese");
	float n1, n2, op;
	int opcao;
	printf("Digite o 1° número: ");
	scanf("%f",&n1);
	printf("Digite o 2° número: ");
	scanf("%f",&n2);
	printf("[1] Soma\n[2] Subtração\n[3] Multiplicação\n[4] Divisão\nDigite sua opção: ");
	scanf("%i",&opcao);
	switch(opcao){
		   case 1:
		   		printf("Você escolheu Soma!\n");
	   	   		op = n1 + n2;
	   	   		break;
		   case 2:
		   		printf("Você escolheu Subtração!\n");
	   	   		op = n1 - n2;
			  	break;
 	   		case 3:
		   		printf("Você escolheu Multiplicação!\n");
	   	   		op = n1 * n2;
	   	   		break;
 	   		case 4:
		   		printf("Você escolheu Divisão!\n");
	   	   		op = n1 / n2;
	   	   		break;
 	   		default:
 	   			printf("Você não digitou uma opção válida!\n");
 	   			break;
	}
	if(opcao >= 1 && opcao <= 4){
		printf("Resultado = %.0f",op);
	} else {
		printf("Tente Novamente!");
	}
	return 0;
}
