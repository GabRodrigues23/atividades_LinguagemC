#include <stdio.h>
#include <locale>

int main() {
	setlocale(LC_ALL,"Portuguese");
	float n1, n2, op;
	int opcao;
	printf("Digite o 1� n�mero: ");
	scanf("%f",&n1);
	printf("Digite o 2� n�mero: ");
	scanf("%f",&n2);
	printf("[1] Soma\n[2] Subtra��o\n[3] Multiplica��o\n[4] Divis�o\nDigite sua op��o: ");
	scanf("%i",&opcao);
	switch(opcao){
		   case 1:
		   		printf("Voc� escolheu Soma!\n");
	   	   		op = n1 + n2;
	   	   		break;
		   case 2:
		   		printf("Voc� escolheu Subtra��o!\n");
	   	   		op = n1 - n2;
			  	break;
 	   		case 3:
		   		printf("Voc� escolheu Multiplica��o!\n");
	   	   		op = n1 * n2;
	   	   		break;
 	   		case 4:
		   		printf("Voc� escolheu Divis�o!\n");
	   	   		op = n1 / n2;
	   	   		break;
 	   		default:
 	   			printf("Voc� n�o digitou uma op��o v�lida!\n");
 	   			break;
	}
	if(opcao >= 1 && opcao <= 4){
		printf("Resultado = %.0f",op);
	} else {
		printf("Tente Novamente!");
	}
	return 0;
}
