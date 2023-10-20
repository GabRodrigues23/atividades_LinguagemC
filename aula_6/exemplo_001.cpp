#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char msg[10], msg2[10];
	int resu;
	// armazena os valores nos vetores msg e msg2
	printf("Digite a 1° Palavra: ");
	gets(msg);
	printf("Digite a 2° Palavra: ");
	gets(msg2);
	// verifica se os vetores são iguais
	resu = strcmp(msg,msg2); 
	/* 
	|	resu = -1 -> msg > msg2		| 
	|	resu = 1 -> msg < msg2		| 
	|	resu = 0 -> msg = msg2		|
	*/
	// confere o resultado da verificação e determina se são iguais ou não
	if(resu == 0){
		printf("As strings são iguais!");
	} else{
		printf("As strings são diferentes!");
	}
	return 0;
}

/* 
os vetores podem armazenar 10 valores, pois estão declarados assim, mas 
o programa só está programado pra armazenar 1 valor
*/
