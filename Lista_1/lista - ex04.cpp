#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade, opn, qtd_bom = 0, qtd_regular = 0;
	float media_otimo, idade_otimo = 0, qtd_otimo = 0;
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	while(idade > 0){
		printf("[1] Regular\n[2] Bom\n[3] �timo\nDigite sua opni�o: ");
		scanf("%i",&opn);
		// media otimo
		if(opn == 3){
			idade_otimo += idade;
			qtd_otimo++;
		}
		// qtd bom
		if(opn == 2){
			qtd_bom++;
		}
		// qtd regular
		if(opn == 1){
			qtd_regular++;
		}
		// valor inv�lido
		if(opn > 3){
			printf("Valor inv�lido, Digite um valor v�lido\n");
		}
		
		printf("\nDigite sua idade: ");
		scanf("%i",&idade);
	}
	// cont. media otimo
	if(qtd_otimo > 0){
		media_otimo = idade_otimo / qtd_otimo;
	} else{
		media_otimo = 0;
	}
	printf("--------> Avalia��es <--------\n");
	printf("�timo (m�dia de idade): %.1f\nBom: %i\nRegular: %i",media_otimo,qtd_bom,qtd_regular);
	return 0;
}
